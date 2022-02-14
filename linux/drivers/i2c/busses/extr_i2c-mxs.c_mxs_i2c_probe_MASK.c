
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device_id {int driver_data; } ;
struct device {scalar_t__ of_node; } ;
struct platform_device {struct device dev; int id; } ;
struct of_device_id {struct platform_device_id* data; } ;
struct TYPE_2__ {scalar_t__ of_node; struct device* parent; } ;
struct i2c_adapter {TYPE_1__ dev; int nr; int * quirks; int * algo; int owner; int name; } ;
struct mxs_i2c_dev {scalar_t__ regs; struct i2c_adapter adapter; int dmach; int cmd_complete; struct device* dev; int dev_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*) ;
 struct mxs_i2c_dev* FUNC_4 (struct device*,int,int ) ;
 scalar_t__ FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (struct device*,int,int ,int ,int ,struct mxs_i2c_dev*) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct i2c_adapter*) ;
 int FUNC_9 (struct i2c_adapter*,struct mxs_i2c_dev*) ;
 int FUNC_10 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (struct mxs_i2c_dev*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_12 (struct mxs_i2c_dev*) ;
 struct of_device_id* FUNC_13 (int ,struct device*) ;
 int FUNC_14 (struct platform_device*,int ) ;
 int FUNC_15 (struct platform_device*,struct mxs_i2c_dev*) ;
 int FUNC_16 (int ,char*,int) ;
 int FUNC_17 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_10)
{
 const struct of_device_id *VAR_11 =
    FUNC_13(VAR_7, &VAR_10->dev);
 struct device *VAR_12 = &VAR_10->dev;
 struct mxs_i2c_dev *VAR_13;
 struct i2c_adapter *VAR_14;
 int VAR_15, VAR_16;

 VAR_13 = FUNC_4(VAR_12, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 if (VAR_11) {
  const struct platform_device_id *VAR_17 = VAR_11->data;
  VAR_13->dev_type = VAR_17->driver_data;
 }

 VAR_13->regs = FUNC_5(VAR_10, 0);
 if (FUNC_0(VAR_13->regs))
  return FUNC_1(VAR_13->regs);

 VAR_16 = FUNC_14(VAR_10, 0);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_15 = FUNC_6(VAR_12, VAR_16, VAR_8, 0, FUNC_3(VAR_12), VAR_13);
 if (VAR_15)
  return VAR_15;

 VAR_13->dev = VAR_12;

 FUNC_10(&VAR_13->cmd_complete);

 if (VAR_12->of_node) {
  VAR_15 = FUNC_11(VAR_13);
  if (VAR_15)
   return VAR_15;
 }


 VAR_13->dmach = FUNC_7(VAR_12, "rx-tx");
 if (!VAR_13->dmach) {
  FUNC_2(VAR_12, "Failed to request dma\n");
  return -VAR_0;
 }

 FUNC_15(VAR_10, VAR_13);


 VAR_15 = FUNC_12(VAR_13);
 if (VAR_15)
  return VAR_15;

 VAR_14 = &VAR_13->adapter;
 FUNC_16(VAR_14->name, "MXS I2C adapter", sizeof(VAR_14->name));
 VAR_14->owner = VAR_5;
 VAR_14->algo = &VAR_6;
 VAR_14->quirks = &VAR_9;
 VAR_14->dev.parent = VAR_12;
 VAR_14->nr = VAR_10->id;
 VAR_14->dev.of_node = VAR_10->dev.of_node;
 FUNC_9(VAR_14, VAR_13);
 VAR_15 = FUNC_8(VAR_14);
 if (VAR_15) {
  FUNC_17(VAR_4,
    VAR_13->regs + VAR_3);
  return VAR_15;
 }

 return 0;
}
