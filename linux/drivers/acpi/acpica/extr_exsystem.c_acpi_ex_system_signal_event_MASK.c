
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int os_semaphore; } ;
union acpi_operand_object {TYPE_1__ event; } ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

acpi_status FUNC_3(union acpi_operand_object * VAR_2)
{
 acpi_status VAR_3 = VAR_0;

 FUNC_0(VAR_1);

 if (VAR_2) {
  VAR_3 =
      FUNC_1(VAR_2->event.os_semaphore, 1);
 }

 FUNC_2(VAR_3);
}
