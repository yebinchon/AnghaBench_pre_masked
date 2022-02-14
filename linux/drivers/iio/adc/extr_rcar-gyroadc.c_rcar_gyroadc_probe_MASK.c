
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct rcar_gyroadc {int model; int clk; int regs; struct device* dev; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int of_node; struct device* parent; } ;
struct iio_dev {int modes; int * info; TYPE_1__ dev; int name; } ;
typedef enum rcar_gyroadc_model { ____Placeholder_rcar_gyroadc_model } rcar_gyroadc_model ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,char*) ;
 struct iio_dev* FUNC_6 (struct device*,int) ;
 int FUNC_7 (struct device*,struct resource*) ;
 int FUNC_8 (struct iio_dev*) ;
 struct rcar_gyroadc* FUNC_9 (struct iio_dev*) ;
 scalar_t__ FUNC_10 (struct device*) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct iio_dev*) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct device*) ;
 int FUNC_17 (struct device*,int ) ;
 int FUNC_18 (struct device*) ;
 int FUNC_19 (struct device*) ;
 int FUNC_20 (struct iio_dev*) ;
 int FUNC_21 (struct rcar_gyroadc*) ;
 int FUNC_22 (struct rcar_gyroadc*) ;
 int FUNC_23 (struct rcar_gyroadc*) ;
 int VAR_6 ;
 int FUNC_24 (struct iio_dev*) ;
 int FUNC_25 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct rcar_gyroadc *VAR_9;
 struct iio_dev *VAR_10;
 struct resource *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_6(VAR_8, sizeof(*VAR_9));
 if (!VAR_10)
  return -VAR_1;

 VAR_9 = FUNC_9(VAR_10);
 VAR_9->dev = VAR_8;

 VAR_11 = FUNC_11(VAR_7, VAR_4, 0);
 VAR_9->regs = FUNC_7(VAR_8, VAR_11);
 if (FUNC_0(VAR_9->regs))
  return FUNC_1(VAR_9->regs);

 VAR_9->clk = FUNC_5(VAR_8, "fck");
 if (FUNC_0(VAR_9->clk)) {
  VAR_12 = FUNC_1(VAR_9->clk);
  if (VAR_12 != -VAR_2)
   FUNC_4(VAR_8, "Failed to get IF clock (ret=%i)\n", VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_25(VAR_10);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_24(VAR_10);
 if (VAR_12)
  return VAR_12;

 VAR_9->model = (enum rcar_gyroadc_model)
  FUNC_10(&VAR_7->dev);

 FUNC_12(VAR_7, VAR_10);

 VAR_10->name = VAR_0;
 VAR_10->dev.parent = VAR_8;
 VAR_10->dev.of_node = VAR_7->dev.of_node;
 VAR_10->info = &VAR_6;
 VAR_10->modes = VAR_3;

 VAR_12 = FUNC_3(VAR_9->clk);
 if (VAR_12) {
  FUNC_4(VAR_8, "Could not prepare or enable the IF clock.\n");
  goto err_clk_if_enable;
 }

 FUNC_17(VAR_8, VAR_5);
 FUNC_19(VAR_8);
 FUNC_14(VAR_8);

 FUNC_15(VAR_8);
 FUNC_21(VAR_9);
 FUNC_22(VAR_9);

 VAR_12 = FUNC_8(VAR_10);
 if (VAR_12) {
  FUNC_4(VAR_8, "Couldn't register IIO device.\n");
  goto err_iio_device_register;
 }

 FUNC_16(VAR_8);

 return 0;

err_iio_device_register:
 FUNC_23(VAR_9);
 FUNC_16(VAR_8);
 FUNC_13(VAR_8);
 FUNC_18(VAR_8);
 FUNC_2(VAR_9->clk);
err_clk_if_enable:
 FUNC_20(VAR_10);

 return VAR_12;
}
