
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {union acpi_operand_object* prev; union acpi_operand_object* next; } ;
union acpi_operand_object {TYPE_1__ mutex; } ;
struct acpi_thread_state {union acpi_operand_object* acquired_mutex_list; } ;



__attribute__((used)) static void
FUNC_0(union acpi_operand_object *VAR_0,
     struct acpi_thread_state *VAR_1)
{
 union acpi_operand_object *VAR_2;

 VAR_2 = VAR_1->acquired_mutex_list;



 VAR_0->mutex.prev = ((void*)0);
 VAR_0->mutex.next = VAR_2;



 if (VAR_2) {
  VAR_2->mutex.prev = VAR_0;
 }



 VAR_1->acquired_mutex_list = VAR_0;
}
