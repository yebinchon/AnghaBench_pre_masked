
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct lpc18xx_adc {unsigned int cr_reg; scalar_t__ vref; scalar_t__ clk; scalar_t__ base; int lock; int * dev; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int * info; TYPE_1__ dev; int name; } ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned long,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 unsigned long FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 struct iio_dev* FUNC_10 (int *,int) ;
 scalar_t__ FUNC_11 (int *,struct resource*) ;
 scalar_t__ FUNC_12 (int *,char*) ;
 int FUNC_13 (struct iio_dev*) ;
 struct lpc18xx_adc* FUNC_14 (struct iio_dev*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_15 (int *) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (struct platform_device*,struct iio_dev*) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_9)
{
 struct iio_dev *VAR_10;
 struct lpc18xx_adc *VAR_11;
 struct resource *VAR_12;
 unsigned int VAR_13;
 unsigned long VAR_14;
 int VAR_15;

 VAR_10 = FUNC_10(&VAR_9->dev, sizeof(*VAR_11));
 if (!VAR_10)
  return -VAR_0;

 FUNC_17(VAR_9, VAR_10);
 VAR_11 = FUNC_14(VAR_10);
 VAR_11->dev = &VAR_9->dev;
 FUNC_15(&VAR_11->lock);

 VAR_12 = FUNC_16(VAR_9, VAR_2, 0);
 VAR_11->base = FUNC_11(&VAR_9->dev, VAR_12);
 if (FUNC_2(VAR_11->base))
  return FUNC_3(VAR_11->base);

 VAR_11->clk = FUNC_9(&VAR_9->dev, ((void*)0));
 if (FUNC_2(VAR_11->clk)) {
  FUNC_7(&VAR_9->dev, "error getting clock\n");
  return FUNC_3(VAR_11->clk);
 }

 VAR_14 = FUNC_5(VAR_11->clk);
 VAR_13 = FUNC_1(VAR_14, VAR_3);

 VAR_11->vref = FUNC_12(&VAR_9->dev, "vref");
 if (FUNC_2(VAR_11->vref)) {
  FUNC_7(&VAR_9->dev, "error getting regulator\n");
  return FUNC_3(VAR_11->vref);
 }

 VAR_10->name = FUNC_8(&VAR_9->dev);
 VAR_10->dev.parent = &VAR_9->dev;
 VAR_10->info = &VAR_8;
 VAR_10->modes = VAR_1;
 VAR_10->channels = VAR_7;
 VAR_10->num_channels = FUNC_0(VAR_7);

 VAR_15 = FUNC_19(VAR_11->vref);
 if (VAR_15) {
  FUNC_7(&VAR_9->dev, "unable to enable regulator\n");
  return VAR_15;
 }

 VAR_15 = FUNC_6(VAR_11->clk);
 if (VAR_15) {
  FUNC_7(&VAR_9->dev, "unable to enable clock\n");
  goto dis_reg;
 }

 VAR_11->cr_reg = (VAR_13 << VAR_5) |
   VAR_6;
 FUNC_20(VAR_11->cr_reg, VAR_11->base + VAR_4);

 VAR_15 = FUNC_13(VAR_10);
 if (VAR_15) {
  FUNC_7(&VAR_9->dev, "unable to register device\n");
  goto dis_clk;
 }

 return 0;

dis_clk:
 FUNC_20(0, VAR_11->base + VAR_4);
 FUNC_4(VAR_11->clk);
dis_reg:
 FUNC_18(VAR_11->vref);
 return VAR_15;
}
