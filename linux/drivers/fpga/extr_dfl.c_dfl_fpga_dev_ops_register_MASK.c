
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int devt; int kobj; } ;
struct platform_device {TYPE_2__ dev; } ;
struct module {int dummy; } ;
struct file_operations {int dummy; } ;
struct TYPE_5__ {int * parent; } ;
struct TYPE_7__ {TYPE_1__ kobj; struct module* owner; } ;
struct dfl_feature_platform_data {TYPE_3__ cdev; } ;


 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (TYPE_3__*,struct file_operations const*) ;
 struct dfl_feature_platform_data* FUNC_2 (TYPE_2__*) ;

int FUNC_3(struct platform_device *VAR_0,
         const struct file_operations *VAR_1,
         struct module *VAR_2)
{
 struct dfl_feature_platform_data *VAR_3 = FUNC_2(&VAR_0->dev);

 FUNC_1(&VAR_3->cdev, VAR_1);
 VAR_3->cdev.owner = VAR_2;







 VAR_3->cdev.kobj.parent = &VAR_0->dev.kobj;

 return FUNC_0(&VAR_3->cdev, VAR_0->dev.devt, 1);
}
