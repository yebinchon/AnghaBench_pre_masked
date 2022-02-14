
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rescale {int numerator; int denominator; struct iio_chan_spec_ext_info* ext_info; int chan; struct iio_channel* source; TYPE_3__* cfg; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_5__ {struct device* parent; } ;
struct iio_dev {int num_channels; int * channels; int modes; int * info; TYPE_1__ dev; int name; } ;
struct iio_channel {TYPE_2__* channel; } ;
struct iio_chan_spec_ext_info {int private; int write; int read; scalar_t__ name; } ;
struct TYPE_8__ {scalar_t__ write; scalar_t__ read; } ;
struct TYPE_7__ {int (* props ) (struct device*,struct rescale*) ;} ;
struct TYPE_6__ {TYPE_4__* ext_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct iio_channel*) ;
 int FUNC_1 (struct iio_channel*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*) ;
 struct iio_channel* FUNC_4 (struct device*,int *) ;
 struct iio_dev* FUNC_5 (struct device*,int) ;
 int FUNC_6 (struct device*,struct iio_dev*) ;
 struct iio_chan_spec_ext_info* FUNC_7 (struct device*,TYPE_4__*,int,int ) ;
 int FUNC_8 (struct iio_channel*) ;
 struct rescale* FUNC_9 (struct iio_dev*) ;
 TYPE_3__* FUNC_10 (struct device*) ;
 int FUNC_11 (struct platform_device*,struct iio_dev*) ;
 int FUNC_12 (struct device*,struct rescale*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_13 (struct device*,struct rescale*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct iio_dev *VAR_10;
 struct iio_channel *VAR_11;
 struct rescale *VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_11 = FUNC_4(VAR_9, ((void*)0));
 if (FUNC_0(VAR_11)) {
  if (FUNC_1(VAR_11) != -VAR_2)
   FUNC_2(VAR_9, "failed to get source channel\n");
  return FUNC_1(VAR_11);
 }

 VAR_13 = FUNC_8(VAR_11);
 if (VAR_13) {
  VAR_13 += 1;
  VAR_13 *= sizeof(*VAR_12->ext_info);
 }

 VAR_14 = sizeof(*VAR_12) + VAR_13;

 VAR_10 = FUNC_5(VAR_9, VAR_14);
 if (!VAR_10)
  return -VAR_1;

 VAR_12 = FUNC_9(VAR_10);

 VAR_12->cfg = FUNC_10(VAR_9);
 VAR_12->numerator = 1;
 VAR_12->denominator = 1;

 VAR_16 = VAR_12->cfg->props(VAR_9, VAR_12);
 if (VAR_16)
  return VAR_16;

 if (!VAR_12->numerator || !VAR_12->denominator) {
  FUNC_2(VAR_9, "invalid scaling factor.\n");
  return -VAR_0;
 }

 FUNC_11(VAR_8, VAR_10);

 VAR_12->source = VAR_11;

 VAR_10->name = FUNC_3(VAR_9);
 VAR_10->dev.parent = VAR_9;
 VAR_10->info = &VAR_5;
 VAR_10->modes = VAR_4;
 VAR_10->channels = &VAR_12->chan;
 VAR_10->num_channels = 1;
 if (VAR_13) {
  VAR_12->ext_info = FUNC_7(VAR_9,
       VAR_11->channel->ext_info,
       VAR_13, VAR_3);
  if (!VAR_12->ext_info)
   return -VAR_1;

  for (VAR_15 = 0; VAR_12->ext_info[VAR_15].name; ++VAR_15) {
   struct iio_chan_spec_ext_info *VAR_17 =
    &VAR_12->ext_info[VAR_15];

   if (VAR_11->channel->ext_info[VAR_15].read)
    VAR_17->read = VAR_6;
   if (VAR_11->channel->ext_info[VAR_15].write)
    VAR_17->write = VAR_7;
   VAR_17->private = VAR_15;
  }
 }

 VAR_16 = FUNC_12(VAR_9, VAR_12);
 if (VAR_16)
  return VAR_16;

 return FUNC_6(VAR_9, VAR_10);
}
