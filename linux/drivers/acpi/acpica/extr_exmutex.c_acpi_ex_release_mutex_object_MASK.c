
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ acquisition_depth; scalar_t__ thread_id; int os_mutex; int * owner_thread; } ;
union acpi_operand_object {TYPE_1__ mutex; } ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (union acpi_operand_object*) ;
 union acpi_operand_object* VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;

acpi_status FUNC_5(union acpi_operand_object *VAR_4)
{
 acpi_status VAR_5 = VAR_1;

 FUNC_0(VAR_3);

 if (VAR_4->mutex.acquisition_depth == 0) {
  FUNC_4(VAR_0);
 }



 VAR_4->mutex.acquisition_depth--;
 if (VAR_4->mutex.acquisition_depth != 0) {



  FUNC_4(VAR_1);
 }

 if (VAR_4->mutex.owner_thread) {



  FUNC_2(VAR_4);
  VAR_4->mutex.owner_thread = ((void*)0);
 }



 if (VAR_4 == VAR_2) {
  VAR_5 = FUNC_1();
 } else {
  FUNC_3(VAR_4->mutex.os_mutex);
 }



 VAR_4->mutex.thread_id = 0;
 FUNC_4(VAR_5);
}
