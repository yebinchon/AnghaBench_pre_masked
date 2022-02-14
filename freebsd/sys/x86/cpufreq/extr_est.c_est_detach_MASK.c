
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct est_softc {int freq_list; scalar_t__ msr_settings; scalar_t__ acpi_settings; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct est_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct est_softc *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  return (VAR_3);

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2->acpi_settings || VAR_2->msr_settings)
  FUNC_2(VAR_2->freq_list, VAR_0);
 return (0);
}
