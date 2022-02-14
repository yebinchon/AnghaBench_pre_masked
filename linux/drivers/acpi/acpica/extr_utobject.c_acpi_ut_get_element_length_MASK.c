
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
struct TYPE_2__ {int * this_target_obj; } ;
union acpi_generic_state {TYPE_1__ pkg; } ;
typedef int u8 ;
struct acpi_pkg_info {int num_packages; int length; } ;
typedef int acpi_status ;
typedef int acpi_size ;




 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (union acpi_operand_object*,int *) ;

__attribute__((used)) static acpi_status
FUNC_2(u8 VAR_2,
      union acpi_operand_object *VAR_3,
      union acpi_generic_state *VAR_4, void *VAR_5)
{
 acpi_status VAR_6 = VAR_1;
 struct acpi_pkg_info *VAR_7 = (struct acpi_pkg_info *)VAR_5;
 acpi_size VAR_8;

 switch (VAR_2) {
 case 128:




  VAR_6 =
      FUNC_1(VAR_3,
         &VAR_8);
  if (FUNC_0(VAR_6)) {
   return (VAR_6);
  }

  VAR_7->length += VAR_8;
  break;

 case 129:



  VAR_7->num_packages++;
  VAR_4->pkg.this_target_obj = ((void*)0);
  break;

 default:



  return (VAR_0);
 }

 return (VAR_6);
}
