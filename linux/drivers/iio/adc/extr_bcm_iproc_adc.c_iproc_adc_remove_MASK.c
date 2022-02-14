
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct iproc_adc_priv {int adc_clk; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iio_dev*) ;
 struct iproc_adc_priv* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct iio_dev* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_4(VAR_0);
 struct iproc_adc_priv *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_1);
 FUNC_3(VAR_1);
 FUNC_0(VAR_2->adc_clk);

 return 0;
}
