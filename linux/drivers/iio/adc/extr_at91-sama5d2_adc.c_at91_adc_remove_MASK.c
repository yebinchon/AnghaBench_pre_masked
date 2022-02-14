
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct iio_dev {int dummy; } ;
struct at91_adc_state {int reg; int vref; int per_clk; } ;


 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iio_dev*) ;
 struct at91_adc_state* FUNC_3 (struct iio_dev*) ;
 struct iio_dev* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_4(VAR_0);
 struct at91_adc_state *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(VAR_1);

 FUNC_0(VAR_0);

 FUNC_1(VAR_2->per_clk);

 FUNC_5(VAR_2->vref);
 FUNC_5(VAR_2->reg);

 return 0;
}
