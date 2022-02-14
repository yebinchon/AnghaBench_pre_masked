
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vf610_adc {int clk; int vref; } ;
struct platform_device {int dummy; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iio_dev*) ;
 struct vf610_adc* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct iio_dev* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_4(VAR_0);
 struct vf610_adc *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_1);
 FUNC_3(VAR_1);
 FUNC_5(VAR_2->vref);
 FUNC_0(VAR_2->clk);

 return 0;
}
