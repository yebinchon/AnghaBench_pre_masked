
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int acpi_status ;
struct TYPE_2__ {int acpi_disable; int smi_command; int acpi_enable; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int ,int,int) ;
 int VAR_7 ;
 int FUNC_6 (int ) ;

acpi_status FUNC_7(u32 VAR_8)
{

 acpi_status VAR_9;

 FUNC_4(VAR_7);



 if (VAR_6) {
  FUNC_6(VAR_4);
 }





 if (!VAR_5.smi_command) {
  FUNC_1((VAR_2,
       "No SMI_CMD in FADT, mode transition failed"));
  FUNC_6(VAR_3);
 }
 if (!VAR_5.acpi_enable && !VAR_5.acpi_disable) {
  FUNC_1((VAR_2,
       "No ACPI mode transition supported in this system "
       "(enable/disable both zero)"));
  FUNC_6(VAR_4);
 }

 switch (VAR_8) {
 case 129:



  VAR_9 = FUNC_5(VAR_5.smi_command,
         (u32) VAR_5.acpi_enable, 8);
  FUNC_0((VAR_0,
      "Attempting to enable ACPI mode\n"));
  break;

 case 128:




  VAR_9 = FUNC_5(VAR_5.smi_command,
         (u32)VAR_5.acpi_disable, 8);
  FUNC_0((VAR_0,
      "Attempting to enable Legacy (non-ACPI) mode\n"));
  break;

 default:

  FUNC_6(VAR_1);
 }

 if (FUNC_3(VAR_9)) {
  FUNC_2((VAR_2, VAR_9,
    "Could not write ACPI mode change"));
  FUNC_6(VAR_9);
 }

 FUNC_6(VAR_4);
}
