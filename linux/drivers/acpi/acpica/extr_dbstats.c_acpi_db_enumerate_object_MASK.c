
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {union acpi_operand_object* handler; union acpi_operand_object** notify_list; } ;
struct TYPE_13__ {union acpi_operand_object* handler; union acpi_operand_object** notify_list; } ;
struct TYPE_12__ {union acpi_operand_object** notify_list; } ;
struct TYPE_11__ {union acpi_operand_object* handler; } ;
struct TYPE_10__ {union acpi_operand_object* handler; union acpi_operand_object** notify_list; } ;
struct TYPE_9__ {size_t count; union acpi_operand_object** elements; } ;
struct TYPE_8__ {size_t type; } ;
union acpi_operand_object {TYPE_7__ thermal_zone; TYPE_6__ processor; TYPE_5__ power_resource; TYPE_4__ region; TYPE_3__ device; TYPE_2__ package; TYPE_1__ common; } ;
typedef size_t u32 ;




 size_t VAR_0 ;
 size_t VAR_1 ;





 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (union acpi_operand_object*) ;

__attribute__((used)) static void FUNC_1(union acpi_operand_object *VAR_5)
{
 u32 VAR_6;

 if (!VAR_5) {
  return;
 }



 VAR_2++;

 if (VAR_5->common.type > VAR_1) {
  VAR_4++;
 } else {
  VAR_3[VAR_5->common.type]++;
 }



 switch (VAR_5->common.type) {
 case 132:

  for (VAR_6 = 0; VAR_6 < VAR_5->package.count; VAR_6++) {
   FUNC_1(VAR_5->package.elements[VAR_6]);
  }
  break;

 case 133:

  FUNC_1(VAR_5->device.notify_list[0]);
  FUNC_1(VAR_5->device.notify_list[1]);
  FUNC_1(VAR_5->device.handler);
  break;

 case 134:

  if (FUNC_0(VAR_5)) {
   VAR_3[134]++;
  }
  break;

 case 129:

  VAR_3[VAR_0]++;
  FUNC_1(VAR_5->region.handler);
  break;

 case 131:

  FUNC_1(VAR_5->power_resource.
      notify_list[0]);
  FUNC_1(VAR_5->power_resource.
      notify_list[1]);
  break;

 case 130:

  FUNC_1(VAR_5->processor.notify_list[0]);
  FUNC_1(VAR_5->processor.notify_list[1]);
  FUNC_1(VAR_5->processor.handler);
  break;

 case 128:

  FUNC_1(VAR_5->thermal_zone.notify_list[0]);
  FUNC_1(VAR_5->thermal_zone.notify_list[1]);
  FUNC_1(VAR_5->thermal_zone.handler);
  break;

 default:

  break;
 }
}
