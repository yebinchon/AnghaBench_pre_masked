
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct acpi_gpe_register_info {int enable_for_run; int enable_mask; } ;
struct acpi_gpe_event_info {scalar_t__ runtime_count; struct acpi_gpe_register_info* register_info; } ;
typedef int acpi_status ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct acpi_gpe_event_info*) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;

acpi_status
FUNC_5(struct acpi_gpe_event_info *VAR_3)
{
 struct acpi_gpe_register_info *VAR_4;
 u32 VAR_5;

 FUNC_1(VAR_2);

 VAR_4 = VAR_3->register_info;
 if (!VAR_4) {
  FUNC_4(VAR_0);
 }

 VAR_5 = FUNC_3(VAR_3);



 FUNC_0(VAR_4->enable_for_run, VAR_5);



 if (VAR_3->runtime_count) {
  FUNC_2(VAR_4->enable_for_run,
        (u8)VAR_5);
 }

 VAR_4->enable_mask = VAR_4->enable_for_run;
 FUNC_4(VAR_1);
}
