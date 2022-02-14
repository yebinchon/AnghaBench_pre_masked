
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_gpadc_iio {int no_irq; int tzd; int sensor_device; } ;
struct platform_device {int dev; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iio_dev*) ;
 struct sun4i_gpadc_iio* FUNC_2 (struct iio_dev*) ;
 struct iio_dev* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_3(VAR_1);
 struct sun4i_gpadc_iio *VAR_3 = FUNC_2(VAR_2);

 FUNC_5(&VAR_1->dev);
 FUNC_4(&VAR_1->dev);

 if (!FUNC_0(VAR_0))
  return 0;

 FUNC_6(VAR_3->sensor_device, VAR_3->tzd);

 if (!VAR_3->no_irq)
  FUNC_1(VAR_2);

 return 0;
}
