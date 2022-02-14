
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
struct TYPE_3__ {int count; union acpi_operand_object** elements; } ;
union acpi_operand_object {TYPE_2__ integer; TYPE_1__ package; } ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct acpi_evaluate_info {int node_flags; int full_pathname; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct acpi_evaluate_info*,union acpi_operand_object*,int,int,int,int ,char*) ;
 int FUNC_4 (union acpi_operand_object*,int) ;
 int VAR_5 ;

__attribute__((used)) static acpi_status
FUNC_5(struct acpi_evaluate_info *VAR_6,
     union acpi_operand_object **VAR_7)
{
 union acpi_operand_object *VAR_8 = *VAR_7;
 union acpi_operand_object **VAR_9;
 u32 VAR_10;
 union acpi_operand_object *VAR_11;
 acpi_status VAR_12;
 u8 VAR_13;
 u32 VAR_14;

 FUNC_1(VAR_5);




 VAR_10 = VAR_8->package.count - 1;
 VAR_14 = 0;
 while (VAR_14 < VAR_10) {
  VAR_9 = &VAR_8->package.elements[VAR_14 + 1];
  VAR_13 = VAR_3;

  if ((*VAR_9)->package.count == 0) {
   FUNC_2((VAR_1,
           VAR_6->full_pathname,
           VAR_6->node_flags,
           "SubPackage[%u] - removing entry due to zero count",
           VAR_14));
   VAR_13 = VAR_4;
   goto remove_element;
  }

  VAR_11 = (*VAR_9)->package.elements[1];
  if ((u32)VAR_11->integer.value == 0) {
   FUNC_2((VAR_1,
           VAR_6->full_pathname,
           VAR_6->node_flags,
           "SubPackage[%u] - removing entry due to invalid Type(0)",
           VAR_14));
   VAR_13 = VAR_4;
  }

remove_element:
  if (VAR_13) {
   FUNC_4(VAR_8, VAR_14 + 1);
   VAR_10--;
  } else {
   VAR_14++;
  }
 }



 VAR_11 = VAR_8->package.elements[0];
 VAR_11->integer.value = VAR_10;





 VAR_12 = FUNC_3(VAR_6, VAR_8, 1, 4, 1,
        VAR_0, "C-State Type");
 if (FUNC_0(VAR_12)) {
  return (VAR_12);
 }

 return (VAR_2);
}
