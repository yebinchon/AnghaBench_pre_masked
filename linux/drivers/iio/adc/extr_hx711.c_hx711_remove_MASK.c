
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct iio_dev {int dummy; } ;
struct hx711_data {int reg_avdd; } ;


 int FUNC_0 (struct iio_dev*) ;
 struct hx711_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct iio_dev* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct hx711_data *VAR_1;
 struct iio_dev *VAR_2;

 VAR_2 = FUNC_3(VAR_0);
 VAR_1 = FUNC_1(VAR_2);

 FUNC_0(VAR_2);

 FUNC_2(VAR_2);

 FUNC_4(VAR_1->reg_avdd);

 return 0;
}
