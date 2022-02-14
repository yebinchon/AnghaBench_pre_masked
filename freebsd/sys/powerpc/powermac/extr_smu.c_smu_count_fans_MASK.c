
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_softc {int * sc_fans; } ;
typedef scalar_t__ phandle_t ;
typedef int name ;
typedef int device_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,char*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 struct smu_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int ,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_0)
{
 struct smu_softc *VAR_1;
 phandle_t VAR_2, VAR_3, VAR_4;
 int VAR_5 = 0;

 VAR_3 = FUNC_6(VAR_0);
 VAR_1 = FUNC_3(VAR_0);


 for (VAR_4 = FUNC_0(VAR_3); VAR_4 != 0; VAR_4 = FUNC_2(VAR_4)) {
  char VAR_6[32];
  FUNC_5(VAR_6, 0, sizeof(VAR_6));
  FUNC_1(VAR_4, "name", VAR_6, sizeof(VAR_6));
  if (FUNC_8(VAR_6, "rpm-fans", 9) == 0 ||
      FUNC_8(VAR_6, "pwm-fans", 9) == 0 ||
      FUNC_8(VAR_6, "fans", 5) == 0)
   for (VAR_2 = FUNC_0(VAR_4); VAR_2 != 0;
        VAR_2 = FUNC_2(VAR_2)) {
    VAR_5++;

    if (VAR_1->sc_fans != ((void*)0)) {
     FUNC_7(VAR_0, VAR_2,
         VAR_5 - 1);
    }
   }
 }
 if (VAR_5 == 0) {
  FUNC_4(VAR_0, "WARNING: No fans detected!\n");
  return (0);
 }
 return (VAR_5);
}
