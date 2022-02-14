
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mxt_data {scalar_t__ reset_gpio; int suspend_mode; int crc_completion; int reset_completion; int bl_completion; int irq; struct i2c_client* client; int phys; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_9__ {int kobj; } ;
struct i2c_client {int addr; TYPE_2__ dev; int irq; int name; TYPE_1__* adapter; } ;
struct TYPE_8__ {int nr; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_9 ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,char*,int ) ;
 struct mxt_data* FUNC_6 (TYPE_2__*,int,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int *,int ,int ,int ,struct mxt_data*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__,int) ;
 int FUNC_11 (struct i2c_client*,struct mxt_data*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int VAR_10 ;
 int FUNC_14 (struct mxt_data*) ;
 int FUNC_15 (struct mxt_data*) ;
 int FUNC_16 (struct mxt_data*) ;
 int VAR_11 ;
 int FUNC_17 (struct mxt_data*) ;
 int FUNC_18 (int ,int,char*,int,int) ;
 int FUNC_19 (int *,int *) ;

__attribute__((used)) static int FUNC_20(struct i2c_client *VAR_12, const struct i2c_device_id *VAR_13)
{
 struct mxt_data *VAR_14;
 int VAR_15;
 if (!FUNC_4(&VAR_12->dev, "compatible"))
  return -VAR_1;
 if (FUNC_0(&VAR_12->dev) && VAR_12->addr < 0x40)
  return -VAR_1;

 VAR_14 = FUNC_6(&VAR_12->dev, sizeof(struct mxt_data), VAR_2);
 if (!VAR_14)
  return -VAR_0;

 FUNC_18(VAR_14->phys, sizeof(VAR_14->phys), "i2c-%u-%04x/input0",
   VAR_12->adapter->nr, VAR_12->addr);

 VAR_14->client = VAR_12;
 VAR_14->irq = VAR_12->irq;
 FUNC_11(VAR_12, VAR_14);

 FUNC_12(&VAR_14->bl_completion);
 FUNC_12(&VAR_14->reset_completion);
 FUNC_12(&VAR_14->crc_completion);

 VAR_14->suspend_mode = FUNC_9(VAR_9) ?
  VAR_8 : VAR_7;

 VAR_15 = FUNC_17(VAR_14);
 if (VAR_15)
  return VAR_15;

 VAR_14->reset_gpio = FUNC_5(&VAR_12->dev,
         "reset", VAR_3);
 if (FUNC_1(VAR_14->reset_gpio)) {
  VAR_15 = FUNC_2(VAR_14->reset_gpio);
  FUNC_3(&VAR_12->dev, "Failed to get reset gpio: %d\n", VAR_15);
  return VAR_15;
 }

 VAR_15 = FUNC_7(&VAR_12->dev, VAR_12->irq,
       ((void*)0), VAR_11, VAR_4,
       VAR_12->name, VAR_14);
 if (VAR_15) {
  FUNC_3(&VAR_12->dev, "Failed to register interrupt\n");
  return VAR_15;
 }

 FUNC_8(VAR_12->irq);

 if (VAR_14->reset_gpio) {
  FUNC_13(VAR_5);
  FUNC_10(VAR_14->reset_gpio, 1);
  FUNC_13(VAR_6);
 }

 VAR_15 = FUNC_16(VAR_14);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_19(&VAR_12->dev.kobj, &VAR_10);
 if (VAR_15) {
  FUNC_3(&VAR_12->dev, "Failure %d creating sysfs group\n",
   VAR_15);
  goto err_free_object;
 }

 return 0;

err_free_object:
 FUNC_14(VAR_14);
 FUNC_15(VAR_14);
 return VAR_15;
}
