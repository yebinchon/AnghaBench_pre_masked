
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pin_table_length; } ;
struct TYPE_4__ {TYPE_1__ gpio; } ;
struct acpi_resource {scalar_t__ type; TYPE_2__ data; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct acpi_resource *VAR_1, void *VAR_2)
{
 unsigned int *VAR_3 = VAR_2;

 if (VAR_1->type == VAR_0)
  *VAR_3 += VAR_1->data.gpio.pin_table_length;

 return 1;
}
