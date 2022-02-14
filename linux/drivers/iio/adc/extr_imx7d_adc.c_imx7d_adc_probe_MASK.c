
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct imx7d_adc {int completion; int vref; int clk; int regs; struct device* dev; } ;
struct TYPE_3__ {struct device* parent; } ;
struct iio_dev {TYPE_1__ dev; int num_channels; int channels; int modes; int * info; int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,int ,TYPE_1__*) ;
 int FUNC_6 (struct device*,char*) ;
 struct iio_dev* FUNC_7 (struct device*,int) ;
 int FUNC_8 (struct device*,struct iio_dev*) ;
 int FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (struct device*,char*) ;
 int FUNC_11 (struct device*,int,int ,int ,int ,struct imx7d_adc*) ;
 struct imx7d_adc* FUNC_12 (struct iio_dev*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (struct imx7d_adc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct platform_device*,int ) ;
 int FUNC_17 (struct platform_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_6)
{
 struct imx7d_adc *VAR_7;
 struct iio_dev *VAR_8;
 struct device *VAR_9 = &VAR_6->dev;
 int VAR_10;
 int VAR_11;

 VAR_8 = FUNC_7(VAR_9, sizeof(*VAR_7));
 if (!VAR_8) {
  FUNC_3(&VAR_6->dev, "Failed allocating iio device\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_12(VAR_8);
 VAR_7->dev = VAR_9;

 VAR_7->regs = FUNC_9(VAR_6, 0);
 if (FUNC_1(VAR_7->regs))
  return FUNC_2(VAR_7->regs);

 VAR_10 = FUNC_16(VAR_6, 0);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_7->clk = FUNC_6(VAR_9, "adc");
 if (FUNC_1(VAR_7->clk)) {
  VAR_11 = FUNC_2(VAR_7->clk);
  FUNC_3(VAR_9, "Failed getting clock, err = %d\n", VAR_11);
  return VAR_11;
 }

 VAR_7->vref = FUNC_10(VAR_9, "vref");
 if (FUNC_1(VAR_7->vref)) {
  VAR_11 = FUNC_2(VAR_7->vref);
  FUNC_3(VAR_9,
   "Failed getting reference voltage, err = %d\n", VAR_11);
  return VAR_11;
 }

 FUNC_17(VAR_6, VAR_8);

 FUNC_15(&VAR_7->completion);

 VAR_8->name = FUNC_4(VAR_9);
 VAR_8->dev.parent = VAR_9;
 VAR_8->info = &VAR_4;
 VAR_8->modes = VAR_1;
 VAR_8->channels = VAR_3;
 VAR_8->num_channels = FUNC_0(VAR_3);

 VAR_11 = FUNC_11(VAR_9, VAR_10, VAR_5, 0, FUNC_4(VAR_9), VAR_7);
 if (VAR_11 < 0) {
  FUNC_3(VAR_9, "Failed requesting irq, irq = %d\n", VAR_10);
  return VAR_11;
 }

 FUNC_14(VAR_7);

 VAR_11 = FUNC_13(&VAR_8->dev);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_5(VAR_9, VAR_2,
           &VAR_8->dev);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_8(VAR_9, VAR_8);
 if (VAR_11) {
  FUNC_3(&VAR_6->dev, "Couldn't register the device.\n");
  return VAR_11;
 }

 return 0;
}
