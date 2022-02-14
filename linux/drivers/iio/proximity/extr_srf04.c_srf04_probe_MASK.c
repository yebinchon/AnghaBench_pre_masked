
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct srf04_data {scalar_t__ irqnr; struct device* dev; void* gpiod_echo; void* gpiod_trig; int falling; int rising; int lock; int cfg; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; int name; } ;
struct TYPE_3__ {struct device* parent; } ;
struct iio_dev {char* name; int num_channels; int channels; int modes; int * info; TYPE_1__ dev; } ;
struct TYPE_4__ {int data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct device*,char*,...) ;
 void* FUNC_4 (struct device*,char*,int ) ;
 struct iio_dev* FUNC_5 (struct device*,int) ;
 int FUNC_6 (struct device*,struct iio_dev*) ;
 int FUNC_7 (struct device*,int,int ,int,int ,struct iio_dev*) ;
 scalar_t__ FUNC_8 (void*) ;
 scalar_t__ FUNC_9 (void*) ;
 struct srf04_data* FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 TYPE_2__* FUNC_13 (int ,struct device*) ;
 int VAR_7 ;
 int FUNC_14 (struct platform_device*,struct iio_dev*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_11)
{
 struct device *VAR_12 = &VAR_11->dev;
 struct srf04_data *VAR_13;
 struct iio_dev *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_5(VAR_12, sizeof(struct srf04_data));
 if (!VAR_14) {
  FUNC_3(VAR_12, "failed to allocate IIO device\n");
  return -VAR_1;
 }

 VAR_13 = FUNC_10(VAR_14);
 VAR_13->dev = VAR_12;
 VAR_13->cfg = FUNC_13(VAR_7, VAR_12)->data;

 FUNC_12(&VAR_13->lock);
 FUNC_11(&VAR_13->rising);
 FUNC_11(&VAR_13->falling);

 VAR_13->gpiod_trig = FUNC_4(VAR_12, "trig", VAR_3);
 if (FUNC_1(VAR_13->gpiod_trig)) {
  FUNC_3(VAR_12, "failed to get trig-gpios: err=%ld\n",
     FUNC_2(VAR_13->gpiod_trig));
  return FUNC_2(VAR_13->gpiod_trig);
 }

 VAR_13->gpiod_echo = FUNC_4(VAR_12, "echo", VAR_2);
 if (FUNC_1(VAR_13->gpiod_echo)) {
  FUNC_3(VAR_12, "failed to get echo-gpios: err=%ld\n",
     FUNC_2(VAR_13->gpiod_echo));
  return FUNC_2(VAR_13->gpiod_echo);
 }

 if (FUNC_8(VAR_13->gpiod_echo)) {
  FUNC_3(VAR_13->dev, "cansleep-GPIOs not supported\n");
  return -VAR_0;
 }

 VAR_13->irqnr = FUNC_9(VAR_13->gpiod_echo);
 if (VAR_13->irqnr < 0) {
  FUNC_3(VAR_13->dev, "gpiod_to_irq: %d\n", VAR_13->irqnr);
  return VAR_13->irqnr;
 }

 VAR_15 = FUNC_7(VAR_12, VAR_13->irqnr, VAR_9,
   VAR_6 | VAR_5,
   VAR_11->name, VAR_14);
 if (VAR_15 < 0) {
  FUNC_3(VAR_13->dev, "request_irq: %d\n", VAR_15);
  return VAR_15;
 }

 FUNC_14(VAR_11, VAR_14);

 VAR_14->name = "srf04";
 VAR_14->dev.parent = &VAR_11->dev;
 VAR_14->info = &VAR_10;
 VAR_14->modes = VAR_4;
 VAR_14->channels = VAR_8;
 VAR_14->num_channels = FUNC_0(VAR_8);

 return FUNC_6(VAR_12, VAR_14);
}
