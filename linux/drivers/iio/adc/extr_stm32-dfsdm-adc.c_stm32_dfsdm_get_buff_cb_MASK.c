
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_dfsdm_adc {int (* cb ) (void const*,size_t,void*) ;void* cb_priv; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 struct stm32_dfsdm_adc* FUNC_0 (struct iio_dev*) ;

int FUNC_1(struct iio_dev *VAR_1,
       int (*VAR_2)(const void *VAR_3, size_t VAR_4,
          void *VAR_5),
       void *VAR_6)
{
 struct stm32_dfsdm_adc *VAR_7;

 if (!VAR_1)
  return -VAR_0;
 VAR_7 = FUNC_0(VAR_1);

 VAR_7->cb = VAR_2;
 VAR_7->cb_priv = VAR_6;

 return 0;
}
