
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dev; int id; int name; } ;
struct TYPE_2__ {int * parent; } ;
struct i2c_adapter {int nr; TYPE_1__ dev; int * algo; int name; int class; int owner; } ;
struct highlander_i2c_dev {int base; scalar_t__ irq; struct i2c_adapter adapter; int last_read_time; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (scalar_t__,struct highlander_i2c_dev*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct highlander_i2c_dev*) ;
 int FUNC_4 (struct highlander_i2c_dev*) ;
 int FUNC_5 (struct highlander_i2c_dev*) ;
 int FUNC_6 (struct highlander_i2c_dev*) ;
 int FUNC_7 (struct i2c_adapter*) ;
 int FUNC_8 (struct i2c_adapter*,struct highlander_i2c_dev*) ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int VAR_10 ;
 int FUNC_11 (struct highlander_i2c_dev*) ;
 struct highlander_i2c_dev* FUNC_12 (int,int ) ;
 scalar_t__ FUNC_13 (struct platform_device*,int ) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct highlander_i2c_dev*) ;
 int FUNC_16 (scalar_t__,int ,int ,int ,struct highlander_i2c_dev*) ;
 int FUNC_17 (struct resource*) ;
 int FUNC_18 (int ,char*,int) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_11)
{
 struct highlander_i2c_dev *VAR_12;
 struct i2c_adapter *VAR_13;
 struct resource *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_14(VAR_11, VAR_5, 0);
 if (FUNC_19(!VAR_14)) {
  FUNC_0(&VAR_11->dev, "no mem resource\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_12(sizeof(struct highlander_i2c_dev), VAR_3);
 if (FUNC_19(!VAR_12))
  return -VAR_1;

 VAR_12->base = FUNC_9(VAR_14->start, FUNC_17(VAR_14));
 if (FUNC_19(!VAR_12->base)) {
  VAR_15 = -VAR_2;
  goto err;
 }

 VAR_12->dev = &VAR_11->dev;
 FUNC_15(VAR_11, VAR_12);

 VAR_12->irq = FUNC_13(VAR_11, 0);
 if (VAR_9)
  VAR_12->irq = 0;

 if (VAR_12->irq) {
  VAR_15 = FUNC_16(VAR_12->irq, VAR_8, 0,
      VAR_11->name, VAR_12);
  if (FUNC_19(VAR_15))
   goto err_unmap;

  FUNC_4(VAR_12);
 } else {
  FUNC_1(&VAR_11->dev, "no IRQ, using polling mode\n");
  FUNC_3(VAR_12);
 }

 VAR_12->last_read_time = VAR_10;

 FUNC_6(VAR_12);

 VAR_13 = &VAR_12->adapter;
 FUNC_8(VAR_13, VAR_12);
 VAR_13->owner = VAR_6;
 VAR_13->class = VAR_4;
 FUNC_18(VAR_13->name, "HL FPGA I2C adapter", sizeof(VAR_13->name));
 VAR_13->algo = &VAR_7;
 VAR_13->dev.parent = &VAR_11->dev;
 VAR_13->nr = VAR_11->id;




 VAR_15 = FUNC_5(VAR_12);
 if (FUNC_19(VAR_15)) {
  FUNC_0(&VAR_11->dev, "controller didn't come up\n");
  goto err_free_irq;
 }

 VAR_15 = FUNC_7(VAR_13);
 if (FUNC_19(VAR_15)) {
  FUNC_0(&VAR_11->dev, "failure adding adapter\n");
  goto err_free_irq;
 }

 return 0;

err_free_irq:
 if (VAR_12->irq)
  FUNC_2(VAR_12->irq, VAR_12);
err_unmap:
 FUNC_10(VAR_12->base);
err:
 FUNC_11(VAR_12);

 return VAR_15;
}
