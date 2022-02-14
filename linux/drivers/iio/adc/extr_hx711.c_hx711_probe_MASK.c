
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_3__ {struct device* parent; } ;
struct iio_dev {char* name; int num_channels; int channels; int modes; int * info; TYPE_1__ dev; } ;
struct hx711_data {int gain_set; int gain_chan_a; int clock_frequency; int data_ready_delay_ns; void* reg_avdd; void* gpiod_dout; void* gpiod_pd_sck; int lock; struct device* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {int scale; int gain; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*) ;
 void* FUNC_5 (struct device*,char*,int ) ;
 struct iio_dev* FUNC_6 (struct device*,int) ;
 void* FUNC_7 (struct device*,char*) ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (struct iio_dev*) ;
 int VAR_9 ;
 struct hx711_data* FUNC_9 (struct iio_dev*) ;
 int FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (struct iio_dev*,int ,int ,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct device_node*,char*,int*) ;
 int FUNC_14 (struct platform_device*,struct iio_dev*) ;
 int FUNC_15 (void*) ;
 int FUNC_16 (void*) ;
 int FUNC_17 (void*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct device_node *VAR_12 = VAR_11->of_node;
 struct hx711_data *VAR_13;
 struct iio_dev *VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_14 = FUNC_6(VAR_11, sizeof(struct hx711_data));
 if (!VAR_14) {
  FUNC_3(VAR_11, "failed to allocate IIO device\n");
  return -VAR_0;
 }

 VAR_13 = FUNC_9(VAR_14);
 VAR_13->dev = VAR_11;

 FUNC_12(&VAR_13->lock);





 VAR_13->gpiod_pd_sck = FUNC_5(VAR_11, "sck", VAR_2);
 if (FUNC_1(VAR_13->gpiod_pd_sck)) {
  FUNC_3(VAR_11, "failed to get sck-gpiod: err=%ld\n",
     FUNC_2(VAR_13->gpiod_pd_sck));
  return FUNC_2(VAR_13->gpiod_pd_sck);
 }





 VAR_13->gpiod_dout = FUNC_5(VAR_11, "dout", VAR_1);
 if (FUNC_1(VAR_13->gpiod_dout)) {
  FUNC_3(VAR_11, "failed to get dout-gpiod: err=%ld\n",
     FUNC_2(VAR_13->gpiod_dout));
  return FUNC_2(VAR_13->gpiod_dout);
 }

 VAR_13->reg_avdd = FUNC_7(VAR_11, "avdd");
 if (FUNC_1(VAR_13->reg_avdd))
  return FUNC_2(VAR_13->reg_avdd);

 VAR_15 = FUNC_16(VAR_13->reg_avdd);
 if (VAR_15 < 0)
  return VAR_15;
 VAR_15 = FUNC_17(VAR_13->reg_avdd);
 if (VAR_15 < 0)
  goto error_regulator;


 VAR_15 *= 100;

 for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++)
  VAR_6[VAR_16].scale =
   VAR_15 / VAR_6[VAR_16].gain / 1678;

 VAR_13->gain_set = 128;
 VAR_13->gain_chan_a = 128;

 VAR_13->clock_frequency = 400000;
 VAR_15 = FUNC_13(VAR_12, "clock-frequency",
     &VAR_13->clock_frequency);





 if (VAR_13->clock_frequency < 20000) {
  FUNC_4(VAR_11, "clock-frequency too low - assuming 400 kHz\n");
  VAR_13->clock_frequency = 400000;
 }

 VAR_13->data_ready_delay_ns =
    1000000000 / VAR_13->clock_frequency;

 FUNC_14(VAR_10, VAR_14);

 VAR_14->name = "hx711";
 VAR_14->dev.parent = &VAR_10->dev;
 VAR_14->info = &VAR_7;
 VAR_14->modes = VAR_4;
 VAR_14->channels = VAR_5;
 VAR_14->num_channels = FUNC_0(VAR_5);

 VAR_15 = FUNC_11(VAR_14, VAR_9,
       VAR_8, ((void*)0));
 if (VAR_15 < 0) {
  FUNC_3(VAR_11, "setup of iio triggered buffer failed\n");
  goto error_regulator;
 }

 VAR_15 = FUNC_8(VAR_14);
 if (VAR_15 < 0) {
  FUNC_3(VAR_11, "Couldn't register the device\n");
  goto error_buffer;
 }

 return 0;

error_buffer:
 FUNC_10(VAR_14);

error_regulator:
 FUNC_15(VAR_13->reg_avdd);

 return VAR_15;
}
