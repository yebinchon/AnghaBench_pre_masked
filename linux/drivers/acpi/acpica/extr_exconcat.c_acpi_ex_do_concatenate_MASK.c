
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int type; } ;
struct TYPE_7__ {scalar_t__ length; int * pointer; } ;
struct TYPE_6__ {char* pointer; scalar_t__ length; } ;
struct TYPE_5__ {int value; } ;
union acpi_operand_object {TYPE_4__ common; TYPE_3__ buffer; TYPE_2__ string; TYPE_1__ integer; } ;
struct acpi_walk_state {int dummy; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_size ;
typedef int acpi_object_type ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__) ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (union acpi_operand_object*,union acpi_operand_object**) ;
 int FUNC_5 (union acpi_operand_object*,union acpi_operand_object**,int ) ;
 int FUNC_6 (union acpi_operand_object*,union acpi_operand_object**) ;
 int FUNC_7 (union acpi_operand_object*,union acpi_operand_object**,int ) ;
 scalar_t__ VAR_6 ;
 union acpi_operand_object* FUNC_8 (scalar_t__) ;
 union acpi_operand_object* FUNC_9 (scalar_t__) ;
 int FUNC_10 (union acpi_operand_object*) ;
 int VAR_7 ;
 int FUNC_11 (char*,int *,scalar_t__) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,char*) ;

acpi_status
FUNC_15(union acpi_operand_object *VAR_8,
         union acpi_operand_object *VAR_9,
         union acpi_operand_object **VAR_10,
         struct acpi_walk_state *VAR_11)
{
 union acpi_operand_object *VAR_12 = VAR_8;
 union acpi_operand_object *VAR_13 = VAR_9;
 union acpi_operand_object *VAR_14 = ((void*)0);
 union acpi_operand_object *VAR_15;
 char *VAR_16;
 acpi_object_type VAR_17;
 acpi_object_type VAR_18;
 acpi_status VAR_19;

 FUNC_2(VAR_7);



 switch (VAR_8->common.type) {
 case 129:
 case 128:
 case 130:

  VAR_17 = VAR_8->common.type;
  break;

 default:



  VAR_19 =
      FUNC_6(VAR_8,
         &VAR_12);
  if (FUNC_1(VAR_19)) {
   goto cleanup;
  }

  VAR_17 = 128;
  break;
 }



 switch (VAR_9->common.type) {
 case 129:
 case 128:
 case 130:

  VAR_18 = VAR_9->common.type;
  break;

 default:



  VAR_19 =
      FUNC_6(VAR_9,
         &VAR_13);
  if (FUNC_1(VAR_19)) {
   goto cleanup;
  }

  VAR_18 = 128;
  break;
 }
 switch (VAR_17) {
 case 129:

  VAR_19 =
      FUNC_5(VAR_13, &VAR_14,
            VAR_0);
  break;

 case 130:

  VAR_19 =
      FUNC_4(VAR_13, &VAR_14);
  break;

 case 128:

  switch (VAR_18) {
  case 129:
  case 128:
  case 130:



   VAR_19 =
       FUNC_7(VAR_13,
            &VAR_14,
            VAR_1);
   break;

  default:

   VAR_19 = VAR_5;
   break;
  }
  break;

 default:

  FUNC_0((VAR_3, "Invalid object type: 0x%X",
       VAR_8->common.type));
  VAR_19 = VAR_2;
 }

 if (FUNC_1(VAR_19)) {
  goto cleanup;
 }



 if ((VAR_13 != VAR_9) && (VAR_13 != VAR_14)) {
  FUNC_10(VAR_13);
 }

 VAR_13 = VAR_14;
 switch (VAR_17) {
 case 129:




  VAR_15 = FUNC_8((acpi_size)
          FUNC_3
          (VAR_6));
  if (!VAR_15) {
   VAR_19 = VAR_4;
   goto cleanup;
  }

  VAR_16 = (char *)VAR_15->buffer.pointer;



  FUNC_11(VAR_16, &VAR_8->integer.value,
         VAR_6);



  FUNC_11(VAR_16 + VAR_6,
         &VAR_13->integer.value,
         VAR_6);
  break;

 case 128:



  VAR_15 = FUNC_9(((acpi_size)
           VAR_12->
           string.length +
           VAR_13->
           string.length));
  if (!VAR_15) {
   VAR_19 = VAR_4;
   goto cleanup;
  }

  VAR_16 = VAR_15->string.pointer;



  FUNC_14(VAR_16, VAR_12->string.pointer);
  FUNC_13(VAR_16, VAR_13->string.pointer);
  break;

 case 130:



  VAR_15 = FUNC_8(((acpi_size)
           VAR_8->buffer.
           length +
           VAR_13->
           buffer.length));
  if (!VAR_15) {
   VAR_19 = VAR_4;
   goto cleanup;
  }

  VAR_16 = (char *)VAR_15->buffer.pointer;



  FUNC_11(VAR_16, VAR_8->buffer.pointer,
         VAR_8->buffer.length);
  FUNC_11(VAR_16 + VAR_8->buffer.length,
         VAR_13->buffer.pointer,
         VAR_13->buffer.length);
  break;

 default:



  FUNC_0((VAR_3, "Invalid object type: 0x%X",
       VAR_8->common.type));
  VAR_19 = VAR_2;
  goto cleanup;
 }

 *VAR_10 = VAR_15;

cleanup:
 if (VAR_12 != VAR_8) {
  FUNC_10(VAR_12);
 }

 if (VAR_13 != VAR_9) {
  FUNC_10(VAR_13);
 }

 FUNC_12(VAR_19);
}
