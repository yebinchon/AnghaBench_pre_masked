
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * notifier_call; } ;
struct sht15_data {int supply_uv; void* reg; TYPE_1__ nb; void* hwmon_dev; TYPE_3__* dev; void* data; void* sck; int wait_queue; int read_lock; int update_supply_work; int read_work; } ;
struct TYPE_10__ {int kobj; } ;
struct platform_device {TYPE_3__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (TYPE_3__*,char*,...) ;
 void* FUNC_4 (TYPE_3__*,char*,int ) ;
 struct sht15_data* FUNC_5 (TYPE_3__*,int,int ) ;
 void* FUNC_6 (TYPE_3__*,char*) ;
 int FUNC_7 (TYPE_3__*,int ,int ,int ,char*,struct sht15_data*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (void*) ;
 void* FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct platform_device*,struct sht15_data*) ;
 int FUNC_14 (void*) ;
 int FUNC_15 (void*) ;
 int FUNC_16 (void*) ;
 int FUNC_17 (void*,TYPE_1__*) ;
 int FUNC_18 (void*,TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_19 (struct sht15_data*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_20 (struct sht15_data*) ;
 int VAR_9 ;
 int FUNC_21 (int *,int *) ;
 int FUNC_22 (int *,int *) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_10)
{
 int VAR_11;
 struct sht15_data *VAR_12;

 VAR_12 = FUNC_5(&VAR_10->dev, sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 FUNC_0(&VAR_12->read_work, VAR_6);
 FUNC_0(&VAR_12->update_supply_work, VAR_9);
 FUNC_13(VAR_10, VAR_12);
 FUNC_12(&VAR_12->read_lock);
 VAR_12->dev = &VAR_10->dev;
 FUNC_11(&VAR_12->wait_queue);





 VAR_12->reg = FUNC_6(VAR_12->dev, "vcc");
 if (!FUNC_1(VAR_12->reg)) {
  int VAR_13;

  VAR_13 = FUNC_16(VAR_12->reg);
  if (VAR_13)
   VAR_12->supply_uv = VAR_13;

  VAR_11 = FUNC_15(VAR_12->reg);
  if (VAR_11 != 0) {
   FUNC_3(&VAR_10->dev,
    "failed to enable regulator: %d\n", VAR_11);
   return VAR_11;
  }





  VAR_12->nb.notifier_call = &VAR_8;
  VAR_11 = FUNC_17(VAR_12->reg, &VAR_12->nb);
  if (VAR_11) {
   FUNC_3(&VAR_10->dev,
    "regulator notifier request failed\n");
   FUNC_14(VAR_12->reg);
   return VAR_11;
  }
 }


 VAR_12->sck = FUNC_4(&VAR_10->dev, "clk", VAR_3);
 if (FUNC_1(VAR_12->sck)) {
  VAR_11 = FUNC_2(VAR_12->sck);
  FUNC_3(&VAR_10->dev, "clock line GPIO request failed\n");
  goto err_release_reg;
 }
 VAR_12->data = FUNC_4(&VAR_10->dev, "data", VAR_2);
 if (FUNC_1(VAR_12->data)) {
  VAR_11 = FUNC_2(VAR_12->data);
  FUNC_3(&VAR_10->dev, "data line GPIO request failed\n");
  goto err_release_reg;
 }

 VAR_11 = FUNC_7(&VAR_10->dev, FUNC_9(VAR_12->data),
          VAR_7,
          VAR_4,
          "sht15 data",
          VAR_12);
 if (VAR_11) {
  FUNC_3(&VAR_10->dev, "failed to get irq for data line\n");
  goto err_release_reg;
 }
 FUNC_8(FUNC_9(VAR_12->data));
 VAR_11 = FUNC_19(VAR_12);
 if (VAR_11)
  goto err_release_reg;
 VAR_11 = FUNC_20(VAR_12);
 if (VAR_11)
  goto err_release_reg;

 VAR_11 = FUNC_21(&VAR_10->dev.kobj, &VAR_5);
 if (VAR_11) {
  FUNC_3(&VAR_10->dev, "sysfs create failed\n");
  goto err_release_reg;
 }

 VAR_12->hwmon_dev = FUNC_10(VAR_12->dev);
 if (FUNC_1(VAR_12->hwmon_dev)) {
  VAR_11 = FUNC_2(VAR_12->hwmon_dev);
  goto err_release_sysfs_group;
 }

 return 0;

err_release_sysfs_group:
 FUNC_22(&VAR_10->dev.kobj, &VAR_5);
err_release_reg:
 if (!FUNC_1(VAR_12->reg)) {
  FUNC_18(VAR_12->reg, &VAR_12->nb);
  FUNC_14(VAR_12->reg);
 }
 return VAR_11;
}
