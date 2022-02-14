
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_gpe_register_info {int status_address; } ;
struct acpi_gpe_event_info {struct acpi_gpe_register_info* register_info; } ;
typedef int acpi_status ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct acpi_gpe_event_info*) ;
 int FUNC_2 (int ,int *) ;

acpi_status FUNC_3(struct acpi_gpe_event_info *VAR_1)
{
 struct acpi_gpe_register_info *VAR_2;
 acpi_status VAR_3;
 u32 VAR_4;

 FUNC_0();



 VAR_2 = VAR_1->register_info;
 if (!VAR_2) {
  return (VAR_0);
 }





 VAR_4 = FUNC_1(VAR_1);

 VAR_3 =
     FUNC_2(VAR_4, &VAR_2->status_address);
 return (VAR_3);
}
