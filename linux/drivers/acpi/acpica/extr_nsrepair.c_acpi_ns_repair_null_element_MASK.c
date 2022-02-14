
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int reference_count; } ;
union acpi_operand_object {TYPE_1__ common; } ;
typedef int u64 ;
typedef int u32 ;
struct acpi_evaluate_info {int return_flags; int full_pathname; TYPE_3__* parent_package; } ;
typedef int acpi_status ;
struct TYPE_5__ {int reference_count; } ;
struct TYPE_6__ {TYPE_2__ common; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 union acpi_operand_object* FUNC_2 (int ) ;
 union acpi_operand_object* FUNC_3 (int ) ;
 union acpi_operand_object* FUNC_4 (int ) ;
 int FUNC_5 (union acpi_operand_object*) ;
 int VAR_8 ;

acpi_status
FUNC_6(struct acpi_evaluate_info *VAR_9,
       u32 VAR_10,
       u32 VAR_11,
       union acpi_operand_object **VAR_12)
{
 union acpi_operand_object *VAR_13 = *VAR_12;
 union acpi_operand_object *VAR_14;

 FUNC_1(VAR_8);



 if (VAR_13) {
  return (VAR_7);
 }







 if (VAR_10 & VAR_3) {



  VAR_14 = FUNC_3((u64)0);
 } else if (VAR_10 & VAR_4) {



  VAR_14 = FUNC_4(0);
 } else if (VAR_10 & VAR_2) {



  VAR_14 = FUNC_2(0);
 } else {


  return (VAR_5);
 }

 if (!VAR_14) {
  return (VAR_6);
 }



 VAR_14->common.reference_count =
     VAR_9->parent_package->common.reference_count;

 FUNC_0((VAR_0,
     "%s: Converted NULL package element to expected %s at index %u\n",
     VAR_9->full_pathname,
     FUNC_5(VAR_14),
     VAR_11));

 *VAR_12 = VAR_14;
 VAR_9->return_flags |= VAR_1;
 return (VAR_7);
}
