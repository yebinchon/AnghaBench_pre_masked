
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct acpi_hest_ia_machine_check {int num_hardware_banks; } ;
struct acpi_hest_ia_error_bank {int dummy; } ;
struct acpi_hest_ia_deferred_check {int num_hardware_banks; } ;
struct acpi_hest_ia_corrected {int num_hardware_banks; } ;
struct acpi_hest_header {size_t type; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int) ;
 int* VAR_4 ;

__attribute__((used)) static int FUNC_1(struct acpi_hest_header *VAR_5)
{
 u16 VAR_6 = VAR_5->type;
 int VAR_7;

 if (VAR_6 >= VAR_3)
  return 0;

 VAR_7 = VAR_4[VAR_6];

 if (VAR_6 == VAR_1) {
  struct acpi_hest_ia_corrected *VAR_8;
  VAR_8 = (struct acpi_hest_ia_corrected *)VAR_5;
  VAR_7 = sizeof(*VAR_8) + VAR_8->num_hardware_banks *
   sizeof(struct acpi_hest_ia_error_bank);
 } else if (VAR_6 == VAR_0) {
  struct acpi_hest_ia_machine_check *VAR_9;
  VAR_9 = (struct acpi_hest_ia_machine_check *)VAR_5;
  VAR_7 = sizeof(*VAR_9) + VAR_9->num_hardware_banks *
   sizeof(struct acpi_hest_ia_error_bank);
 } else if (VAR_6 == VAR_2) {
  struct acpi_hest_ia_deferred_check *VAR_10;
  VAR_10 = (struct acpi_hest_ia_deferred_check *)VAR_5;
  VAR_7 = sizeof(*VAR_10) + VAR_10->num_hardware_banks *
   sizeof(struct acpi_hest_ia_error_bank);
 }
 FUNC_0(VAR_7 == -1);

 return VAR_7;
}
