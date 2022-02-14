
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pn_softc {int errata; int powernow_max_states; int pn_type; TYPE_1__* powernow_states; } ;
struct cf_setting {int freq; } ;
typedef int device_t ;
struct TYPE_2__ {int freq; int fid; int vid; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 struct pn_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct pn_softc*,int,int) ;
 int FUNC_3 (struct pn_softc*,int,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4, const struct cf_setting *VAR_5)
{
 struct pn_softc *VAR_6;
 int VAR_7, VAR_8;
 int VAR_9;
 int VAR_10;

 if (VAR_5 == ((void*)0))
  return (VAR_0);
 VAR_6 = FUNC_1(VAR_4);

 if (VAR_6->errata & VAR_3)
  return (VAR_2);

 for (VAR_9 = 0; VAR_9 < VAR_6->powernow_max_states; ++VAR_9)
  if (FUNC_0(VAR_6->powernow_states[VAR_9].freq / 1000, VAR_5->freq))
   break;

 VAR_7 = VAR_6->powernow_states[VAR_9].fid;
 VAR_8 = VAR_6->powernow_states[VAR_9].vid;

 VAR_10 = VAR_1;

 switch (VAR_6->pn_type) {
 case 129:
  VAR_10 = FUNC_2(VAR_6, VAR_7, VAR_8);
  break;
 case 128:
  VAR_10 = FUNC_3(VAR_6, VAR_7, VAR_8);
  break;
 }

 return (VAR_10);
}
