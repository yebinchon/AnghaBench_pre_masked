
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; } ;
struct platform_device {int * resource; TYPE_1__ dev; } ;
struct env {int regs; int hwmon_dev; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 struct env* FUNC_2 (TYPE_1__*,int,int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int ,int ,char*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (struct platform_device*,struct env*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_4)
{
 struct env *VAR_5 = FUNC_2(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 int VAR_6 = -VAR_0;

 if (!VAR_5)
  goto out;

 FUNC_7(&VAR_5->lock);

 VAR_5->regs = FUNC_4(&VAR_4->resource[0], 0, VAR_2, "pic16f747");
 if (!VAR_5->regs)
  goto out;

 VAR_6 = FUNC_8(&VAR_4->dev.kobj, &VAR_3);
 if (VAR_6)
  goto out_iounmap;

 VAR_5->hwmon_dev = FUNC_3(&VAR_4->dev);
 if (FUNC_0(VAR_5->hwmon_dev)) {
  VAR_6 = FUNC_1(VAR_5->hwmon_dev);
  goto out_sysfs_remove_group;
 }

 FUNC_6(VAR_4, VAR_5);
 VAR_6 = 0;

out:
 return VAR_6;

out_sysfs_remove_group:
 FUNC_9(&VAR_4->dev.kobj, &VAR_3);

out_iounmap:
 FUNC_5(&VAR_4->resource[0], VAR_5->regs, VAR_2);

 goto out;
}
