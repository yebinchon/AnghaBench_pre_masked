
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_sci_handler_info {struct acpi_sci_handler_info* next; int context; int (* address ) (int ) ;} ;
typedef int acpi_cpu_flags ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct acpi_sci_handler_info* VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;

u32 FUNC_4(void)
{
 struct acpi_sci_handler_info *VAR_4;
 acpi_cpu_flags VAR_5;
 u32 VAR_6 = VAR_0;

 FUNC_0(VAR_3);



 if (!VAR_2) {
  return (VAR_6);
 }

 VAR_5 = FUNC_1(VAR_1);



 VAR_4 = VAR_2;
 while (VAR_4) {



  VAR_6 |= VAR_4->address(VAR_4->context);

  VAR_4 = VAR_4->next;
 }

 FUNC_2(VAR_1, VAR_5);
 return (VAR_6);
}
