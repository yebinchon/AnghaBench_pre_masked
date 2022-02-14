
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int mode; int * name; } ;
struct TYPE_10__ {TYPE_2__ attr; int store; int show; } ;
struct sensor_device_attribute {TYPE_5__ dev_attr; int index; } ;
struct device {int dummy; } ;
struct aem_rw_sensor_template {int index; int set; int show; int * label; } ;
struct aem_ro_sensor_template {int index; int show; int * label; } ;
struct aem_data {struct sensor_device_attribute* sensors; TYPE_1__* pdev; } ;
struct TYPE_9__ {TYPE_5__ dev_attr; } ;
struct TYPE_8__ {TYPE_5__ dev_attr; } ;
struct TYPE_6__ {struct device dev; } ;


 int FUNC_0 (struct aem_data*) ;
 int FUNC_1 (struct device*,TYPE_5__*) ;
 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct aem_data *VAR_2,
    const struct aem_ro_sensor_template *VAR_3,
    const struct aem_rw_sensor_template *VAR_4)
{
 struct device *VAR_5 = &VAR_2->pdev->dev;
 struct sensor_device_attribute *VAR_6 = VAR_2->sensors;
 int VAR_7;


 while (VAR_3->label) {
  FUNC_2(&VAR_6->dev_attr.attr);
  VAR_6->dev_attr.attr.name = VAR_3->label;
  VAR_6->dev_attr.attr.mode = 0444;
  VAR_6->dev_attr.show = VAR_3->show;
  VAR_6->index = VAR_3->index;

  VAR_7 = FUNC_1(VAR_5, &VAR_6->dev_attr);
  if (VAR_7) {
   VAR_6->dev_attr.attr.name = ((void*)0);
   goto error;
  }
  VAR_6++;
  VAR_3++;
 }


 while (VAR_4->label) {
  FUNC_2(&VAR_6->dev_attr.attr);
  VAR_6->dev_attr.attr.name = VAR_4->label;
  VAR_6->dev_attr.attr.mode = 0644;
  VAR_6->dev_attr.show = VAR_4->show;
  VAR_6->dev_attr.store = VAR_4->set;
  VAR_6->index = VAR_4->index;

  VAR_7 = FUNC_1(VAR_5, &VAR_6->dev_attr);
  if (VAR_7) {
   VAR_6->dev_attr.attr.name = ((void*)0);
   goto error;
  }
  VAR_6++;
  VAR_4++;
 }

 VAR_7 = FUNC_1(VAR_5, &VAR_0.dev_attr);
 if (VAR_7)
  goto error;
 VAR_7 = FUNC_1(VAR_5, &VAR_1.dev_attr);
 return VAR_7;

error:
 FUNC_0(VAR_2);
 return VAR_7;
}
