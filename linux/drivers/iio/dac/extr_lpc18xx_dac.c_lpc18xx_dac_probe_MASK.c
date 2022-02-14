
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct lpc18xx_dac {scalar_t__ vref; scalar_t__ clk; scalar_t__ base; int lock; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int * info; TYPE_1__ dev; int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 struct iio_dev* FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,struct resource*) ;
 scalar_t__ FUNC_10 (int *,char*) ;
 int FUNC_11 (struct iio_dev*) ;
 struct lpc18xx_dac* FUNC_12 (struct iio_dev*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (int *) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct iio_dev*) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_7)
{
 struct iio_dev *VAR_8;
 struct lpc18xx_dac *VAR_9;
 struct resource *VAR_10;
 int VAR_11;

 VAR_8 = FUNC_8(&VAR_7->dev, sizeof(*VAR_9));
 if (!VAR_8)
  return -VAR_0;

 FUNC_15(VAR_7, VAR_8);
 VAR_9 = FUNC_12(VAR_8);
 FUNC_13(&VAR_9->lock);

 VAR_10 = FUNC_14(VAR_7, VAR_2, 0);
 VAR_9->base = FUNC_9(&VAR_7->dev, VAR_10);
 if (FUNC_1(VAR_9->base))
  return FUNC_2(VAR_9->base);

 VAR_9->clk = FUNC_7(&VAR_7->dev, ((void*)0));
 if (FUNC_1(VAR_9->clk)) {
  FUNC_5(&VAR_7->dev, "error getting clock\n");
  return FUNC_2(VAR_9->clk);
 }

 VAR_9->vref = FUNC_10(&VAR_7->dev, "vref");
 if (FUNC_1(VAR_9->vref)) {
  FUNC_5(&VAR_7->dev, "error getting regulator\n");
  return FUNC_2(VAR_9->vref);
 }

 VAR_8->name = FUNC_6(&VAR_7->dev);
 VAR_8->dev.parent = &VAR_7->dev;
 VAR_8->info = &VAR_6;
 VAR_8->modes = VAR_1;
 VAR_8->channels = VAR_5;
 VAR_8->num_channels = FUNC_0(VAR_5);

 VAR_11 = FUNC_17(VAR_9->vref);
 if (VAR_11) {
  FUNC_5(&VAR_7->dev, "unable to enable regulator\n");
  return VAR_11;
 }

 VAR_11 = FUNC_4(VAR_9->clk);
 if (VAR_11) {
  FUNC_5(&VAR_7->dev, "unable to enable clock\n");
  goto dis_reg;
 }

 FUNC_18(0, VAR_9->base + VAR_4);
 FUNC_18(0, VAR_9->base + VAR_3);

 VAR_11 = FUNC_11(VAR_8);
 if (VAR_11) {
  FUNC_5(&VAR_7->dev, "unable to register device\n");
  goto dis_clk;
 }

 return 0;

dis_clk:
 FUNC_3(VAR_9->clk);
dis_reg:
 FUNC_16(VAR_9->vref);
 return VAR_11;
}
