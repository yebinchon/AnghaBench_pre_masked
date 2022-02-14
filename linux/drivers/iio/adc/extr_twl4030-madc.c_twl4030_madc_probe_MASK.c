
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct twl4030_madc_platform_data {int irq_line; } ;
struct twl4030_madc_data {int use_second_irq; int usb3v1; TYPE_2__* dev; int lock; int isr; int imr; } ;
struct TYPE_10__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_9__ {struct device_node* of_node; TYPE_2__* parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int * info; TYPE_1__ dev; int name; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
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
 int FUNC_2 (TYPE_2__*,char*,...) ;
 struct twl4030_madc_platform_data* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*) ;
 struct iio_dev* FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (TYPE_2__*,int,int *,int ,int,char*,struct twl4030_madc_data*) ;
 int FUNC_9 (struct iio_dev*) ;
 struct twl4030_madc_data* FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct device_node*,char*) ;
 int FUNC_13 (struct platform_device*,int ) ;
 int FUNC_14 (struct platform_device*,struct iio_dev*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 struct twl4030_madc_data* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_17 (struct twl4030_madc_data*,int ,int) ;
 int FUNC_18 (struct twl4030_madc_data*,int) ;
 int VAR_22 ;
 int FUNC_19 (int ,int*,int ) ;
 int FUNC_20 (int ,int,int ) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_23)
{
 struct twl4030_madc_data *VAR_24;
 struct twl4030_madc_platform_data *VAR_25 = FUNC_3(&VAR_23->dev);
 struct device_node *VAR_26 = VAR_23->dev.of_node;
 int VAR_27, VAR_28;
 u8 VAR_29;
 struct iio_dev *VAR_30 = ((void*)0);

 if (!VAR_25 && !VAR_26) {
  FUNC_2(&VAR_23->dev, "neither platform data nor Device Tree node available\n");
  return -VAR_0;
 }

 VAR_30 = FUNC_6(&VAR_23->dev, sizeof(*VAR_24));
 if (!VAR_30) {
  FUNC_2(&VAR_23->dev, "failed allocating iio device\n");
  return -VAR_2;
 }

 VAR_24 = FUNC_10(VAR_30);
 VAR_24->dev = &VAR_23->dev;

 VAR_30->name = FUNC_5(&VAR_23->dev);
 VAR_30->dev.parent = &VAR_23->dev;
 VAR_30->dev.of_node = VAR_23->dev.of_node;
 VAR_30->info = &VAR_21;
 VAR_30->modes = VAR_3;
 VAR_30->channels = VAR_20;
 VAR_30->num_channels = FUNC_0(VAR_20);






 if (VAR_25)
  VAR_24->use_second_irq = (VAR_25->irq_line != 1);
 else
  VAR_24->use_second_irq = FUNC_12(VAR_26,
           "ti,system-uses-second-madc-irq");

 VAR_24->imr = VAR_24->use_second_irq ? VAR_10 :
        VAR_9;
 VAR_24->isr = VAR_24->use_second_irq ? VAR_12 :
        VAR_11;

 VAR_28 = FUNC_18(VAR_24, 1);
 if (VAR_28 < 0)
  return VAR_28;
 VAR_28 = FUNC_17(VAR_24, 0, 1);
 if (VAR_28 < 0)
  goto err_current_generator;

 VAR_28 = FUNC_19(VAR_17,
         &VAR_29, VAR_6);
 if (VAR_28) {
  FUNC_2(&VAR_23->dev, "unable to read reg BCI CTL1 0x%X\n",
   VAR_6);
  goto err_i2c;
 }
 VAR_29 |= VAR_7;
 VAR_28 = FUNC_20(VAR_17,
          VAR_29, VAR_6);
 if (VAR_28) {
  FUNC_2(&VAR_23->dev, "unable to write reg BCI Ctl1 0x%X\n",
   VAR_6);
  goto err_i2c;
 }


 VAR_28 = FUNC_19(VAR_13, &VAR_29, VAR_14);
 if (VAR_28) {
  FUNC_2(&VAR_23->dev, "unable to read reg GPBR1 0x%X\n",
    VAR_14);
  goto err_i2c;
 }


 if (!(VAR_29 & VAR_8)) {
  FUNC_4(&VAR_23->dev, "clk disabled, enabling\n");
  VAR_29 |= VAR_8;
  VAR_28 = FUNC_20(VAR_13, VAR_29,
           VAR_14);
  if (VAR_28) {
   FUNC_2(&VAR_23->dev, "unable to write reg GPBR1 0x%X\n",
     VAR_14);
   goto err_i2c;
  }
 }

 FUNC_14(VAR_23, VAR_30);
 FUNC_11(&VAR_24->lock);

 VAR_27 = FUNC_13(VAR_23, 0);
 VAR_28 = FUNC_8(&VAR_23->dev, VAR_27, ((void*)0),
       VAR_22,
       VAR_5 | VAR_4,
       "twl4030_madc", VAR_24);
 if (VAR_28) {
  FUNC_2(&VAR_23->dev, "could not request irq\n");
  goto err_i2c;
 }
 VAR_19 = VAR_24;


 VAR_28 = FUNC_19(VAR_18, &VAR_29,
   VAR_15);
 if (VAR_28) {
  FUNC_2(&VAR_23->dev, "unable to read reg CARKIT_ANA_CTRL  0x%X\n",
    VAR_15);
  goto err_i2c;
 }
 VAR_29 |= VAR_16;
 VAR_28 = FUNC_20(VAR_18, VAR_29,
     VAR_15);
 if (VAR_28) {
  FUNC_2(&VAR_23->dev, "unable to write reg CARKIT_ANA_CTRL 0x%X\n",
    VAR_15);
  goto err_i2c;
 }


 VAR_24->usb3v1 = FUNC_7(VAR_24->dev, "vusb3v1");
 if (FUNC_1(VAR_24->usb3v1)) {
  VAR_28 = -VAR_1;
  goto err_i2c;
 }

 VAR_28 = FUNC_16(VAR_24->usb3v1);
 if (VAR_28) {
  FUNC_2(VAR_24->dev, "could not enable 3v1 bias regulator\n");
  goto err_i2c;
 }

 VAR_28 = FUNC_9(VAR_30);
 if (VAR_28) {
  FUNC_2(&VAR_23->dev, "could not register iio device\n");
  goto err_usb3v1;
 }

 return 0;

err_usb3v1:
 FUNC_15(VAR_24->usb3v1);
err_i2c:
 FUNC_17(VAR_24, 0, 0);
err_current_generator:
 FUNC_18(VAR_24, 0);
 return VAR_28;
}
