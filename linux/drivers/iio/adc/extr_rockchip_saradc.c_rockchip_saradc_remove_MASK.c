
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_saradc {int vref; int pclk; int clk; } ;
struct platform_device {int dummy; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iio_dev*) ;
 struct rockchip_saradc* FUNC_2 (struct iio_dev*) ;
 struct iio_dev* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_3(VAR_0);
 struct rockchip_saradc *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_1);
 FUNC_0(VAR_2->clk);
 FUNC_0(VAR_2->pclk);
 FUNC_4(VAR_2->vref);

 return 0;
}
