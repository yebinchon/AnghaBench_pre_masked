
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dev; } ;
struct lpc32xx_adc_state {int completion; int vref; int clk; int adc_base; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int num_channels; int modes; int * info; TYPE_1__ dev; int name; int channels; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,int *) ;
 struct iio_dev* FUNC_6 (int *,int) ;
 int FUNC_7 (int *,struct iio_dev*) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,int,int ,int ,int ,struct lpc32xx_adc_state*) ;
 struct lpc32xx_adc_state* FUNC_11 (struct iio_dev*) ;
 int FUNC_12 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_13 (struct platform_device*,int ) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct iio_dev*) ;
 int FUNC_16 (struct resource*) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_11)
{
 struct lpc32xx_adc_state *VAR_12 = ((void*)0);
 struct resource *VAR_13;
 int VAR_14 = -VAR_1;
 struct iio_dev *VAR_15 = ((void*)0);
 int VAR_16;

 VAR_13 = FUNC_14(VAR_11, VAR_5, 0);
 if (!VAR_13) {
  FUNC_3(&VAR_11->dev, "failed to get platform I/O memory\n");
  return -VAR_3;
 }

 VAR_15 = FUNC_6(&VAR_11->dev, sizeof(*VAR_12));
 if (!VAR_15)
  return -VAR_2;

 VAR_12 = FUNC_11(VAR_15);

 VAR_12->adc_base = FUNC_8(&VAR_11->dev, VAR_13->start,
        FUNC_16(VAR_13));
 if (!VAR_12->adc_base) {
  FUNC_3(&VAR_11->dev, "failed mapping memory\n");
  return -VAR_0;
 }

 VAR_12->clk = FUNC_5(&VAR_11->dev, ((void*)0));
 if (FUNC_1(VAR_12->clk)) {
  FUNC_3(&VAR_11->dev, "failed getting clock\n");
  return FUNC_2(VAR_12->clk);
 }

 VAR_16 = FUNC_13(VAR_11, 0);
 if (VAR_16 <= 0)
  return -VAR_3;

 VAR_14 = FUNC_10(&VAR_11->dev, VAR_16, VAR_10, 0,
      VAR_6, VAR_12);
 if (VAR_14 < 0) {
  FUNC_3(&VAR_11->dev, "failed requesting interrupt\n");
  return VAR_14;
 }

 VAR_12->vref = FUNC_9(&VAR_11->dev, "vref");
 if (FUNC_1(VAR_12->vref)) {
  VAR_15->channels = VAR_7;
  FUNC_4(&VAR_11->dev,
    "Missing vref regulator: No scaling available\n");
 } else {
  VAR_15->channels = VAR_9;
 }

 FUNC_15(VAR_11, VAR_15);

 FUNC_12(&VAR_12->completion);

 VAR_15->name = VAR_6;
 VAR_15->dev.parent = &VAR_11->dev;
 VAR_15->info = &VAR_8;
 VAR_15->modes = VAR_4;
 VAR_15->num_channels = FUNC_0(VAR_7);

 VAR_14 = FUNC_7(&VAR_11->dev, VAR_15);
 if (VAR_14)
  return VAR_14;

 FUNC_4(&VAR_11->dev, "LPC32XX ADC driver loaded, IRQ %d\n", VAR_16);

 return 0;
}
