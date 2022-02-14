
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_7__ {int kobj; } ;
struct platform_device {TYPE_2__ dev; } ;
struct max197_platform_data {int * convert; } ;
struct max197_data {int scale; int hwmon_dev; scalar_t__* ctrl_bytes; int limit; int lock; struct max197_platform_data* pdata; } ;
typedef enum max197_chips { ____Placeholder_max197_chips } max197_chips ;
struct TYPE_6__ {int driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 struct max197_platform_data* FUNC_3 (TYPE_2__*) ;
 struct max197_data* FUNC_4 (TYPE_2__*,int,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (struct platform_device*,struct max197_data*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_8)
{
 int VAR_9, VAR_10;
 struct max197_data *VAR_11;
 struct max197_platform_data *VAR_12 = FUNC_3(&VAR_8->dev);
 enum max197_chips VAR_13 = FUNC_7(VAR_8)->driver_data;

 if (VAR_12 == ((void*)0)) {
  FUNC_2(&VAR_8->dev, "no platform data supplied\n");
  return -VAR_0;
 }

 if (VAR_12->convert == ((void*)0)) {
  FUNC_2(&VAR_8->dev, "no convert function supplied\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_4(&VAR_8->dev, sizeof(struct max197_data), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->pdata = VAR_12;
 FUNC_6(&VAR_11->lock);

 if (VAR_13 == VAR_6) {
  VAR_11->limit = VAR_3;
  VAR_11->scale = 1;
 } else {
  VAR_11->limit = VAR_5;
  VAR_11->scale = 0;
 }

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
  VAR_11->ctrl_bytes[VAR_9] = (u8) VAR_9;

 FUNC_8(VAR_8, VAR_11);

 VAR_10 = FUNC_9(&VAR_8->dev.kobj, &VAR_7);
 if (VAR_10) {
  FUNC_2(&VAR_8->dev, "sysfs create group failed\n");
  return VAR_10;
 }

 VAR_11->hwmon_dev = FUNC_5(&VAR_8->dev);
 if (FUNC_0(VAR_11->hwmon_dev)) {
  VAR_10 = FUNC_1(VAR_11->hwmon_dev);
  FUNC_2(&VAR_8->dev, "hwmon device register failed\n");
  goto error;
 }

 return 0;

error:
 FUNC_10(&VAR_8->dev.kobj, &VAR_7);
 return VAR_10;
}
