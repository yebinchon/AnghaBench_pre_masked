
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pcr_softc {int nmodes; int * pcr_vals; int dev; } ;
typedef scalar_t__ phandle_t ;
typedef int modes ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,char*,int *,int) ;
 scalar_t__ FUNC_2 (scalar_t__,char*) ;
 int FUNC_3 (scalar_t__) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct pcr_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_1)
{
 struct pcr_softc *VAR_2;
 phandle_t VAR_3;
 uint32_t VAR_4[3];
 int VAR_5;

 VAR_2 = FUNC_7(VAR_1);
 VAR_2->dev = VAR_1;

 VAR_3 = FUNC_9(FUNC_6(VAR_1));

 if (VAR_3 <= 0) {
  FUNC_8(VAR_1,"No CPU device tree node!\n");
  return (VAR_0);
 }

 if (FUNC_2(VAR_3, "power-mode-data") <= 0) {

  VAR_3 = FUNC_0(FUNC_3(VAR_3));
 }






 VAR_2->nmodes = FUNC_2(VAR_3, "power-mode-data");
 if (VAR_2->nmodes <= 0 || VAR_2->nmodes > sizeof(VAR_2->pcr_vals)) {
  FUNC_8(VAR_1,"No power mode data in device tree!\n");
  return (VAR_0);
 }
 FUNC_1(VAR_3, "power-mode-data", VAR_4, VAR_2->nmodes);
 VAR_2->nmodes /= sizeof(VAR_4[0]);


 for (VAR_5 = 0; VAR_5 < VAR_2->nmodes; VAR_5++)
  VAR_2->pcr_vals[FUNC_4(VAR_4[VAR_5])] = VAR_4[VAR_5];

 FUNC_5(VAR_1);
 return (0);
}
