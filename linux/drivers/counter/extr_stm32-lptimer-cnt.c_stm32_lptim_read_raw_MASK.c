
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_lptim_cnt {int polarity; int quadrature_mode; int regmap; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct stm32_lptim_cnt* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (struct stm32_lptim_cnt*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_4,
    struct iio_chan_spec const *VAR_5,
    int *VAR_6, int *VAR_7, long VAR_8)
{
 struct stm32_lptim_cnt *VAR_9 = FUNC_0(VAR_4);
 u32 VAR_10;
 int VAR_11;

 switch (VAR_8) {
 case 129:
  VAR_11 = FUNC_1(VAR_9->regmap, VAR_3, &VAR_10);
  if (VAR_11)
   return VAR_11;
  *VAR_6 = VAR_10;
  return VAR_2;

 case 130:
  VAR_11 = FUNC_2(VAR_9);
  if (VAR_11 < 0)
   return VAR_11;
  *VAR_6 = VAR_11;
  return VAR_2;

 case 128:

  *VAR_6 = 1;
  *VAR_7 = 0;
  if (VAR_9->quadrature_mode) {





   if (VAR_9->polarity > 1)
    *VAR_7 = 2;
   else
    *VAR_7 = 1;
  }
  return VAR_1;

 default:
  return -VAR_0;
 }
}
