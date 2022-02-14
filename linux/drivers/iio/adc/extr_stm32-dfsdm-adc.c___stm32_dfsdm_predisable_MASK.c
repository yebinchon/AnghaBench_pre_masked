
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_dfsdm_adc {scalar_t__ hwc; int dfsdm; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 struct stm32_dfsdm_adc* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct stm32_dfsdm_adc*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct iio_dev *VAR_0)
{
 struct stm32_dfsdm_adc *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(VAR_1);

 FUNC_2(VAR_0);

 FUNC_4(VAR_1->dfsdm);

 if (VAR_1->hwc)
  FUNC_0(VAR_1->hwc);
}
