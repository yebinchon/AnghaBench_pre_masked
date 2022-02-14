
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_lptim_cnt {int dummy; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef int ssize_t ;


 struct stm32_lptim_cnt* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct stm32_lptim_cnt*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct iio_dev *VAR_0,
           uintptr_t VAR_1,
           const struct iio_chan_spec *VAR_2,
           char *VAR_3)
{
 struct stm32_lptim_cnt *VAR_4 = FUNC_0(VAR_0);

 return FUNC_1(VAR_4, VAR_3);
}
