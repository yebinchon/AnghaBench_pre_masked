
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct stm32_lptimer {scalar_t__ has_encoder; int clk; int regmap; } ;
struct TYPE_9__ {int num_signals; int num_counts; struct stm32_lptim_cnt* priv; int signals; int * counts; int * ops; TYPE_2__* parent; void* name; } ;
struct stm32_lptim_cnt {TYPE_5__ counter; int ceiling; int clk; int regmap; TYPE_2__* dev; } ;
struct TYPE_8__ {int of_node; int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_7__ {int of_node; TYPE_2__* parent; } ;
struct iio_dev {int num_channels; int * channels; int * info; TYPE_1__ dev; void* name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct stm32_lptimer*) ;
 int VAR_2 ;
 struct stm32_lptimer* FUNC_2 (int ) ;
 void* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_5__*) ;
 struct iio_dev* FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,struct iio_dev*) ;
 struct stm32_lptim_cnt* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (struct platform_device*,struct stm32_lptim_cnt*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_10)
{
 struct stm32_lptimer *VAR_11 = FUNC_2(VAR_10->dev.parent);
 struct stm32_lptim_cnt *VAR_12;
 struct iio_dev *VAR_13;
 int VAR_14;

 if (FUNC_1(VAR_11))
  return -VAR_0;

 VAR_13 = FUNC_5(&VAR_10->dev, sizeof(*VAR_12));
 if (!VAR_13)
  return -VAR_1;

 VAR_12 = FUNC_7(VAR_13);
 VAR_12->dev = &VAR_10->dev;
 VAR_12->regmap = VAR_11->regmap;
 VAR_12->clk = VAR_11->clk;
 VAR_12->ceiling = VAR_2;


 VAR_13->name = FUNC_3(&VAR_10->dev);
 VAR_13->dev.parent = &VAR_10->dev;
 VAR_13->dev.of_node = VAR_10->dev.of_node;
 VAR_13->info = &VAR_4;
 if (VAR_11->has_encoder)
  VAR_13->channels = &VAR_7;
 else
  VAR_13->channels = &VAR_3;
 VAR_13->num_channels = 1;


 VAR_12->counter.name = FUNC_3(&VAR_10->dev);
 VAR_12->counter.parent = &VAR_10->dev;
 VAR_12->counter.ops = &VAR_5;
 if (VAR_11->has_encoder) {
  VAR_12->counter.counts = &VAR_8;
  VAR_12->counter.num_signals = FUNC_0(VAR_6);
 } else {
  VAR_12->counter.counts = &VAR_9;
  VAR_12->counter.num_signals = 1;
 }
 VAR_12->counter.num_counts = 1;
 VAR_12->counter.signals = VAR_6;
 VAR_12->counter.priv = VAR_12;

 FUNC_8(VAR_10, VAR_12);

 VAR_14 = FUNC_6(&VAR_10->dev, VAR_13);
 if (VAR_14)
  return VAR_14;

 return FUNC_4(&VAR_10->dev, &VAR_12->counter);
}
