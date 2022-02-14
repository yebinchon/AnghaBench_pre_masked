
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
typedef union acpi_object {int dummy; } acpi_object ;
struct acpi_pkg_info {int length; int num_packages; scalar_t__ object_space; } ;
typedef int acpi_status ;
typedef int acpi_size ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,union acpi_operand_object*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (union acpi_operand_object*,int *,int ,struct acpi_pkg_info*) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;

__attribute__((used)) static acpi_status
FUNC_5(union acpi_operand_object *VAR_2,
    acpi_size *VAR_3)
{
 acpi_status VAR_4;
 struct acpi_pkg_info VAR_5;

 FUNC_1(VAR_1, VAR_2);

 VAR_5.length = 0;
 VAR_5.object_space = 0;
 VAR_5.num_packages = 1;

 VAR_4 =
     FUNC_3(VAR_2, ((void*)0),
          VAR_0, &VAR_5);
 if (FUNC_0(VAR_4)) {
  FUNC_4(VAR_4);
 }






 VAR_5.length +=
     FUNC_2(sizeof(union acpi_object)) *
     (acpi_size)VAR_5.num_packages;



 *VAR_3 = VAR_5.length;
 FUNC_4(VAR_4);
}
