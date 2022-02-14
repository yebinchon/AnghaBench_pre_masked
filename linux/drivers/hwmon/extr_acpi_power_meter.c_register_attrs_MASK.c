
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sensor_template {scalar_t__ set; int index; int show; int * label; } ;
struct TYPE_5__ {int mode; int * name; } ;
struct TYPE_6__ {TYPE_2__ attr; scalar_t__ store; int show; } ;
struct sensor_device_attribute {TYPE_3__ dev_attr; int index; } ;
struct device {int dummy; } ;
struct acpi_power_meter_resource {size_t num_sensors; struct sensor_device_attribute* sensors; TYPE_1__* acpi_dev; } ;
struct TYPE_4__ {struct device dev; } ;


 int FUNC_0 (struct device*,TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct acpi_power_meter_resource *VAR_0,
     struct sensor_template *VAR_1)
{
 struct device *VAR_2 = &VAR_0->acpi_dev->dev;
 struct sensor_device_attribute *VAR_3 =
  &VAR_0->sensors[VAR_0->num_sensors];
 int VAR_4 = 0;

 while (VAR_1->label) {
  VAR_3->dev_attr.attr.name = VAR_1->label;
  VAR_3->dev_attr.attr.mode = 0444;
  VAR_3->dev_attr.show = VAR_1->show;
  VAR_3->index = VAR_1->index;

  if (VAR_1->set) {
   VAR_3->dev_attr.attr.mode |= 0200;
   VAR_3->dev_attr.store = VAR_1->set;
  }

  FUNC_1(&VAR_3->dev_attr.attr);
  VAR_4 = FUNC_0(VAR_2, &VAR_3->dev_attr);
  if (VAR_4) {
   VAR_3->dev_attr.attr.name = ((void*)0);
   goto error;
  }
  VAR_3++;
  VAR_0->num_sensors++;
  VAR_1++;
 }

error:
 return VAR_4;
}
