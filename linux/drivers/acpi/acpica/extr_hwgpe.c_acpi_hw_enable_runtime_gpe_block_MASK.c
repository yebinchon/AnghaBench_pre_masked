
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct acpi_gpe_xrupt_info {int dummy; } ;
struct acpi_gpe_register_info {int enable_for_run; int mask_for_run; } ;
struct acpi_gpe_block_info {size_t register_count; struct acpi_gpe_register_info* register_info; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,struct acpi_gpe_register_info*) ;

acpi_status
FUNC_2(struct acpi_gpe_xrupt_info *VAR_1,
     struct acpi_gpe_block_info *VAR_2,
     void *VAR_3)
{
 u32 VAR_4;
 acpi_status VAR_5;
 struct acpi_gpe_register_info *VAR_6;
 u8 VAR_7;





 for (VAR_4 = 0; VAR_4 < VAR_2->register_count; VAR_4++) {
  VAR_6 = &VAR_2->register_info[VAR_4];
  if (!VAR_6->enable_for_run) {
   continue;
  }



  VAR_7 = VAR_6->enable_for_run &
      ~VAR_6->mask_for_run;
  VAR_5 =
      FUNC_1(VAR_7, VAR_6);
  if (FUNC_0(VAR_5)) {
   return (VAR_5);
  }
 }

 return (VAR_0);
}
