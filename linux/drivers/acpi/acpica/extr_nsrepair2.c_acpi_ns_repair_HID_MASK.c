
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; char* pointer; } ;
struct TYPE_3__ {scalar_t__ type; } ;
union acpi_operand_object {TYPE_2__ string; TYPE_1__ common; } ;
struct acpi_evaluate_info {int full_pathname; int return_flags; int node_flags; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 union acpi_operand_object* FUNC_3 (scalar_t__) ;
 int FUNC_4 (union acpi_operand_object*) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static acpi_status
FUNC_6(struct acpi_evaluate_info *VAR_7,
     union acpi_operand_object **VAR_8)
{
 union acpi_operand_object *VAR_9 = *VAR_8;
 union acpi_operand_object *VAR_10;
 char *VAR_11;
 char *VAR_12;

 FUNC_1(VAR_6);



 if (VAR_9->common.type != VAR_2) {
  return (VAR_5);
 }

 if (VAR_9->string.length == 0) {
  FUNC_2((VAR_3,
          VAR_7->full_pathname, VAR_7->node_flags,
          "Invalid zero-length _HID or _CID string"));



  VAR_7->return_flags |= VAR_1;
  return (VAR_5);
 }



 VAR_10 = FUNC_3(VAR_9->string.length);
 if (!VAR_10) {
  return (VAR_4);
 }







 VAR_11 = VAR_9->string.pointer;
 if (*VAR_11 == '*') {
  VAR_11++;
  VAR_10->string.length--;

  FUNC_0((VAR_0,
      "%s: Removed invalid leading asterisk\n",
      VAR_7->full_pathname));
 }
 for (VAR_12 = VAR_10->string.pointer; *VAR_11; VAR_12++, VAR_11++) {
  *VAR_12 = (char)FUNC_5((int)*VAR_11);
 }

 FUNC_4(VAR_9);
 *VAR_8 = VAR_10;
 return (VAR_5);
}
