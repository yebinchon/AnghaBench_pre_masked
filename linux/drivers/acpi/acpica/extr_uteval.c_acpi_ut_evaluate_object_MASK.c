
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
union acpi_operand_object {TYPE_1__ common; } ;
typedef int u32 ;
struct acpi_namespace_node {int dummy; } ;
struct acpi_evaluate_info {char const* relative_pathname; union acpi_operand_object* return_object; struct acpi_namespace_node* prefix_node; } ;
typedef scalar_t__ acpi_status ;


 struct acpi_evaluate_info* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,struct acpi_namespace_node*,char const*,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct acpi_evaluate_info*) ;
 int FUNC_6 (int ) ;




 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_7 (struct acpi_evaluate_info*) ;
 int FUNC_8 (struct acpi_namespace_node*) ;
 int FUNC_9 (union acpi_operand_object*) ;
 int FUNC_10 (union acpi_operand_object*) ;
 int FUNC_11 (scalar_t__) ;
 int VAR_11 ;

acpi_status
FUNC_12(struct acpi_namespace_node *VAR_12,
   const char *VAR_13,
   u32 VAR_14,
   union acpi_operand_object **VAR_15)
{
 struct acpi_evaluate_info *VAR_16;
 acpi_status VAR_17;
 u32 VAR_18;

 FUNC_6(VAR_11);



 VAR_16 = FUNC_0(sizeof(struct acpi_evaluate_info));
 if (!VAR_16) {
  FUNC_11(VAR_8);
 }

 VAR_16->prefix_node = VAR_12;
 VAR_16->relative_pathname = VAR_13;



 VAR_17 = FUNC_7(VAR_16);
 if (FUNC_4(VAR_17)) {
  if (VAR_17 == VAR_7) {
   FUNC_1((VAR_4,
       "[%4.4s.%s] was not found\n",
       FUNC_8(VAR_12),
       VAR_13));
  } else {
   FUNC_3("Method execution failed",
       VAR_12, VAR_13, VAR_17);
  }

  goto cleanup;
 }



 if (!VAR_16->return_object) {
  if (VAR_14) {
   FUNC_3("No object was returned from",
       VAR_12, VAR_13, VAR_6);

   VAR_17 = VAR_6;
  }

  goto cleanup;
 }



 switch ((VAR_16->return_object)->common.type) {
 case 130:

  VAR_18 = VAR_1;
  break;

 case 131:

  VAR_18 = VAR_0;
  break;

 case 128:

  VAR_18 = VAR_3;
  break;

 case 129:

  VAR_18 = VAR_2;
  break;

 default:

  VAR_18 = 0;
  break;
 }

 if ((VAR_10) && (!VAR_14)) {





  FUNC_10(VAR_16->return_object);
  goto cleanup;
 }



 if (!(VAR_14 & VAR_18)) {
  FUNC_3("Return object type is incorrect",
      VAR_12, VAR_13, VAR_9);

  FUNC_2((VAR_5,
       "Type returned from %s was incorrect: %s, expected Btypes: 0x%X",
       VAR_13,
       FUNC_9(VAR_16->return_object),
       VAR_14));



  FUNC_10(VAR_16->return_object);
  VAR_17 = VAR_9;
  goto cleanup;
 }



 *VAR_15 = VAR_16->return_object;

cleanup:
 FUNC_5(VAR_16);
 FUNC_11(VAR_17);
}
