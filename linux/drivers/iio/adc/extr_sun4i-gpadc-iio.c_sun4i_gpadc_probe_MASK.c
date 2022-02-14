
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct sun4i_gpadc_iio {int no_irq; int tzd; int sensor_device; int completion; struct iio_dev* indio_dev; int mutex; } ;
struct TYPE_13__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_12__ {scalar_t__ of_node; TYPE_2__* parent; } ;
struct iio_dev {int modes; int * info; TYPE_1__ dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 int FUNC_4 (TYPE_2__*) ;
 struct iio_dev* FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*) ;
 struct sun4i_gpadc_iio* FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct platform_device*,struct iio_dev*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*,int ) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_18 (struct platform_device*,struct iio_dev*) ;
 int FUNC_19 (struct platform_device*,struct iio_dev*) ;
 int VAR_6 ;
 int FUNC_20 (int ,int ,struct sun4i_gpadc_iio*,int *) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_7)
{
 struct sun4i_gpadc_iio *VAR_8;
 struct iio_dev *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_5(&VAR_7->dev, sizeof(*VAR_8));
 if (!VAR_9)
  return -VAR_2;

 VAR_8 = FUNC_8(VAR_9);
 FUNC_11(VAR_7, VAR_9);

 FUNC_10(&VAR_8->mutex);
 VAR_8->indio_dev = VAR_9;
 FUNC_9(&VAR_8->completion);
 VAR_9->name = FUNC_4(&VAR_7->dev);
 VAR_9->dev.parent = &VAR_7->dev;
 VAR_9->dev.of_node = VAR_7->dev.of_node;
 VAR_9->info = &VAR_5;
 VAR_9->modes = VAR_3;

 if (VAR_7->dev.of_node)
  VAR_10 = FUNC_18(VAR_7, VAR_9);
 else
  VAR_10 = FUNC_19(VAR_7, VAR_9);

 if (VAR_10)
  return VAR_10;

 FUNC_15(&VAR_7->dev,
      VAR_4);
 FUNC_17(&VAR_7->dev);
 FUNC_16(&VAR_7->dev);
 FUNC_13(&VAR_7->dev);

 if (FUNC_0(VAR_0)) {
  VAR_8->tzd = FUNC_20(VAR_8->sensor_device,
           0, VAR_8,
           &VAR_6);




  if (FUNC_1(VAR_8->tzd) && FUNC_2(VAR_8->tzd) != -VAR_1) {
   FUNC_3(&VAR_7->dev,
    "could not register thermal sensor: %ld\n",
    FUNC_2(VAR_8->tzd));
   return FUNC_2(VAR_8->tzd);
  }
 }

 VAR_10 = FUNC_6(&VAR_7->dev, VAR_9);
 if (VAR_10 < 0) {
  FUNC_3(&VAR_7->dev, "could not register the device\n");
  goto err_map;
 }

 return 0;

err_map:
 if (!VAR_8->no_irq && FUNC_0(VAR_0))
  FUNC_7(VAR_9);

 FUNC_14(&VAR_7->dev);
 FUNC_12(&VAR_7->dev);

 return VAR_10;
}
