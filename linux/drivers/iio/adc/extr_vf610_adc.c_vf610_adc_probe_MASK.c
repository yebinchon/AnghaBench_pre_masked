
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int default_sample_time; } ;
struct vf610_adc {int vref; int clk; int completion; TYPE_1__ adc_feature; int max_adck_rate; int vref_uv; TYPE_3__* dev; int regs; } ;
struct resource {int dummy; } ;
struct TYPE_12__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_11__ {int of_node; TYPE_3__* parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int * info; TYPE_2__ dev; int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,char*,...) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,char*) ;
 struct iio_dev* FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (TYPE_3__*,struct resource*) ;
 int FUNC_10 (TYPE_3__*,char*) ;
 int FUNC_11 (TYPE_3__*,int,int ,int ,int ,struct iio_dev*) ;
 int FUNC_12 (struct iio_dev*) ;
 int VAR_4 ;
 struct vf610_adc* FUNC_13 (struct iio_dev*) ;
 int FUNC_14 (struct iio_dev*) ;
 int FUNC_15 (struct iio_dev*,int *,int *,int *) ;
 int VAR_5 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,char*,int *) ;
 int FUNC_18 (int ,char*,int ,int) ;
 int FUNC_19 (struct platform_device*,int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct iio_dev*) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (struct vf610_adc*) ;
 int FUNC_26 (struct vf610_adc*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_9)
{
 struct vf610_adc *VAR_10;
 struct iio_dev *VAR_11;
 struct resource *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_11 = FUNC_8(&VAR_9->dev, sizeof(struct vf610_adc));
 if (!VAR_11) {
  FUNC_5(&VAR_9->dev, "Failed allocating iio device\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_13(VAR_11);
 VAR_10->dev = &VAR_9->dev;

 VAR_12 = FUNC_20(VAR_9, VAR_3, 0);
 VAR_10->regs = FUNC_9(&VAR_9->dev, VAR_12);
 if (FUNC_1(VAR_10->regs))
  return FUNC_2(VAR_10->regs);

 VAR_13 = FUNC_19(VAR_9, 0);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_14 = FUNC_11(VAR_10->dev, VAR_13,
    VAR_8, 0,
    FUNC_6(&VAR_9->dev), VAR_11);
 if (VAR_14 < 0) {
  FUNC_5(&VAR_9->dev, "failed requesting irq, irq = %d\n", VAR_13);
  return VAR_14;
 }

 VAR_10->clk = FUNC_7(&VAR_9->dev, "adc");
 if (FUNC_1(VAR_10->clk)) {
  FUNC_5(&VAR_9->dev, "failed getting clock, err = %ld\n",
      FUNC_2(VAR_10->clk));
  return FUNC_2(VAR_10->clk);
 }

 VAR_10->vref = FUNC_10(&VAR_9->dev, "vref");
 if (FUNC_1(VAR_10->vref))
  return FUNC_2(VAR_10->vref);

 VAR_14 = FUNC_23(VAR_10->vref);
 if (VAR_14)
  return VAR_14;

 VAR_10->vref_uv = FUNC_24(VAR_10->vref);

 FUNC_18(VAR_9->dev.of_node, "fsl,adck-max-frequency",
   VAR_10->max_adck_rate, 3);

 VAR_14 = FUNC_17(VAR_9->dev.of_node, "min-sample-time",
   &VAR_10->adc_feature.default_sample_time);
 if (VAR_14)
  VAR_10->adc_feature.default_sample_time = VAR_0;

 FUNC_21(VAR_9, VAR_11);

 FUNC_16(&VAR_10->completion);

 VAR_11->name = FUNC_6(&VAR_9->dev);
 VAR_11->dev.parent = &VAR_9->dev;
 VAR_11->dev.of_node = VAR_9->dev.of_node;
 VAR_11->info = &VAR_7;
 VAR_11->modes = VAR_2;
 VAR_11->channels = VAR_6;
 VAR_11->num_channels = FUNC_0(VAR_6);

 VAR_14 = FUNC_4(VAR_10->clk);
 if (VAR_14) {
  FUNC_5(&VAR_9->dev,
   "Could not prepare or enable the clock.\n");
  goto error_adc_clk_enable;
 }

 FUNC_25(VAR_10);
 FUNC_26(VAR_10);

 VAR_14 = FUNC_15(VAR_11, &VAR_4,
     ((void*)0), &VAR_5);
 if (VAR_14 < 0) {
  FUNC_5(&VAR_9->dev, "Couldn't initialise the buffer\n");
  goto error_iio_device_register;
 }

 VAR_14 = FUNC_12(VAR_11);
 if (VAR_14) {
  FUNC_5(&VAR_9->dev, "Couldn't register the device.\n");
  goto error_adc_buffer_init;
 }

 return 0;

error_adc_buffer_init:
 FUNC_14(VAR_11);
error_iio_device_register:
 FUNC_3(VAR_10->clk);
error_adc_clk_enable:
 FUNC_22(VAR_10->vref);

 return VAR_14;
}
