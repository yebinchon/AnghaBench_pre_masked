
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct xiic_i2c_platform_data {scalar_t__ num_devices; scalar_t__ devices; } ;
struct TYPE_18__ {int of_node; TYPE_3__* parent; } ;
struct TYPE_19__ {TYPE_1__ dev; } ;
struct xiic_i2c {int clk; TYPE_2__ adap; int endianness; TYPE_3__* dev; int wait; int lock; int base; } ;
struct resource {int dummy; } ;
struct TYPE_20__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 struct xiic_i2c_platform_data* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (TYPE_3__*,struct resource*) ;
 struct xiic_i2c* FUNC_8 (TYPE_3__*,int,int ) ;
 int FUNC_9 (TYPE_3__*,int,int ,int ,int ,int ,struct xiic_i2c*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,scalar_t__) ;
 int FUNC_12 (TYPE_2__*,struct xiic_i2c*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct platform_device*,int ) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (struct platform_device*,struct xiic_i2c*) ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (TYPE_3__*,int ) ;
 int FUNC_22 (TYPE_3__*) ;
 int FUNC_23 (TYPE_3__*) ;
 TYPE_2__ VAR_11 ;
 int FUNC_24 (struct xiic_i2c*) ;
 int FUNC_25 (struct xiic_i2c*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_26 (struct xiic_i2c*) ;
 int FUNC_27 (struct xiic_i2c*,int ,int ) ;

__attribute__((used)) static int FUNC_28(struct platform_device *VAR_14)
{
 struct xiic_i2c *VAR_15;
 struct xiic_i2c_platform_data *VAR_16;
 struct resource *VAR_17;
 int VAR_18, VAR_19;
 u8 VAR_20;
 u32 VAR_21;

 VAR_15 = FUNC_8(&VAR_14->dev, sizeof(*VAR_15), VAR_2);
 if (!VAR_15)
  return -VAR_1;

 VAR_17 = FUNC_16(VAR_14, VAR_3, 0);
 VAR_15->base = FUNC_7(&VAR_14->dev, VAR_17);
 if (FUNC_0(VAR_15->base))
  return FUNC_1(VAR_15->base);

 VAR_19 = FUNC_15(VAR_14, 0);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_16 = FUNC_5(&VAR_14->dev);


 FUNC_17(VAR_14, VAR_15);
 VAR_15->adap = VAR_11;
 FUNC_12(&VAR_15->adap, VAR_15);
 VAR_15->adap.dev.parent = &VAR_14->dev;
 VAR_15->adap.dev.of_node = VAR_14->dev.of_node;

 FUNC_14(&VAR_15->lock);
 FUNC_13(&VAR_15->wait);

 VAR_15->clk = FUNC_6(&VAR_14->dev, ((void*)0));
 if (FUNC_0(VAR_15->clk)) {
  FUNC_4(&VAR_14->dev, "input clock not found.\n");
  return FUNC_1(VAR_15->clk);
 }
 VAR_18 = FUNC_3(VAR_15->clk);
 if (VAR_18) {
  FUNC_4(&VAR_14->dev, "Unable to enable clock.\n");
  return VAR_18;
 }
 VAR_15->dev = &VAR_14->dev;
 FUNC_19(VAR_15->dev);
 FUNC_21(VAR_15->dev, VAR_8);
 FUNC_23(VAR_15->dev);
 FUNC_20(VAR_15->dev);
 VAR_18 = FUNC_9(&VAR_14->dev, VAR_19, VAR_12,
     VAR_13, VAR_4,
     VAR_14->name, VAR_15);

 if (VAR_18 < 0) {
  FUNC_4(&VAR_14->dev, "Cannot claim IRQ\n");
  goto err_clk_dis;
 }






 VAR_15->endianness = VAR_5;
 FUNC_27(VAR_15, VAR_6, VAR_7);

 VAR_21 = FUNC_25(VAR_15, VAR_9);
 if (!(VAR_21 & VAR_10))
  VAR_15->endianness = VAR_0;

 FUNC_26(VAR_15);


 VAR_18 = FUNC_10(&VAR_15->adap);
 if (VAR_18) {
  FUNC_24(VAR_15);
  goto err_clk_dis;
 }

 if (VAR_16) {

  for (VAR_20 = 0; VAR_20 < VAR_16->num_devices; VAR_20++)
   FUNC_11(&VAR_15->adap, VAR_16->devices + VAR_20);
 }

 return 0;

err_clk_dis:
 FUNC_22(&VAR_14->dev);
 FUNC_18(&VAR_14->dev);
 FUNC_2(VAR_15->clk);
 return VAR_18;
}
