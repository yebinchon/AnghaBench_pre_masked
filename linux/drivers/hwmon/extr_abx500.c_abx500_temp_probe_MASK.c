
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int kobj; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_5__ {scalar_t__ irq_handler; int show_label; int show_name; int read_sensor; } ;
struct abx500_temp {int hwmon_dev; TYPE_1__ ops; int work; int lock; struct platform_device* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct abx500_temp*) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 struct abx500_temp* FUNC_5 (TYPE_2__*,int,int ) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct platform_device*,struct abx500_temp*) ;
 int FUNC_10 (struct platform_device*) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_4)
{
 struct abx500_temp *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->pdev = VAR_4;
 FUNC_8(&VAR_5->lock);


 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6 < 0 || !VAR_5->ops.read_sensor || !VAR_5->ops.show_name ||
   !VAR_5->ops.show_label)
  return VAR_6;

 FUNC_0(&VAR_5->work, VAR_3);

 FUNC_9(VAR_4, VAR_5);

 VAR_6 = FUNC_11(&VAR_4->dev.kobj, &VAR_2);
 if (VAR_6 < 0) {
  FUNC_4(&VAR_4->dev, "Create sysfs group failed (%d)\n", VAR_6);
  return VAR_6;
 }

 VAR_5->hwmon_dev = FUNC_6(&VAR_4->dev);
 if (FUNC_1(VAR_5->hwmon_dev)) {
  VAR_6 = FUNC_2(VAR_5->hwmon_dev);
  FUNC_4(&VAR_4->dev, "Class registration failed (%d)\n", VAR_6);
  goto exit_sysfs_group;
 }

 if (VAR_5->ops.irq_handler) {
  VAR_6 = FUNC_10(VAR_4);
  if (VAR_6 < 0)
   goto exit_hwmon_reg;
 }
 return 0;

exit_hwmon_reg:
 FUNC_7(VAR_5->hwmon_dev);
exit_sysfs_group:
 FUNC_12(&VAR_4->dev.kobj, &VAR_2);
 return VAR_6;
}
