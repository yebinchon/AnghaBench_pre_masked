
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reference_count; } ;
union acpi_operand_object {TYPE_1__ common; } ;
typedef int u32 ;
struct acpi_simple_repair_info {int (* object_converter ) (int ,union acpi_operand_object*,union acpi_operand_object**) ;} ;
struct acpi_evaluate_info {int return_btype; int return_flags; int full_pathname; int node; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_9 ;
 int FUNC_5 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (union acpi_operand_object*,union acpi_operand_object**) ;
 int FUNC_7 (union acpi_operand_object*,union acpi_operand_object**) ;
 int FUNC_8 (union acpi_operand_object*,union acpi_operand_object**) ;
 struct acpi_simple_repair_info* FUNC_9 (int ,int,int) ;
 int FUNC_10 (struct acpi_evaluate_info*,int,int,union acpi_operand_object**) ;
 int FUNC_11 (struct acpi_evaluate_info*,union acpi_operand_object*,union acpi_operand_object**) ;
 int FUNC_12 (union acpi_operand_object*) ;
 int FUNC_13 (union acpi_operand_object*) ;
 int VAR_14 ;
 int FUNC_14 (int ,union acpi_operand_object*,union acpi_operand_object**) ;

acpi_status
FUNC_15(struct acpi_evaluate_info *VAR_15,
        u32 VAR_16,
        u32 VAR_17,
        union acpi_operand_object **VAR_18)
{
 union acpi_operand_object *VAR_19 = *VAR_18;
 union acpi_operand_object *VAR_20 = ((void*)0);
 acpi_status VAR_21;
 const struct acpi_simple_repair_info *VAR_22;

 FUNC_3(VAR_14);





 VAR_22 = FUNC_9(VAR_15->node,
       VAR_15->return_btype,
       VAR_17);
 if (VAR_22) {
  if (!VAR_19) {
   FUNC_5((VAR_12, VAR_15->full_pathname,
           VAR_9,
           "Missing expected return value"));
  }

  VAR_21 = VAR_22->object_converter(VAR_15->node, VAR_19,
            &VAR_20);
  if (FUNC_2(VAR_21)) {



   FUNC_1((VAR_12, VAR_21,
     "During return object analysis"));
   return (VAR_21);
  }
  if (VAR_20) {
   goto object_repaired;
  }
 }





 if (VAR_15->return_btype & VAR_16) {
  return (VAR_13);
 }
 if (!VAR_19) {
  if (VAR_16 && (!(VAR_16 & VAR_6))) {
   if (VAR_17 != VAR_1) {
    FUNC_5((VAR_12,
            VAR_15->full_pathname,
            VAR_9,
            "Found unexpected NULL package element"));

    VAR_21 =
        FUNC_10(VAR_15,
        VAR_16,
        VAR_17,
        VAR_18);
    if (FUNC_4(VAR_21)) {
     return (VAR_13);
    }
   } else {
    FUNC_5((VAR_12,
            VAR_15->full_pathname,
            VAR_9,
            "Missing expected return value"));
   }

   return (VAR_10);
  }
 }

 if (VAR_16 & VAR_5) {
  VAR_21 = FUNC_7(VAR_19, &VAR_20);
  if (FUNC_4(VAR_21)) {
   goto object_repaired;
  }
 }
 if (VAR_16 & VAR_8) {
  VAR_21 = FUNC_8(VAR_19, &VAR_20);
  if (FUNC_4(VAR_21)) {
   goto object_repaired;
  }
 }
 if (VAR_16 & VAR_4) {
  VAR_21 = FUNC_6(VAR_19, &VAR_20);
  if (FUNC_4(VAR_21)) {
   goto object_repaired;
  }
 }
 if (VAR_16 & VAR_7) {
  VAR_21 =
      FUNC_11(VAR_15, VAR_19, &VAR_20);
  if (FUNC_4(VAR_21)) {




   *VAR_18 = VAR_20;
   VAR_15->return_flags |= VAR_2;
   return (VAR_13);
  }
 }



 return (VAR_11);

object_repaired:



 if (VAR_17 != VAR_1) {



  if (!(VAR_15->return_flags & VAR_3)) {
   VAR_20->common.reference_count =
       VAR_19->common.reference_count;
  }

  FUNC_0((VAR_0,
      "%s: Converted %s to expected %s at Package index %u\n",
      VAR_15->full_pathname,
      FUNC_12(VAR_19),
      FUNC_12(VAR_20),
      VAR_17));
 } else {
  FUNC_0((VAR_0,
      "%s: Converted %s to expected %s\n",
      VAR_15->full_pathname,
      FUNC_12(VAR_19),
      FUNC_12(VAR_20)));
 }



 FUNC_13(VAR_19);
 *VAR_18 = VAR_20;
 VAR_15->return_flags |= VAR_2;
 return (VAR_13);
}
