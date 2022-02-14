
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int* pointer; } ;
union acpi_object {TYPE_1__ buffer; int type; } ;
typedef int u8 ;
typedef int u32 ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;


 int* FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct acpi_namespace_node*,int ,union acpi_object**) ;
 int FUNC_6 (struct acpi_namespace_node*,union acpi_object*) ;
 int FUNC_7 (union acpi_object*) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ FUNC_9 (int*,int*,int) ;
 int FUNC_10 (int*,int ,int) ;

__attribute__((used)) static acpi_status
FUNC_11(struct acpi_namespace_node *VAR_5, u32 VAR_6)
{
 union acpi_object *VAR_7 = ((void*)0);
 union acpi_object *VAR_8 = ((void*)0);
 union acpi_object *VAR_9 = ((void*)0);
 u8 *VAR_10;
 union acpi_object VAR_11;
 acpi_status VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u8 VAR_15;

 VAR_13 = FUNC_4(VAR_6);
 if (VAR_13 == 0) {
  FUNC_8(" Ignoring zero length buffer");
  return (VAR_3);
 }



 VAR_10 = FUNC_0(VAR_13);
 if (!VAR_10) {
  return (VAR_2);
 }



 VAR_12 = FUNC_5(VAR_5, VAR_1, &VAR_7);
 if (FUNC_1(VAR_12)) {
  goto exit;
 }



 FUNC_8(VAR_0, VAR_6,
         VAR_7->buffer.length);
 for (VAR_14 = 0; ((VAR_14 < 8) && (VAR_14 < VAR_13)); VAR_14++) {
  FUNC_8(" %2.2X", VAR_7->buffer.pointer[VAR_14]);
 }
 FUNC_8("... ");
 FUNC_10(VAR_10, VAR_4, VAR_13);
 VAR_15 = VAR_6 % 8;
 if (VAR_15) {
  VAR_10[VAR_13 - 1] = FUNC_3(VAR_15);
 }

 VAR_11.type = VAR_1;
 VAR_11.buffer.length = VAR_13;
 VAR_11.buffer.pointer = VAR_10;

 VAR_12 = FUNC_6(VAR_5, &VAR_11);
 if (FUNC_1(VAR_12)) {
  goto exit;
 }



 VAR_12 = FUNC_5(VAR_5, VAR_1, &VAR_8);
 if (FUNC_1(VAR_12)) {
  goto exit;
 }

 if (FUNC_9(VAR_8->buffer.pointer, VAR_10, VAR_13)) {
  FUNC_8(" MISMATCH 2: New buffer value");
 }



 VAR_11.buffer.length = VAR_13;
 VAR_11.buffer.pointer = VAR_7->buffer.pointer;

 VAR_12 = FUNC_6(VAR_5, &VAR_11);
 if (FUNC_1(VAR_12)) {
  goto exit;
 }



 VAR_12 = FUNC_5(VAR_5, VAR_1, &VAR_9);
 if (FUNC_1(VAR_12)) {
  goto exit;
 }

 if (FUNC_9(VAR_7->buffer.pointer, VAR_9->buffer.pointer, VAR_13)) {
  FUNC_8(" MISMATCH 3: While restoring original buffer");
 }

exit:
 FUNC_2(VAR_10);
 if (VAR_7) {
  FUNC_7(VAR_7);
 }
 if (VAR_8) {
  FUNC_7(VAR_8);
 }
 if (VAR_9) {
  FUNC_7(VAR_9);
 }
 return (VAR_12);
}
