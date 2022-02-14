
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
struct TYPE_3__ {union acpi_object* pointer; int length; } ;
union acpi_object {TYPE_2__ integer; void* type; TYPE_1__ buffer; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_buffer {union acpi_object* pointer; int length; int * member_1; int member_0; } ;
typedef scalar_t__ acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ,int *,struct acpi_object_list*,struct acpi_buffer*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (union acpi_object*) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static union acpi_object *FUNC_5(acpi_handle VAR_4, int VAR_5,
        struct acpi_buffer *VAR_6)
{
 acpi_status VAR_7;
 union acpi_object VAR_8[2];
 struct acpi_object_list VAR_9;
 struct acpi_buffer VAR_10 = { VAR_0, ((void*)0) };

 VAR_9.count = 2;
 VAR_9.pointer = &VAR_8[0];

 VAR_8[0].type = VAR_2;
 VAR_8[0].integer.value = VAR_5;

 if (VAR_6) {
  VAR_8[1].type = VAR_1;
  VAR_8[1].buffer.length = VAR_6->length;
  VAR_8[1].buffer.pointer = VAR_6->pointer;
 } else {

  VAR_8[1].type = VAR_2;
  VAR_8[1].integer.value = 0;
 }

 VAR_7 = FUNC_1(VAR_4, ((void*)0), &VAR_9, &VAR_10);


 if (FUNC_0(VAR_7) && VAR_7 != VAR_3) {
  FUNC_4("failed to evaluate ATPX got %s\n",
         FUNC_2(VAR_7));
  FUNC_3(VAR_10.pointer);
  return ((void*)0);
 }

 return VAR_10.pointer;
}
