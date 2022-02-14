
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ length; int pointer; } ;
union acpi_object {TYPE_1__ buffer; } ;
struct acpi_namespace_node {int dummy; } ;
struct acpi_buffer {union acpi_object* pointer; void* length; } ;
typedef int acpi_status ;
typedef int acpi_rsdesc_size ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (union acpi_object*) ;
 int FUNC_2 (int ,int ,union acpi_object*,int ) ;
 int FUNC_3 (struct acpi_namespace_node*,char*,int *,struct acpi_buffer*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct acpi_namespace_node*,struct acpi_buffer*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct acpi_buffer*,struct acpi_buffer*) ;

__attribute__((used)) static acpi_status
FUNC_8(struct acpi_namespace_node *VAR_1, char *VAR_2)
{
 acpi_status VAR_3;
 struct acpi_buffer VAR_4;
 struct acpi_buffer VAR_5;
 struct acpi_buffer VAR_6;
 union acpi_object *VAR_7;

 FUNC_6("Resource Conversion Comparison:\n");

 VAR_6.length = VAR_0;
 VAR_4.length = VAR_0;
 VAR_5.length = VAR_0;



 VAR_3 = FUNC_3(VAR_1, VAR_2, ((void*)0), &VAR_4);
 if (FUNC_0(VAR_3)) {
  FUNC_6("Could not obtain %s: %s\n",
          VAR_2, FUNC_4(VAR_3));
  return (VAR_3);
 }



 VAR_3 = FUNC_5(VAR_1, &VAR_5);
 if (FUNC_0(VAR_3)) {
  FUNC_6("AcpiGetCurrentResources failed: %s\n",
          FUNC_4(VAR_3));
  goto exit1;
 }



 VAR_3 = FUNC_7(&VAR_5, &VAR_6);
 if (FUNC_0(VAR_3)) {
  FUNC_6("AcpiRsCreateAmlResources failed: %s\n",
          FUNC_4(VAR_3));
  goto exit2;
 }



 VAR_7 = VAR_4.pointer;

 FUNC_2(VAR_7->buffer.pointer,
          (acpi_rsdesc_size)VAR_7->buffer.
          length, VAR_6.pointer,
          (acpi_rsdesc_size)VAR_6.length);



 FUNC_1(VAR_6.pointer);
exit2:
 FUNC_1(VAR_5.pointer);
exit1:
 FUNC_1(VAR_4.pointer);
 return (VAR_3);
}
