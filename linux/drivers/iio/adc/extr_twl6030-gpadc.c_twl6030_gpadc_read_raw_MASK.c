
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct twl6030_gpadc_data {int lock; int irq_complete; int dev; TYPE_1__* pdata; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
struct TYPE_2__ {int (* start_conversion ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 struct twl6030_gpadc_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct twl6030_gpadc_data*,int ,int*) ;
 int FUNC_7 (struct twl6030_gpadc_data*,int ,int*) ;
 long FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct iio_dev *VAR_4,
        const struct iio_chan_spec *VAR_5,
        int *VAR_6, int *VAR_7, long VAR_8)
{
 struct twl6030_gpadc_data *VAR_9 = FUNC_1(VAR_4);
 int VAR_10;
 long VAR_11;

 FUNC_3(&VAR_9->lock);

 VAR_10 = VAR_9->pdata->start_conversion(VAR_5->channel);
 if (VAR_10) {
  FUNC_0(VAR_9->dev, "failed to start conversion\n");
  goto err;
 }

 VAR_11 = FUNC_8(
    &VAR_9->irq_complete, FUNC_2(5000));
 if (VAR_11 == 0) {
  VAR_10 = -VAR_2;
  goto err;
 } else if (VAR_11 < 0) {
  VAR_10 = -VAR_0;
  goto err;
 }

 switch (VAR_8) {
 case 128:
  VAR_10 = FUNC_7(VAR_9, VAR_5->channel, VAR_6);
  VAR_10 = VAR_10 ? -VAR_1 : VAR_3;
  break;

 case 129:
  VAR_10 = FUNC_6(VAR_9, VAR_5->channel, VAR_6);
  VAR_10 = VAR_10 ? -VAR_1 : VAR_3;
  break;

 default:
  break;
 }
err:
 FUNC_4(&VAR_9->lock);

 return VAR_10;
}
