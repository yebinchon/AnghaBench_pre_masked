
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vf610_dac {int clk; int regs; TYPE_2__* dev; } ;
struct resource {int dummy; } ;
struct TYPE_8__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_7__ {int of_node; TYPE_2__* parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int * info; TYPE_1__ dev; int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,char*,...) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 struct iio_dev* FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (TYPE_2__*,struct resource*) ;
 int FUNC_10 (struct iio_dev*) ;
 struct vf610_dac* FUNC_11 (struct iio_dev*) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct iio_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_14 (struct vf610_dac*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_5)
{
 struct iio_dev *VAR_6;
 struct vf610_dac *VAR_7;
 struct resource *VAR_8;
 int VAR_9;

 VAR_6 = FUNC_8(&VAR_5->dev,
     sizeof(struct vf610_dac));
 if (!VAR_6) {
  FUNC_5(&VAR_5->dev, "Failed allocating iio device\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_11(VAR_6);
 VAR_7->dev = &VAR_5->dev;

 VAR_8 = FUNC_12(VAR_5, VAR_2, 0);
 VAR_7->regs = FUNC_9(&VAR_5->dev, VAR_8);
 if (FUNC_1(VAR_7->regs))
  return FUNC_2(VAR_7->regs);

 VAR_7->clk = FUNC_7(&VAR_5->dev, "dac");
 if (FUNC_1(VAR_7->clk)) {
  FUNC_5(&VAR_5->dev, "Failed getting clock, err = %ld\n",
   FUNC_2(VAR_7->clk));
  return FUNC_2(VAR_7->clk);
 }

 FUNC_13(VAR_5, VAR_6);

 VAR_6->name = FUNC_6(&VAR_5->dev);
 VAR_6->dev.parent = &VAR_5->dev;
 VAR_6->dev.of_node = VAR_5->dev.of_node;
 VAR_6->info = &VAR_4;
 VAR_6->modes = VAR_1;
 VAR_6->channels = VAR_3;
 VAR_6->num_channels = FUNC_0(VAR_3);

 VAR_9 = FUNC_4(VAR_7->clk);
 if (VAR_9) {
  FUNC_5(&VAR_5->dev,
   "Could not prepare or enable the clock\n");
  return VAR_9;
 }

 FUNC_14(VAR_7);

 VAR_9 = FUNC_10(VAR_6);
 if (VAR_9) {
  FUNC_5(&VAR_5->dev, "Couldn't register the device\n");
  goto error_iio_device_register;
 }

 return 0;

error_iio_device_register:
 FUNC_3(VAR_7->clk);

 return VAR_9;
}
