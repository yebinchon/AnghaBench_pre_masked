
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct iio_dev {int dummy; } ;
struct aspeed_adc_data {TYPE_1__* clk_prescaler; TYPE_1__* clk_scaler; int rst; scalar_t__ base; } ;
struct TYPE_2__ {int clk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct aspeed_adc_data* FUNC_3 (struct iio_dev*) ;
 struct iio_dev* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_4(VAR_2);
 struct aspeed_adc_data *VAR_4 = FUNC_3(VAR_3);

 FUNC_2(VAR_3);
 FUNC_6(VAR_0,
  VAR_4->base + VAR_1);
 FUNC_0(VAR_4->clk_scaler->clk);
 FUNC_5(VAR_4->rst);
 FUNC_1(VAR_4->clk_scaler);
 FUNC_1(VAR_4->clk_prescaler);

 return 0;
}
