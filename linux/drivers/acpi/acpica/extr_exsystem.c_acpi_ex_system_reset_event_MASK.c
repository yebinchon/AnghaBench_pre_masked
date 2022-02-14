
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int os_semaphore; } ;
union acpi_operand_object {TYPE_1__ event; } ;
typedef int acpi_status ;
typedef int acpi_semaphore ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ) ;

acpi_status FUNC_4(union acpi_operand_object *VAR_2)
{
 acpi_status VAR_3 = VAR_1;
 acpi_semaphore VAR_4;

 FUNC_0();





 VAR_3 =
     FUNC_2(VAR_0, 0, &VAR_4);
 if (FUNC_1(VAR_3)) {
  (void)FUNC_3(VAR_2->event.os_semaphore);
  VAR_2->event.os_semaphore = VAR_4;
 }

 return (VAR_3);
}
