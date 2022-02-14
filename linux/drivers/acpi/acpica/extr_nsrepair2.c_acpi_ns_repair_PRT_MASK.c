
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {scalar_t__ count; union acpi_operand_object** elements; } ;
union acpi_operand_object {TYPE_2__ common; TYPE_1__ package; } ;
typedef scalar_t__ u32 ;
struct acpi_evaluate_info {int node_flags; int full_pathname; int return_flags; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static acpi_status
FUNC_1(struct acpi_evaluate_info *VAR_4,
     union acpi_operand_object **VAR_5)
{
 union acpi_operand_object *VAR_6 = *VAR_5;
 union acpi_operand_object **VAR_7;
 union acpi_operand_object **VAR_8;
 union acpi_operand_object *VAR_9;
 union acpi_operand_object *VAR_10;
 u32 VAR_11;
 u32 VAR_12;



 VAR_7 = VAR_6->package.elements;
 VAR_11 = VAR_6->package.count;



 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++, VAR_7++) {
  VAR_10 = *VAR_7;
  VAR_8 = VAR_10->package.elements;



  if (VAR_10->package.count < 4) {
   continue;
  }







  VAR_9 = VAR_8[3];
  if (!VAR_9 || (VAR_9->common.type != VAR_1)) {
   VAR_8[3] = VAR_8[2];
   VAR_8[2] = VAR_9;
   VAR_4->return_flags |= VAR_0;

   FUNC_0((VAR_2,
           VAR_4->full_pathname,
           VAR_4->node_flags,
           "PRT[%X]: Fixed reversed SourceName and SourceIndex",
           VAR_12));
  }
 }

 return (VAR_3);
}
