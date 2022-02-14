
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lp55xx_device_config {int * dev_attr_group; int firmware_cb; int run_engine; } ;
struct lp55xx_chip {struct lp55xx_device_config* cfg; TYPE_1__* cl; } ;
struct device {int kobj; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

int FUNC_1(struct lp55xx_chip *VAR_1)
{
 struct device *VAR_2 = &VAR_1->cl->dev;
 struct lp55xx_device_config *VAR_3 = VAR_1->cfg;
 int VAR_4;

 if (!VAR_3->run_engine || !VAR_3->firmware_cb)
  goto dev_specific_attrs;

 VAR_4 = FUNC_0(&VAR_2->kobj, &VAR_0);
 if (VAR_4)
  return VAR_4;

dev_specific_attrs:
 return VAR_3->dev_attr_group ?
  FUNC_0(&VAR_2->kobj, VAR_3->dev_attr_group) : 0;
}
