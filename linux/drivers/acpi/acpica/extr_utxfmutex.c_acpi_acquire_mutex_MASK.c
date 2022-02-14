
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int os_mutex; } ;
union acpi_operand_object {TYPE_1__ mutex; } ;
typedef int u16 ;
typedef int acpi_string ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,union acpi_operand_object**) ;

acpi_status
FUNC_3(acpi_handle VAR_0, acpi_string VAR_1, u16 VAR_2)
{
 acpi_status VAR_3;
 union acpi_operand_object *VAR_4;



 VAR_3 = FUNC_2(VAR_0, VAR_1, &VAR_4);
 if (FUNC_0(VAR_3)) {
  return (VAR_3);
 }



 VAR_3 = FUNC_1(VAR_4->mutex.os_mutex, VAR_2);
 return (VAR_3);
}
