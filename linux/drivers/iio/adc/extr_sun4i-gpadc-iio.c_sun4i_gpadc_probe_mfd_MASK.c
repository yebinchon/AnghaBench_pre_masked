
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sun4i_gpadc_iio {int no_irq; int ignore_fifo_data_irq; int fifo_data_irq; int ignore_temp_data_irq; int temp_data_irq; int sensor_device; struct gpadc_data* data; int regmap; } ;
struct sun4i_gpadc_dev {int regmap; } ;
struct TYPE_4__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct iio_dev {void* channels; void* num_channels; } ;
struct gpadc_data {int dummy; } ;
struct TYPE_3__ {scalar_t__ driver_data; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 struct sun4i_gpadc_dev* FUNC_3 (int ) ;
 int FUNC_4 (struct iio_dev*,int ) ;
 struct sun4i_gpadc_iio* FUNC_5 (struct iio_dev*) ;
 TYPE_1__* FUNC_6 (struct platform_device*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (struct platform_device*,char*,int ,char*,int *,int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_6,
     struct iio_dev *VAR_7)
{
 struct sun4i_gpadc_iio *VAR_8 = FUNC_5(VAR_7);
 struct sun4i_gpadc_dev *VAR_9 =
  FUNC_3(VAR_6->dev.parent);
 int VAR_10;

 VAR_8->no_irq = 0;
 VAR_8->regmap = VAR_9->regmap;

 VAR_7->num_channels = FUNC_0(VAR_1);
 VAR_7->channels = VAR_1;

 VAR_8->data = (struct gpadc_data *)FUNC_6(VAR_6)->driver_data;
 if (FUNC_1(VAR_0)) {
  VAR_8->sensor_device = VAR_6->dev.parent;
 } else {
  VAR_7->num_channels =
   FUNC_0(VAR_2);
  VAR_7->channels = VAR_2;
 }

 if (FUNC_1(VAR_0)) {
  VAR_10 = FUNC_7(VAR_6, "TEMP_DATA_PENDING",
         VAR_5,
         "temp_data", &VAR_8->temp_data_irq,
         &VAR_8->ignore_temp_data_irq);
  if (VAR_10 < 0)
   return VAR_10;
 }

 VAR_10 = FUNC_7(VAR_6, "FIFO_DATA_PENDING",
        VAR_3, "fifo_data",
        &VAR_8->fifo_data_irq, &VAR_8->ignore_fifo_data_irq);
 if (VAR_10 < 0)
  return VAR_10;

 if (FUNC_1(VAR_0)) {
  VAR_10 = FUNC_4(VAR_7, VAR_4);
  if (VAR_10 < 0) {
   FUNC_2(&VAR_6->dev,
    "failed to register iio map array\n");
   return VAR_10;
  }
 }

 return 0;
}
