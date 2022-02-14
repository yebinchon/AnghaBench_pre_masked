
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct acpi_device {TYPE_1__* handler; } ;
struct acpi_bus_type {int (* cleanup ) (struct device*) ;} ;
struct TYPE_2__ {int (* unbind ) (struct device*) ;} ;


 struct acpi_device* FUNC_0 (struct device*) ;
 struct acpi_bus_type* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0)
{
 struct acpi_device *VAR_1 = FUNC_0(VAR_0);
 struct acpi_bus_type *VAR_2;

 if (!VAR_1)
  return 0;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 && VAR_2->cleanup)
  VAR_2->cleanup(VAR_0);
 else if (VAR_1->handler && VAR_1->handler->unbind)
  VAR_1->handler->unbind(VAR_0);

 FUNC_2(VAR_0);
 return 0;
}
