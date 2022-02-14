
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ascii; } ;
struct TYPE_4__ {int type; TYPE_1__ name; } ;
union acpi_operand_object {TYPE_2__ node; } ;
typedef scalar_t__ u32 ;
struct acpi_evaluate_info {scalar_t__ return_btype; int node_flags; int full_pathname; } ;
typedef int acpi_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (union acpi_operand_object*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct acpi_evaluate_info*,union acpi_operand_object*) ;
 scalar_t__ FUNC_4 (union acpi_operand_object*) ;
 int FUNC_5 (struct acpi_evaluate_info*,scalar_t__,scalar_t__,union acpi_operand_object**) ;
 int FUNC_6 (char*,scalar_t__) ;
 int FUNC_7 (union acpi_operand_object*) ;
 int FUNC_8 (int ) ;

acpi_status
FUNC_9(struct acpi_evaluate_info *VAR_7,
     union acpi_operand_object **VAR_8,
     u32 VAR_9, u32 VAR_10)
{
 union acpi_operand_object *VAR_11 = *VAR_8;
 acpi_status VAR_12 = VAR_6;
 char VAR_13[96];



 if (VAR_11 &&
     FUNC_0(VAR_11) == VAR_0) {
  FUNC_2((VAR_5, VAR_7->full_pathname,
          VAR_7->node_flags,
          "Invalid return type - Found a Namespace node [%4.4s] type %s",
          VAR_11->node.name.ascii,
          FUNC_8(VAR_11->node.
           type)));
  return (VAR_4);
 }
 VAR_7->return_btype = FUNC_4(VAR_11);
 if (VAR_7->return_btype == VAR_2) {


  goto type_error_exit;
 }



 if ((VAR_7->return_btype & VAR_9) == VAR_3) {
  VAR_12 = FUNC_3(VAR_7, VAR_11);
  return (VAR_12);
 }



 VAR_12 = FUNC_5(VAR_7, VAR_9,
           VAR_10, VAR_8);
 if (FUNC_1(VAR_12)) {
  return (VAR_6);
 }

type_error_exit:



 FUNC_6(VAR_13, VAR_9);

 if (!VAR_11) {
  FUNC_2((VAR_5, VAR_7->full_pathname,
          VAR_7->node_flags,
          "Expected return object of type %s",
          VAR_13));
 } else if (VAR_10 == VAR_1) {
  FUNC_2((VAR_5, VAR_7->full_pathname,
          VAR_7->node_flags,
          "Return type mismatch - found %s, expected %s",
          FUNC_7
          (VAR_11), VAR_13));
 } else {
  FUNC_2((VAR_5, VAR_7->full_pathname,
          VAR_7->node_flags,
          "Return Package type mismatch at index %u - "
          "found %s, expected %s", VAR_10,
          FUNC_7
          (VAR_11), VAR_13));
 }

 return (VAR_4);
}
