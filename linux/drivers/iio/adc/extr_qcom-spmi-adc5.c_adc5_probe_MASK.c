
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct regmap {int dummy; } ;
struct device {int parent; struct device_node* of_node; } ;
struct platform_device {int name; struct device dev; } ;
struct TYPE_2__ {struct device_node* of_node; struct device* parent; } ;
struct iio_dev {int num_channels; int channels; int * info; int modes; int name; TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct adc5_chip {int poll_eoc; int nchannels; int iio_chans; int lock; int complete; int base; struct device* dev; struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct adc5_chip*,struct device_node*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct regmap* FUNC_1 (int ,int *) ;
 struct iio_dev* FUNC_2 (struct device*,int) ;
 int FUNC_3 (struct device*,struct iio_dev*) ;
 int FUNC_4 (struct device*,int,int ,int ,char*,struct adc5_chip*) ;
 struct adc5_chip* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct device_node*,char*,int *) ;
 int FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->dev.of_node;
 struct device *VAR_9 = &VAR_7->dev;
 struct iio_dev *VAR_10;
 struct adc5_chip *VAR_11;
 struct regmap *VAR_12;
 int VAR_13, VAR_14;
 u32 VAR_15;

 VAR_12 = FUNC_1(VAR_9->parent, ((void*)0));
 if (!VAR_12)
  return -VAR_1;

 VAR_13 = FUNC_8(VAR_8, "reg", &VAR_15);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_10 = FUNC_2(VAR_9, sizeof(*VAR_11));
 if (!VAR_10)
  return -VAR_2;

 VAR_11 = FUNC_5(VAR_10);
 VAR_11->regmap = VAR_12;
 VAR_11->dev = VAR_9;
 VAR_11->base = VAR_15;
 FUNC_6(&VAR_11->complete);
 FUNC_7(&VAR_11->lock);

 VAR_13 = FUNC_0(VAR_11, VAR_8);
 if (VAR_13) {
  FUNC_10("adc get dt data failed\n");
  return VAR_13;
 }

 VAR_14 = FUNC_9(VAR_7, 0);
 if (VAR_14 < 0) {
  if (VAR_14 == -VAR_3 || VAR_14 == -VAR_0)
   return VAR_14;
  VAR_11->poll_eoc = 1;
 } else {
  VAR_13 = FUNC_4(VAR_9, VAR_14, VAR_6, 0,
           "pm-adc5", VAR_11);
  if (VAR_13)
   return VAR_13;
 }

 VAR_10->dev.parent = VAR_9;
 VAR_10->dev.of_node = VAR_8;
 VAR_10->name = VAR_7->name;
 VAR_10->modes = VAR_4;
 VAR_10->info = &VAR_5;
 VAR_10->channels = VAR_11->iio_chans;
 VAR_10->num_channels = VAR_11->nchannels;

 return FUNC_3(VAR_9, VAR_10);
}
