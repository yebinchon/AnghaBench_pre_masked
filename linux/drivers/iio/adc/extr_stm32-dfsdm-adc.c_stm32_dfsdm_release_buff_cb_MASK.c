
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_dfsdm_adc {int * cb_priv; int * cb; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 struct stm32_dfsdm_adc* FUNC_0 (struct iio_dev*) ;

int FUNC_1(struct iio_dev *VAR_1)
{
 struct stm32_dfsdm_adc *VAR_2;

 if (!VAR_1)
  return -VAR_0;
 VAR_2 = FUNC_0(VAR_1);

 VAR_2->cb = ((void*)0);
 VAR_2->cb_priv = ((void*)0);

 return 0;
}
