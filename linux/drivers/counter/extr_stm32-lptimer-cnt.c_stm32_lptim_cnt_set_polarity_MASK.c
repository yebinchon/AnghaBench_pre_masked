
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_lptim_cnt {unsigned int polarity; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;
 struct stm32_lptim_cnt* FUNC_0 (struct iio_dev*) ;
 scalar_t__ FUNC_1 (struct stm32_lptim_cnt*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1,
     const struct iio_chan_spec *VAR_2,
     unsigned int VAR_3)
{
 struct stm32_lptim_cnt *VAR_4 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_4))
  return -VAR_0;

 VAR_4->polarity = VAR_3;

 return 0;
}
