
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct resource {int dummy; } ;
struct TYPE_20__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; int id; int name; } ;
struct TYPE_19__ {struct device_node* of_node; TYPE_2__* parent; } ;
struct i2c_adapter {int nr; int * bus_recovery_info; TYPE_1__ dev; int * quirks; int * algo; int name; int class; int owner; } ;
struct omap_i2c_dev {int flags; int speed; int irq; int reg_shift; int scheme; int rev; int fifo_size; int b_hw; int latency; TYPE_2__* dev; struct i2c_adapter adapter; int * set_mpu_wkup_lat; int errata; int * regs; scalar_t__ base; int cmd_complete; } ;
struct omap_i2c_bus_platform_data {int flags; int clkrate; int * set_mpu_wkup_lat; } ;
struct of_device_id {struct omap_i2c_bus_platform_data* data; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;


 int FUNC_5 (scalar_t__) ;
 int VAR_20 ;
 int FUNC_6 (TYPE_2__*,char*,...) ;
 struct omap_i2c_bus_platform_data* FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,char*,int ,int,int,int) ;
 scalar_t__ FUNC_9 (TYPE_2__*,struct resource*) ;
 struct omap_i2c_dev* FUNC_10 (TYPE_2__*,int,int ) ;
 int FUNC_11 (TYPE_2__*,int,int ,int,int ,struct omap_i2c_dev*) ;
 int FUNC_12 (TYPE_2__*,int,int ,int ,int,int ,struct omap_i2c_dev*) ;
 int FUNC_13 (struct i2c_adapter*) ;
 int FUNC_14 (struct i2c_adapter*,struct omap_i2c_dev*) ;
 int FUNC_15 (int *) ;
 struct of_device_id* FUNC_16 (int ,TYPE_2__*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct device_node*,char*,int*) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_19 (struct omap_i2c_dev*) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_20 (struct omap_i2c_dev*,int ) ;
 int FUNC_21 (struct omap_i2c_dev*,int ,int ) ;
 int FUNC_22 (struct platform_device*,int ) ;
 struct resource* FUNC_23 (struct platform_device*,int ,int ) ;
 int FUNC_24 (struct platform_device*,struct omap_i2c_dev*) ;
 int FUNC_25 (TYPE_2__*) ;
 int FUNC_26 (TYPE_2__*) ;
 int FUNC_27 (TYPE_2__*) ;
 int FUNC_28 (TYPE_2__*) ;
 int FUNC_29 (TYPE_2__*) ;
 int FUNC_30 (TYPE_2__*) ;
 int FUNC_31 (TYPE_2__*) ;
 int FUNC_32 (TYPE_2__*,int ) ;
 int FUNC_33 (TYPE_2__*) ;
 int FUNC_34 (scalar_t__) ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_35 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_36(struct platform_device *VAR_30)
{
 struct omap_i2c_dev *VAR_31;
 struct i2c_adapter *VAR_32;
 struct resource *VAR_33;
 const struct omap_i2c_bus_platform_data *VAR_34 =
  FUNC_7(&VAR_30->dev);
 struct device_node *VAR_35 = VAR_30->dev.of_node;
 const struct of_device_id *VAR_36;
 int VAR_37;
 int VAR_38;
 u32 VAR_39;
 u16 VAR_40, VAR_41;

 VAR_37 = FUNC_22(VAR_30, 0);
 if (VAR_37 < 0) {
  FUNC_6(&VAR_30->dev, "no irq resource?\n");
  return VAR_37;
 }

 VAR_31 = FUNC_10(&VAR_30->dev, sizeof(struct omap_i2c_dev), VAR_1);
 if (!VAR_31)
  return -VAR_0;

 VAR_33 = FUNC_23(VAR_30, VAR_5, 0);
 VAR_31->base = FUNC_9(&VAR_30->dev, VAR_33);
 if (FUNC_0(VAR_31->base))
  return FUNC_5(VAR_31->base);

 VAR_36 = FUNC_16(FUNC_17(VAR_25), &VAR_30->dev);
 if (VAR_36) {
  u32 VAR_42 = 100000;

  VAR_34 = VAR_36->data;
  VAR_31->flags = VAR_34->flags;

  FUNC_18(VAR_35, "clock-frequency", &VAR_42);

  VAR_31->speed = VAR_42 / 1000;
 } else if (VAR_34 != ((void*)0)) {
  VAR_31->speed = VAR_34->clkrate;
  VAR_31->flags = VAR_34->flags;
  VAR_31->set_mpu_wkup_lat = VAR_34->set_mpu_wkup_lat;
 }

 VAR_31->dev = &VAR_30->dev;
 VAR_31->irq = VAR_37;

 FUNC_24(VAR_30, VAR_31);
 FUNC_15(&VAR_31->cmd_complete);

 VAR_31->reg_shift = (VAR_31->flags >> VAR_10) & 3;

 FUNC_27(VAR_31->dev);
 FUNC_32(VAR_31->dev, VAR_14);
 FUNC_33(VAR_31->dev);

 VAR_38 = FUNC_28(VAR_31->dev);
 if (VAR_38 < 0)
  goto err_free_mem;







 VAR_39 = FUNC_34(VAR_31->base + 0x04);

 VAR_31->scheme = FUNC_4(VAR_39);
 switch (VAR_31->scheme) {
 case 129:
  VAR_31->regs = (u8 *)VAR_28;
  VAR_31->rev = FUNC_20(VAR_31, VAR_19);
  VAR_40 = FUNC_1(VAR_31->rev);
  VAR_41 = FUNC_1(VAR_31->rev);
  break;
 case 128:

 default:
  VAR_31->regs = (u8 *)VAR_29;
  VAR_39 = (VAR_39 << 16) |
   FUNC_20(VAR_31, VAR_12);
  VAR_40 = FUNC_3(VAR_39);
  VAR_41 = FUNC_2(VAR_39);
  VAR_31->rev = VAR_39;
 }

 VAR_31->errata = 0;

 if (VAR_31->rev >= VAR_15 &&
   VAR_31->rev < VAR_18)
  VAR_31->errata |= VAR_3;

 if (VAR_31->rev <= VAR_16)
  VAR_31->errata |= VAR_4;

 if (!(VAR_31->flags & VAR_11)) {
  u16 VAR_43;


  VAR_43 = (FUNC_20(VAR_31, VAR_8) >> 14) & 0x3;
  VAR_31->fifo_size = 0x8 << VAR_43;







  VAR_31->fifo_size = (VAR_31->fifo_size / 2);

  if (VAR_31->rev < VAR_17)
   VAR_31->b_hw = 1;


  if (VAR_31->set_mpu_wkup_lat != ((void*)0))
   VAR_31->latency = (1000000 * VAR_31->fifo_size) /
           (1000 * VAR_31->speed / 8);
 }


 FUNC_19(VAR_31);

 if (VAR_31->rev < VAR_13)
  VAR_38 = FUNC_11(&VAR_30->dev, VAR_31->irq, VAR_26,
    VAR_6, VAR_30->name, VAR_31);
 else
  VAR_38 = FUNC_12(&VAR_30->dev, VAR_31->irq,
    VAR_23, VAR_24,
    VAR_6 | VAR_7,
    VAR_30->name, VAR_31);

 if (VAR_38) {
  FUNC_6(VAR_31->dev, "failure requesting irq %i\n", VAR_31->irq);
  goto err_unuse_clocks;
 }

 VAR_32 = &VAR_31->adapter;
 FUNC_14(VAR_32, VAR_31);
 VAR_32->owner = VAR_20;
 VAR_32->class = VAR_2;
 FUNC_35(VAR_32->name, "OMAP I2C adapter", sizeof(VAR_32->name));
 VAR_32->algo = &VAR_21;
 VAR_32->quirks = &VAR_27;
 VAR_32->dev.parent = &VAR_30->dev;
 VAR_32->dev.of_node = VAR_30->dev.of_node;
 VAR_32->bus_recovery_info = &VAR_22;


 VAR_32->nr = VAR_30->id;
 VAR_38 = FUNC_13(VAR_32);
 if (VAR_38)
  goto err_unuse_clocks;

 FUNC_8(VAR_31->dev, "bus %d rev%d.%d at %d kHz\n", VAR_32->nr,
   VAR_41, VAR_40, VAR_31->speed);

 FUNC_29(VAR_31->dev);
 FUNC_30(VAR_31->dev);

 return 0;

err_unuse_clocks:
 FUNC_21(VAR_31, VAR_9, 0);
 FUNC_26(VAR_31->dev);
 FUNC_31(VAR_31->dev);
 FUNC_25(&VAR_30->dev);
err_free_mem:

 return VAR_38;
}
