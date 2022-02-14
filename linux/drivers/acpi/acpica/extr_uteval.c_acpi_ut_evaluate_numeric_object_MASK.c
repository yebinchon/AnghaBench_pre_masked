
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_operand_object {TYPE_1__ integer; } ;
typedef int u64 ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct acpi_namespace_node*,char const*,int ,union acpi_operand_object**) ;
 int FUNC_3 (union acpi_operand_object*) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;

acpi_status
FUNC_5(const char *VAR_2,
    struct acpi_namespace_node *VAR_3,
    u64 *VAR_4)
{
 union acpi_operand_object *VAR_5;
 acpi_status VAR_6;

 FUNC_1(VAR_1);

 VAR_6 = FUNC_2(VAR_3, VAR_2,
      VAR_0, &VAR_5);
 if (FUNC_0(VAR_6)) {
  FUNC_4(VAR_6);
 }



 *VAR_4 = VAR_5->integer.value;



 FUNC_3(VAR_5);
 FUNC_4(VAR_6);
}
