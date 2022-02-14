
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int channels; int num_channels; int * info; int modes; int name; TYPE_1__ dev; } ;
struct ep93xx_adc_priv {int lastch; int clk; int lock; int base; } ;
struct clk {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct clk* FUNC_5 (int ) ;
 int FUNC_6 (struct clk*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,int *) ;
 struct iio_dev* FUNC_12 (int *,int) ;
 int FUNC_13 (int *,struct resource*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_14 (struct iio_dev*) ;
 struct ep93xx_adc_priv* FUNC_15 (struct iio_dev*) ;
 int FUNC_16 (int *) ;
 struct resource* FUNC_17 (struct platform_device*,int ,int ) ;
 int FUNC_18 (struct platform_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_5)
{
 int VAR_6;
 struct iio_dev *VAR_7;
 struct ep93xx_adc_priv *VAR_8;
 struct clk *VAR_9;
 struct resource *VAR_10;

 VAR_7 = FUNC_12(&VAR_5->dev, sizeof(*VAR_8));
 if (!VAR_7)
  return -VAR_0;
 VAR_8 = FUNC_15(VAR_7);

 VAR_10 = FUNC_17(VAR_5, VAR_2, 0);
 VAR_8->base = FUNC_13(&VAR_5->dev, VAR_10);
 if (FUNC_1(VAR_8->base)) {
  FUNC_8(&VAR_5->dev, "Cannot map memory resource\n");
  return FUNC_2(VAR_8->base);
 }

 VAR_7->dev.parent = &VAR_5->dev;
 VAR_7->name = FUNC_9(&VAR_5->dev);
 VAR_7->modes = VAR_1;
 VAR_7->info = &VAR_4;
 VAR_7->num_channels = FUNC_0(VAR_3);
 VAR_7->channels = VAR_3;

 VAR_8->lastch = -1;
 FUNC_16(&VAR_8->lock);

 FUNC_18(VAR_5, VAR_7);

 VAR_8->clk = FUNC_11(&VAR_5->dev, ((void*)0));
 if (FUNC_1(VAR_8->clk)) {
  FUNC_8(&VAR_5->dev, "Cannot obtain clock\n");
  return FUNC_2(VAR_8->clk);
 }

 VAR_9 = FUNC_5(VAR_8->clk);
 if (!VAR_9) {
  FUNC_10(&VAR_5->dev, "Cannot obtain parent clock\n");
 } else {







  VAR_6 = FUNC_7(VAR_8->clk, FUNC_6(VAR_9) / 16);
  if (VAR_6)
   FUNC_10(&VAR_5->dev, "Cannot set clock rate\n");




 }

 VAR_6 = FUNC_4(VAR_8->clk);
 if (VAR_6) {
  FUNC_8(&VAR_5->dev, "Cannot enable clock\n");
  return VAR_6;
 }

 VAR_6 = FUNC_14(VAR_7);
 if (VAR_6)
  FUNC_3(VAR_8->clk);

 return VAR_6;
}
