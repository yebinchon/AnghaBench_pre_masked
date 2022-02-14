
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union acpi_object {scalar_t__ type; } ;
typedef scalar_t__ u8 ;
struct acpi_object_list {int dummy; } ;
struct acpi_buffer {scalar_t__ length; int * pointer; } ;
typedef scalar_t__ acpi_string ;
typedef int acpi_status ;
typedef scalar_t__ acpi_object_type ;
typedef int acpi_handle ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int (*) (int ,scalar_t__,struct acpi_object_list*,struct acpi_buffer*,scalar_t__)) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int ,int *,struct acpi_object_list*,struct acpi_buffer*) ;
 int FUNC_5 (int ,scalar_t__,int *) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;

acpi_status
FUNC_10(acpi_handle VAR_9,
      acpi_string VAR_10,
      struct acpi_object_list *VAR_11,
      struct acpi_buffer *VAR_12,
      acpi_object_type VAR_13)
{
 acpi_status VAR_14;
 u8 VAR_15 = VAR_7;
 acpi_handle VAR_16;
 char *VAR_17;

 FUNC_3(FUNC_10);



 if (!VAR_12) {
  FUNC_9(VAR_2);
 }

 if (VAR_12->length == VAR_0) {
  VAR_15 = VAR_8;
 }



 VAR_16 = VAR_9;
 if (VAR_10) {
  VAR_14 = FUNC_5(VAR_9, VAR_10, &VAR_16);
  if (FUNC_1(VAR_14)) {
   FUNC_9(VAR_14);
  }
 }

 VAR_17 = FUNC_6(VAR_16);
 if (!VAR_17) {
  FUNC_9(VAR_4);
 }



 VAR_14 = FUNC_4(VAR_16, ((void*)0), VAR_11,
          VAR_12);
 if (FUNC_1(VAR_14)) {
  goto exit;
 }



 if (VAR_13 == VAR_1) {
  goto exit;
 }

 if (VAR_12->length == 0) {



  FUNC_0((VAR_3, "%s did not return any object",
       VAR_17));
  VAR_14 = VAR_5;
  goto exit;
 }



 if (((union acpi_object *)VAR_12->pointer)->type == VAR_13) {
  goto exit;
 }



 FUNC_0((VAR_3,
      "Incorrect return type from %s - received [%s], requested [%s]",
      VAR_17,
      FUNC_8(((union acpi_object *)VAR_12->
        pointer)->type),
      FUNC_8(VAR_13)));

 if (VAR_15) {







  FUNC_7(VAR_12->pointer);
  VAR_12->pointer = ((void*)0);
 }

 VAR_12->length = 0;
 VAR_14 = VAR_6;

exit:
 FUNC_2(VAR_17);
 FUNC_9(VAR_14);
}
