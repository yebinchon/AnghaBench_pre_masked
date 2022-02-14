
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct aspeed_adc_data {scalar_t__ base; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct aspeed_adc_data* FUNC_0 (struct iio_dev*) ;
 unsigned int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_2,
     unsigned int VAR_3, unsigned int VAR_4,
     unsigned int *VAR_5)
{
 struct aspeed_adc_data *VAR_6 = FUNC_0(VAR_2);

 if (!VAR_5 || VAR_3 % 4 || VAR_3 > VAR_0)
  return -VAR_1;

 *VAR_5 = FUNC_1(VAR_6->base + VAR_3);

 return 0;
}
