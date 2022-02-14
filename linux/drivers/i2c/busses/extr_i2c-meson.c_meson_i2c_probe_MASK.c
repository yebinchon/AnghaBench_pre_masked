
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_11__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct meson_i2c_data {int dummy; } ;
struct TYPE_10__ {struct device_node* of_node; TYPE_2__* parent; } ;
struct TYPE_12__ {struct meson_i2c* algo_data; TYPE_1__ dev; int * algo; int owner; int name; } ;
struct meson_i2c {int clk; TYPE_4__ adap; int regs; struct meson_i2c_data const* data; int done; int lock; TYPE_2__* dev; } ;
struct i2c_timings {int bus_freq_hz; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,struct resource*) ;
 struct meson_i2c* FUNC_7 (TYPE_2__*,int,int ) ;
 int FUNC_8 (TYPE_2__*,int,int ,int ,int *,struct meson_i2c*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_2__*,struct i2c_timings*,int) ;
 int FUNC_11 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (struct meson_i2c*,int ) ;
 int FUNC_13 (struct meson_i2c*,int ,int ,int ) ;
 scalar_t__ FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (struct platform_device*,int ) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (struct platform_device*,struct meson_i2c*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,char*,int) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_8)
{
 struct device_node *VAR_9 = VAR_8->dev.of_node;
 struct meson_i2c *VAR_10;
 struct resource *VAR_11;
 struct i2c_timings VAR_12;
 int VAR_13, VAR_14 = 0;

 VAR_10 = FUNC_7(&VAR_8->dev, sizeof(struct meson_i2c), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 FUNC_10(&VAR_8->dev, &VAR_12, 1);

 VAR_10->dev = &VAR_8->dev;
 FUNC_17(VAR_8, VAR_10);

 FUNC_18(&VAR_10->lock);
 FUNC_11(&VAR_10->done);

 VAR_10->data = (const struct meson_i2c_data *)
  FUNC_14(&VAR_8->dev);

 VAR_10->clk = FUNC_5(&VAR_8->dev, ((void*)0));
 if (FUNC_0(VAR_10->clk)) {
  FUNC_4(&VAR_8->dev, "can't get device clock\n");
  return FUNC_1(VAR_10->clk);
 }

 VAR_11 = FUNC_16(VAR_8, VAR_2, 0);
 VAR_10->regs = FUNC_6(&VAR_8->dev, VAR_11);
 if (FUNC_0(VAR_10->regs))
  return FUNC_1(VAR_10->regs);

 VAR_13 = FUNC_15(VAR_8, 0);
 if (VAR_13 < 0) {
  FUNC_4(&VAR_8->dev, "can't find IRQ\n");
  return VAR_13;
 }

 VAR_14 = FUNC_8(&VAR_8->dev, VAR_13, VAR_7, 0, ((void*)0), VAR_10);
 if (VAR_14 < 0) {
  FUNC_4(&VAR_8->dev, "can't request IRQ\n");
  return VAR_14;
 }

 VAR_14 = FUNC_2(VAR_10->clk);
 if (VAR_14 < 0) {
  FUNC_4(&VAR_8->dev, "can't prepare clock\n");
  return VAR_14;
 }

 FUNC_19(VAR_10->adap.name, "Meson I2C adapter",
  sizeof(VAR_10->adap.name));
 VAR_10->adap.owner = VAR_5;
 VAR_10->adap.algo = &VAR_6;
 VAR_10->adap.dev.parent = &VAR_8->dev;
 VAR_10->adap.dev.of_node = VAR_9;
 VAR_10->adap.algo_data = VAR_10;





 FUNC_13(VAR_10, VAR_3, VAR_4, 0);

 VAR_14 = FUNC_9(&VAR_10->adap);
 if (VAR_14 < 0) {
  FUNC_3(VAR_10->clk);
  return VAR_14;
 }

 FUNC_12(VAR_10, VAR_12.bus_freq_hz);

 return 0;
}
