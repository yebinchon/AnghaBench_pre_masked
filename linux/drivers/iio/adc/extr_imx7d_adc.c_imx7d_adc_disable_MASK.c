
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx7d_adc {int vref; int clk; } ;
struct iio_dev {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 struct imx7d_adc* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct imx7d_adc*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_1(VAR_0);
 struct imx7d_adc *VAR_2 = FUNC_2(VAR_1);

 FUNC_3(VAR_2);

 FUNC_0(VAR_2->clk);
 FUNC_4(VAR_2->vref);

 return 0;
}
