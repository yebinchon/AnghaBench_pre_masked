
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int of_node; struct device* parent; } ;
struct iio_dev {int num_channels; int * channels; int * info; TYPE_1__ dev; int name; } ;
struct envelope {int comp_interval; scalar_t__ comp_irq; int comp_irq_trigger; int comp_irq_trigger_inv; int dac_max; int dac; int comp_timeout; int done; int read_lock; int comp_lock; } ;
typedef enum iio_chan_type { ____Placeholder_iio_chan_type } iio_chan_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,char*) ;
 struct iio_dev* FUNC_6 (struct device*,int) ;
 int FUNC_7 (struct device*,struct iio_dev*) ;
 int FUNC_8 (struct device*,int,int ,int ,char*,struct envelope*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (int ,int*) ;
 struct envelope* FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (struct platform_device*,char*) ;
 int FUNC_16 (struct platform_device*,struct iio_dev*) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_12)
{
 struct device *VAR_13 = &VAR_12->dev;
 struct iio_dev *VAR_14;
 struct envelope *VAR_15;
 enum iio_chan_type VAR_16;
 int VAR_17;

 VAR_14 = FUNC_6(VAR_13, sizeof(*VAR_15));
 if (!VAR_14)
  return -VAR_1;

 FUNC_16(VAR_12, VAR_14);
 VAR_15 = FUNC_10(VAR_14);
 VAR_15->comp_interval = 50;

 FUNC_17(&VAR_15->comp_lock);
 FUNC_14(&VAR_15->read_lock);
 FUNC_12(&VAR_15->done);
 FUNC_0(&VAR_15->comp_timeout, VAR_11);

 VAR_14->name = FUNC_4(VAR_13);
 VAR_14->dev.parent = VAR_13;
 VAR_14->dev.of_node = VAR_13->of_node;
 VAR_14->info = &VAR_10;
 VAR_14->channels = &VAR_9;
 VAR_14->num_channels = 1;

 VAR_15->dac = FUNC_5(VAR_13, "dac");
 if (FUNC_1(VAR_15->dac)) {
  if (FUNC_2(VAR_15->dac) != -VAR_2)
   FUNC_3(VAR_13, "failed to get dac input channel\n");
  return FUNC_2(VAR_15->dac);
 }

 VAR_15->comp_irq = FUNC_15(VAR_12, "comp");
 if (VAR_15->comp_irq < 0)
  return VAR_15->comp_irq;

 VAR_17 = FUNC_8(VAR_13, VAR_15->comp_irq, VAR_8,
          0, "envelope-detector", VAR_15);
 if (VAR_17) {
  if (VAR_17 != -VAR_2)
   FUNC_3(VAR_13, "failed to request interrupt\n");
  return VAR_17;
 }
 VAR_15->comp_irq_trigger = FUNC_13(VAR_15->comp_irq);
 if (VAR_15->comp_irq_trigger & VAR_7)
  VAR_15->comp_irq_trigger_inv |= VAR_4;
 if (VAR_15->comp_irq_trigger & VAR_4)
  VAR_15->comp_irq_trigger_inv |= VAR_7;
 if (VAR_15->comp_irq_trigger & VAR_5)
  VAR_15->comp_irq_trigger_inv |= VAR_6;
 if (VAR_15->comp_irq_trigger & VAR_6)
  VAR_15->comp_irq_trigger_inv |= VAR_5;

 VAR_17 = FUNC_9(VAR_15->dac, &VAR_16);
 if (VAR_17 < 0)
  return VAR_17;

 if (VAR_16 != VAR_3) {
  FUNC_3(VAR_13, "dac is of the wrong type\n");
  return -VAR_0;
 }

 VAR_17 = FUNC_11(VAR_15->dac, &VAR_15->dac_max);
 if (VAR_17 < 0) {
  FUNC_3(VAR_13, "dac does not indicate its raw maximum value\n");
  return VAR_17;
 }

 return FUNC_7(VAR_13, VAR_14);
}
