
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct lpc18xx_adc {int vref; int clk; scalar_t__ base; } ;
struct iio_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iio_dev*) ;
 struct lpc18xx_adc* FUNC_2 (struct iio_dev*) ;
 struct iio_dev* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_3(VAR_1);
 struct lpc18xx_adc *VAR_3 = FUNC_2(VAR_2);

 FUNC_1(VAR_2);

 FUNC_5(0, VAR_3->base + VAR_0);
 FUNC_0(VAR_3->clk);
 FUNC_4(VAR_3->vref);

 return 0;
}
