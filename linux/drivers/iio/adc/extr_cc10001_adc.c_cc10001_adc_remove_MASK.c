
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct iio_dev {int dummy; } ;
struct cc10001_adc_device {int reg; int adc_clk; } ;


 int FUNC_0 (struct cc10001_adc_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iio_dev*) ;
 struct cc10001_adc_device* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct iio_dev* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_5(VAR_0);
 struct cc10001_adc_device *VAR_2 = FUNC_3(VAR_1);

 FUNC_0(VAR_2);
 FUNC_2(VAR_1);
 FUNC_4(VAR_1);
 FUNC_1(VAR_2->adc_clk);
 FUNC_6(VAR_2->reg);

 return 0;
}
