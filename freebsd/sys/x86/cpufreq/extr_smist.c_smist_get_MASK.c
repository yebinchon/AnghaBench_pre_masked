
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct smist_softc {struct cf_setting* sets; } ;
struct cf_setting {int freq; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int*) ;
 struct smist_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct smist_softc*,int*,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, struct cf_setting *VAR_3)
{
 struct smist_softc *VAR_4;
 uint64_t VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_4 = FUNC_2(VAR_2);
 VAR_7 = FUNC_3(VAR_4, &VAR_6, VAR_1);
 if (VAR_7 != 0)
  return (VAR_7);


 if (VAR_4->sets[VAR_6].freq == VAR_0) {
  FUNC_1(0, &VAR_5);
  VAR_4->sets[VAR_6].freq = VAR_5 / 1000000;
  FUNC_0(VAR_2, "get calibrated new rate of %d\n",
      VAR_4->sets[VAR_6].freq);
 }
 *VAR_3 = VAR_4->sets[VAR_6];

 return (0);
}
