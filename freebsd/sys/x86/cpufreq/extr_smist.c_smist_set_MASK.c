
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smist_softc {TYPE_1__* sets; } ;
struct cf_setting {int freq; } ;
typedef int device_t ;
struct TYPE_2__ {int freq; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct smist_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct smist_softc*,int*,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3, const struct cf_setting *VAR_4)
{
 struct smist_softc *VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;


 VAR_5 = FUNC_3(VAR_3);
 if (FUNC_0(VAR_4->freq, VAR_5->sets[0].freq))
  VAR_8 = 0;
 else if (FUNC_0(VAR_4->freq, VAR_5->sets[1].freq))
  VAR_8 = 1;
 else
  return (VAR_0);

 FUNC_2(VAR_3, "requested setting %d\n", VAR_8);

 VAR_6 = FUNC_4(VAR_5, &VAR_7, VAR_1);
 if (VAR_7 == VAR_8)
  return (0);

 VAR_9 = 3;
 do {
  VAR_6 = FUNC_4(VAR_5, &VAR_8, VAR_2);


  if (VAR_6)
   FUNC_1(200);
 } while (VAR_6 && --VAR_9);
 FUNC_2(VAR_3, "set_state return %d, tried %d times\n",
     VAR_6, 4 - VAR_9);

 return (VAR_6);
}
