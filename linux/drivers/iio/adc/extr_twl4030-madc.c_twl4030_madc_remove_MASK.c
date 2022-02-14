
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_madc_data {int usb3v1; } ;
struct platform_device {int dummy; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (struct iio_dev*) ;
 struct twl4030_madc_data* FUNC_1 (struct iio_dev*) ;
 struct iio_dev* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct twl4030_madc_data*,int ,int ) ;
 int FUNC_5 (struct twl4030_madc_data*,int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_2(VAR_0);
 struct twl4030_madc_data *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_1);

 FUNC_4(VAR_2, 0, 0);
 FUNC_5(VAR_2, 0);

 FUNC_3(VAR_2->usb3v1);

 return 0;
}
