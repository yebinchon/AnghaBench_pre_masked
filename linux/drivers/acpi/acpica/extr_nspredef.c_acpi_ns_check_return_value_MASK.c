
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expected_btypes; } ;
union acpi_predefined_info {TYPE_1__ info; } ;
struct TYPE_4__ {scalar_t__ type; } ;
union acpi_operand_object {TYPE_2__ common; } ;
typedef int u32 ;
struct acpi_namespace_node {int flags; } ;
struct acpi_evaluate_info {int return_flags; union acpi_operand_object* parent_package; union acpi_predefined_info* predefined; } ;
typedef scalar_t__ acpi_status ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (struct acpi_evaluate_info*,union acpi_operand_object**,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct acpi_evaluate_info*,union acpi_operand_object**) ;
 scalar_t__ FUNC_3 (struct acpi_evaluate_info*,struct acpi_namespace_node*,scalar_t__,union acpi_operand_object**) ;

acpi_status
FUNC_4(struct acpi_namespace_node *VAR_10,
      struct acpi_evaluate_info *VAR_11,
      u32 VAR_12,
      acpi_status VAR_13,
      union acpi_operand_object **VAR_14)
{
 acpi_status VAR_15;
 const union acpi_predefined_info *VAR_16;



 VAR_16 = VAR_11->predefined;
 if (!VAR_16) {
  return (VAR_7);
 }





 if ((VAR_13 != VAR_7) && (VAR_13 != VAR_6)) {
  return (VAR_7);
 }
 if (VAR_9 ||
     (!VAR_16->info.expected_btypes) ||
     (VAR_16->info.expected_btypes == VAR_2)) {
  return (VAR_7);
 }





 VAR_15 = FUNC_1(VAR_11, VAR_14,
        VAR_16->info.expected_btypes,
        VAR_0);
 if (FUNC_0(VAR_15)) {
  goto exit;
 }






 if (!(*VAR_14)) {
  goto exit;
 }





 if ((*VAR_14)->common.type == VAR_3) {
  VAR_11->parent_package = *VAR_14;
  VAR_15 = FUNC_2(VAR_11, VAR_14);
  if (FUNC_0(VAR_15)) {



   if ((VAR_15 != VAR_4) &&
       (VAR_15 != VAR_5)) {
    goto exit;
   }
  }
 }
 VAR_15 = FUNC_3(VAR_11, VAR_10, VAR_15, VAR_14);

exit:





 if (FUNC_0(VAR_15) || (VAR_11->return_flags & VAR_1)) {
  VAR_10->flags |= VAR_8;
 }

 return (VAR_15);
}
