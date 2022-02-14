
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pointer; scalar_t__ length; } ;
struct TYPE_3__ {int value; } ;
union acpi_object {TYPE_2__ buffer; TYPE_1__ integer; void* type; } ;
typedef int uint8_t ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,struct acpi_object_list*,struct acpi_buffer*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static int FUNC_7(acpi_handle VAR_3, uint8_t *VAR_4,
       int VAR_5, int VAR_6)
{
 acpi_status VAR_7;
 union acpi_object VAR_8[2], *VAR_9;
 struct acpi_object_list VAR_10;
 struct acpi_buffer VAR_11 = { VAR_0, ((void*)0)};

 VAR_10.count = 2;
 VAR_10.pointer = &VAR_8[0];

 VAR_8[0].type = VAR_1;
 VAR_8[0].integer.value = VAR_5;

 VAR_8[1].type = VAR_1;
 VAR_8[1].integer.value = VAR_6;

 VAR_7 = FUNC_1(VAR_3, ((void*)0), &VAR_10, &VAR_11);
 if (FUNC_0(VAR_7)) {
  FUNC_6("failed to evaluate ROM got %s\n",
   FUNC_2(VAR_7));
  return -VAR_2;
 }
 VAR_9 = (union acpi_object *)VAR_11.pointer;
 VAR_6 = FUNC_5(VAR_6, (int)VAR_9->buffer.length);
 FUNC_4(VAR_4+VAR_5, VAR_9->buffer.pointer, VAR_6);
 FUNC_3(VAR_11.pointer);
 return VAR_6;
}
