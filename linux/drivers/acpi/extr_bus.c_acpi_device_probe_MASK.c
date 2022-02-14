
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int driver; } ;
struct TYPE_3__ {int (* add ) (struct acpi_device*) ;int (* remove ) (struct acpi_device*) ;scalar_t__ notify; } ;
struct acpi_driver {int name; TYPE_1__ ops; } ;
struct TYPE_4__ {int bus_id; } ;
struct acpi_device {TYPE_2__ pnp; int * driver_data; struct acpi_driver* driver; scalar_t__ handler; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct acpi_device*) ;
 int FUNC_5 (struct acpi_device*) ;
 struct acpi_device* FUNC_6 (struct device*) ;
 struct acpi_driver* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_3)
{
 struct acpi_device *VAR_4 = FUNC_6(VAR_3);
 struct acpi_driver *VAR_5 = FUNC_7(VAR_3->driver);
 int VAR_6;

 if (VAR_4->handler && !FUNC_2(VAR_4))
  return -VAR_1;

 if (!VAR_5->ops.add)
  return -VAR_2;

 VAR_6 = VAR_5->ops.add(VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_4->driver = VAR_5;
 FUNC_0((VAR_0,
     "Driver [%s] successfully bound to device [%s]\n",
     VAR_5->name, VAR_4->pnp.bus_id));

 if (VAR_5->ops.notify) {
  VAR_6 = FUNC_1(VAR_4);
  if (VAR_6) {
   if (VAR_5->ops.remove)
    VAR_5->ops.remove(VAR_4);

   VAR_4->driver = ((void*)0);
   VAR_4->driver_data = ((void*)0);
   return VAR_6;
  }
 }

 FUNC_0((VAR_0, "Found driver [%s] for device [%s]\n",
     VAR_5->name, VAR_4->pnp.bus_id));
 FUNC_3(VAR_3);
 return 0;
}
