
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * pointer; } ;
struct TYPE_5__ {scalar_t__ value; } ;
struct TYPE_4__ {int count; union acpi_object* elements; } ;
union acpi_object {TYPE_3__ buffer; TYPE_2__ integer; TYPE_1__ package; } ;
typedef int acpi_handle ;


 int FUNC_0 (union acpi_object*) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 union acpi_object* FUNC_2 (int ,int *,int ,int ,int *,int ) ;
 int VAR_3 ;
 unsigned long long FUNC_3 (int ) ;
 unsigned long long FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(acpi_handle VAR_4)
{
 int VAR_5;
 union acpi_object *VAR_6, *VAR_7;

 VAR_6 = FUNC_2(VAR_4, &VAR_3,
   VAR_2, VAR_1,
   ((void*)0), VAR_0);
 if (!VAR_6) {
  FUNC_1("failed to evaluate _DSM\n");
  return;
 }

 VAR_7 = &VAR_6->package.elements[0];
 FUNC_1("MUX info connectors: %lld\n",
    (unsigned long long)VAR_7->integer.value);
 for (VAR_5 = 1; VAR_5 < VAR_6->package.count; VAR_5++) {
  union acpi_object *VAR_8 = &VAR_6->package.elements[VAR_5];
  union acpi_object *VAR_9 = &VAR_8->package.elements[0];
  union acpi_object *VAR_10 = &VAR_8->package.elements[1];
  FUNC_1("Connector id: 0x%016llx\n",
     (unsigned long long)VAR_9->integer.value);
  FUNC_1("  port id: %s\n",
         FUNC_4(VAR_10->buffer.pointer[0]));
  FUNC_1("  display mux info: %s\n",
         FUNC_3(VAR_10->buffer.pointer[1]));
  FUNC_1("  aux/dc mux info: %s\n",
         FUNC_3(VAR_10->buffer.pointer[2]));
  FUNC_1("  hpd mux info: %s\n",
         FUNC_3(VAR_10->buffer.pointer[3]));
 }

 FUNC_0(VAR_6);
}
