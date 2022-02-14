
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pointer; } ;
struct TYPE_3__ {int type; } ;
union acpi_operand_object {TYPE_2__ string; TYPE_1__ common; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_size ;


 int VAR_0 ;
 int VAR_1 ;
 union acpi_operand_object* FUNC_0 (scalar_t__) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static acpi_status
FUNC_5(union acpi_operand_object *VAR_2,
          union acpi_operand_object **VAR_3)
{
 union acpi_operand_object *VAR_4;
 const char *VAR_5;

 VAR_5 = FUNC_1(VAR_2->common.type);

 VAR_4 = FUNC_0(((acpi_size)FUNC_4(VAR_5) + 9));
 if (!VAR_4) {
  return (VAR_0);
 }

 FUNC_3(VAR_4->string.pointer, "[");
 FUNC_2(VAR_4->string.pointer, VAR_5);
 FUNC_2(VAR_4->string.pointer, " Object]");

 *VAR_3 = VAR_4;
 return (VAR_1);
}
