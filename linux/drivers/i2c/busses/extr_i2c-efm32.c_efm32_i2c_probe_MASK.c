
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct resource {int dummy; } ;
struct TYPE_12__ {struct device_node* of_node; } ;
struct platform_device {TYPE_4__ dev; int name; } ;
struct TYPE_10__ {struct device_node* of_node; TYPE_4__* parent; } ;
struct TYPE_11__ {TYPE_1__ dev; int * algo; int owner; int name; } ;
struct efm32_i2c_ddata {int irq; int location; int frequency; int clk; TYPE_2__ adapter; int base; int done; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_4 (int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_5 (int ) ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_4__*,char*,unsigned long,...) ;
 int FUNC_9 (TYPE_4__*,char*,...) ;
 int FUNC_10 (TYPE_4__*,char*,...) ;
 int FUNC_11 (TYPE_4__*,int *) ;
 int FUNC_12 (TYPE_4__*,struct resource*) ;
 struct efm32_i2c_ddata* FUNC_13 (TYPE_4__*,int,int ) ;
 int VAR_26 ;
 int FUNC_14 (struct efm32_i2c_ddata*) ;
 int VAR_27 ;
 int FUNC_15 (struct efm32_i2c_ddata*,int ,int) ;
 int FUNC_16 (int,struct efm32_i2c_ddata*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*,struct efm32_i2c_ddata*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct device_node*,char*,int*) ;
 int FUNC_21 (struct platform_device*,int ) ;
 struct resource* FUNC_22 (struct platform_device*,int ,int ) ;
 int FUNC_23 (struct platform_device*,struct efm32_i2c_ddata*) ;
 int FUNC_24 (int,int ,int ,int ,struct efm32_i2c_ddata*) ;
 int FUNC_25 (struct resource*) ;
 int FUNC_26 (int ,int ,int) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_28)
{
 struct efm32_i2c_ddata *VAR_29;
 struct resource *VAR_30;
 unsigned long VAR_31;
 struct device_node *VAR_32 = VAR_28->dev.of_node;
 u32 VAR_33, VAR_34;
 int VAR_35;
 u32 VAR_36;

 if (!VAR_32)
  return -VAR_1;

 VAR_29 = FUNC_13(&VAR_28->dev, sizeof(*VAR_29), VAR_4);
 if (!VAR_29)
  return -VAR_3;
 FUNC_23(VAR_28, VAR_29);

 FUNC_19(&VAR_29->done);
 FUNC_26(VAR_29->adapter.name, VAR_28->name, sizeof(VAR_29->adapter.name));
 VAR_29->adapter.owner = VAR_25;
 VAR_29->adapter.algo = &VAR_26;
 VAR_29->adapter.dev.parent = &VAR_28->dev;
 VAR_29->adapter.dev.of_node = VAR_28->dev.of_node;
 FUNC_18(&VAR_29->adapter, VAR_29);

 VAR_29->clk = FUNC_11(&VAR_28->dev, ((void*)0));
 if (FUNC_1(VAR_29->clk)) {
  VAR_35 = FUNC_2(VAR_29->clk);
  FUNC_9(&VAR_28->dev, "failed to get clock: %d\n", VAR_35);
  return VAR_35;
 }

 VAR_30 = FUNC_22(VAR_28, VAR_5, 0);
 if (!VAR_30) {
  FUNC_9(&VAR_28->dev, "failed to determine base address\n");
  return -VAR_2;
 }

 if (FUNC_25(VAR_30) < 0x42) {
  FUNC_9(&VAR_28->dev, "memory resource too small\n");
  return -VAR_1;
 }

 VAR_29->base = FUNC_12(&VAR_28->dev, VAR_30);
 if (FUNC_1(VAR_29->base))
  return FUNC_2(VAR_29->base);

 VAR_35 = FUNC_21(VAR_28, 0);
 if (VAR_35 <= 0) {
  FUNC_9(&VAR_28->dev, "failed to get irq (%d)\n", VAR_35);
  if (!VAR_35)
   VAR_35 = -VAR_1;
  return VAR_35;
 }

 VAR_29->irq = VAR_35;

 VAR_35 = FUNC_7(VAR_29->clk);
 if (VAR_35 < 0) {
  FUNC_9(&VAR_28->dev, "failed to enable clock (%d)\n", VAR_35);
  return VAR_35;
 }


 VAR_35 = FUNC_20(VAR_32, "energymicro,location", &VAR_33);

 if (VAR_35)

  VAR_35 = FUNC_20(VAR_32, "efm32,location", &VAR_33);

 if (!VAR_35) {
  FUNC_8(&VAR_28->dev, "using location %u\n", VAR_33);
 } else {

  VAR_33 = FUNC_14(VAR_29);

  FUNC_10(&VAR_28->dev, "fall back to location %u\n", VAR_33);
 }

 VAR_29->location = VAR_33;

 VAR_35 = FUNC_20(VAR_32, "clock-frequency", &VAR_34);
 if (!VAR_35) {
  FUNC_8(&VAR_28->dev, "using frequency %u\n", VAR_34);
 } else {
  VAR_34 = 100000;
  FUNC_10(&VAR_28->dev, "defaulting to 100 kHz\n");
 }
 VAR_29->frequency = VAR_34;

 VAR_31 = FUNC_6(VAR_29->clk);
 if (!VAR_31) {
  FUNC_9(&VAR_28->dev, "there is no input clock available\n");
  VAR_35 = -VAR_1;
  goto err_disable_clk;
 }
 VAR_36 = FUNC_0(VAR_31, 8 * VAR_29->frequency) - 1;
 if (VAR_36 >= 0x200) {
  FUNC_9(&VAR_28->dev,
    "input clock too fast (%lu) to divide down to bus freq (%lu)",
    VAR_31, VAR_29->frequency);
  VAR_35 = -VAR_1;
  goto err_disable_clk;
 }

 FUNC_8(&VAR_28->dev, "input clock = %lu, bus freq = %lu, clkdiv = %lu\n",
   VAR_31, VAR_29->frequency, (unsigned long)VAR_36);
 FUNC_15(VAR_29, VAR_6, FUNC_3(VAR_36));

 FUNC_15(VAR_29, VAR_22, VAR_24 |
   VAR_23 |
   FUNC_4(VAR_29->location));

 FUNC_15(VAR_29, VAR_9, VAR_11 |
   VAR_10 | 0 * VAR_12);

 FUNC_15(VAR_29, VAR_14, VAR_15);
 FUNC_15(VAR_29, VAR_13, VAR_21 | VAR_16 | VAR_19
   | VAR_17 | VAR_18 | VAR_20);


 FUNC_15(VAR_29, VAR_7, VAR_8);

 VAR_35 = FUNC_24(VAR_29->irq, VAR_27, 0, VAR_0, VAR_29);
 if (VAR_35 < 0) {
  FUNC_9(&VAR_28->dev, "failed to request irq (%d)\n", VAR_35);
  goto err_disable_clk;
 }

 VAR_35 = FUNC_17(&VAR_29->adapter);
 if (VAR_35) {
  FUNC_16(VAR_29->irq, VAR_29);

err_disable_clk:
  FUNC_5(VAR_29->clk);
 }
 return VAR_35;
}
