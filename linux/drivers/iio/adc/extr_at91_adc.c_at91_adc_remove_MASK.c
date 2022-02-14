
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct iio_dev {int dummy; } ;
struct at91_adc_state {int irq; int clk; int adc_clk; int touchscreen_type; } ;


 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct at91_adc_state*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*) ;
 struct at91_adc_state* FUNC_6 (struct iio_dev*) ;
 struct iio_dev* FUNC_7 (struct platform_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_7(VAR_0);
 struct at91_adc_state *VAR_2 = FUNC_6(VAR_1);

 FUNC_5(VAR_1);
 if (!VAR_2->touchscreen_type) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_1);
 } else {
  FUNC_2(VAR_2);
 }
 FUNC_3(VAR_2->adc_clk);
 FUNC_3(VAR_2->clk);
 FUNC_4(VAR_2->irq, VAR_1);

 return 0;
}
