
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ value; } ;
struct TYPE_3__ {scalar_t__ count; union acpi_operand_object** elements; } ;
union acpi_operand_object {TYPE_2__ integer; TYPE_1__ package; } ;
typedef scalar_t__ u32 ;
struct acpi_evaluate_info {int node_flags; int full_pathname; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct acpi_evaluate_info*,union acpi_operand_object*,int ,int,int ,int ,char*) ;

__attribute__((used)) static acpi_status
FUNC_3(struct acpi_evaluate_info *VAR_4,
     union acpi_operand_object **VAR_5)
{
 union acpi_operand_object *VAR_6 = *VAR_5;
 union acpi_operand_object **VAR_7;
 u32 VAR_8;
 union acpi_operand_object **VAR_9;
 union acpi_operand_object *VAR_10;
 u32 VAR_11;
 acpi_status VAR_12;
 u32 VAR_13;







 VAR_12 = FUNC_2(VAR_4, VAR_6, 0, 6, 0,
        VAR_0,
        "CpuFrequency");
 if (FUNC_0(VAR_12)) {
  return (VAR_12);
 }





 VAR_11 = VAR_1;
 VAR_7 = VAR_6->package.elements;
 VAR_8 = VAR_6->package.count;

 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
  VAR_9 = (*VAR_7)->package.elements;
  VAR_10 = VAR_9[1];

  if ((u32)VAR_10->integer.value > VAR_11) {
   FUNC_1((VAR_2,
           VAR_4->full_pathname,
           VAR_4->node_flags,
           "SubPackage[%u,%u] - suspicious power dissipation values",
           VAR_13 - 1, VAR_13));
  }

  VAR_11 = (u32) VAR_10->integer.value;
  VAR_7++;
 }

 return (VAR_3);
}
