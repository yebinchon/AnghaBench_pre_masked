
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* driver; int of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_7__ {TYPE_3__* parent; } ;
struct iio_dev {int num_channels; int channels; int * info; int modes; int name; TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct berlin2_adc_priv {int regmap; int lock; int wq; } ;
struct TYPE_6__ {int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_3__*) ;
 struct iio_dev* FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,int,int ,int ,int ,struct iio_dev*) ;
 int FUNC_6 (struct iio_dev*) ;
 struct berlin2_adc_priv* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct device_node* FUNC_10 (int ) ;
 int FUNC_11 (struct device_node*) ;
 int FUNC_12 (struct platform_device*,char*) ;
 int FUNC_13 (struct platform_device*,struct iio_dev*) ;
 int FUNC_14 (int ,int ,int ,int ) ;
 int FUNC_15 (struct device_node*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_8)
{
 struct iio_dev *VAR_9;
 struct berlin2_adc_priv *VAR_10;
 struct device_node *VAR_11 = FUNC_10(VAR_8->dev.of_node);
 int VAR_12, VAR_13;
 int VAR_14;

 VAR_9 = FUNC_4(&VAR_8->dev, sizeof(*VAR_10));
 if (!VAR_9)
  return -VAR_2;

 VAR_10 = FUNC_7(VAR_9);
 FUNC_13(VAR_8, VAR_9);

 VAR_10->regmap = FUNC_15(VAR_11);
 FUNC_11(VAR_11);
 if (FUNC_1(VAR_10->regmap))
  return FUNC_2(VAR_10->regmap);

 VAR_12 = FUNC_12(VAR_8, "adc");
 if (VAR_12 < 0)
  return VAR_12;

 VAR_13 = FUNC_12(VAR_8, "tsen");
 if (VAR_13 < 0)
  return VAR_13;

 VAR_14 = FUNC_5(&VAR_8->dev, VAR_12, VAR_6, 0,
          VAR_8->dev.driver->name, VAR_9);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_5(&VAR_8->dev, VAR_13, VAR_7,
          0, VAR_8->dev.driver->name, VAR_9);
 if (VAR_14)
  return VAR_14;

 FUNC_8(&VAR_10->wq);
 FUNC_9(&VAR_10->lock);

 VAR_9->dev.parent = &VAR_8->dev;
 VAR_9->name = FUNC_3(&VAR_8->dev);
 VAR_9->modes = VAR_3;
 VAR_9->info = &VAR_5;

 VAR_9->channels = VAR_4;
 VAR_9->num_channels = FUNC_0(VAR_4);


 FUNC_14(VAR_10->regmap, VAR_0,
      VAR_1,
      VAR_1);

 VAR_14 = FUNC_6(VAR_9);
 if (VAR_14) {

  FUNC_14(VAR_10->regmap, VAR_0,
       VAR_1, 0);
  return VAR_14;
 }

 return 0;
}
