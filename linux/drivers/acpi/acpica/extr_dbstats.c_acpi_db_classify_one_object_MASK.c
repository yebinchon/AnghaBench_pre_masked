
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef union acpi_parse_object {int dummy; } acpi_parse_object ;
typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
typedef size_t u32 ;
struct acpi_namespace_node {size_t type; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_handle ;
struct TYPE_4__ {int opcode; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (union acpi_operand_object*) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 union acpi_operand_object* FUNC_1 (struct acpi_namespace_node*) ;
 TYPE_1__* FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;

__attribute__((used)) static acpi_status
FUNC_4(acpi_handle VAR_15,
       u32 VAR_16,
       void *VAR_17, void **VAR_18)
{
 struct acpi_namespace_node *VAR_19;
 union acpi_operand_object *VAR_20;
 u32 VAR_21;

 VAR_4++;

 VAR_19 = (struct acpi_namespace_node *)VAR_15;
 VAR_20 = FUNC_1(VAR_19);

 FUNC_0(VAR_20);

 VAR_21 = VAR_19->type;
 if (VAR_21 > VAR_0) {
  VAR_3++;
 } else {
  VAR_2[VAR_21]++;
 }

 return (VAR_1);
}
