
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_timer_trigger {int regmap; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct stm32_timer_trigger* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_8,
      struct iio_chan_spec const *VAR_9,
      int *VAR_10, int *VAR_11, long VAR_12)
{
 struct stm32_timer_trigger *VAR_13 = FUNC_0(VAR_8);
 u32 VAR_14;

 switch (VAR_12) {
 case 129:
  FUNC_1(VAR_13->regmap, VAR_3, &VAR_14);
  *VAR_10 = VAR_14;
  return VAR_2;

 case 130:
  FUNC_1(VAR_13->regmap, VAR_4, &VAR_14);
  *VAR_10 = (VAR_14 & VAR_5) ? 1 : 0;
  return VAR_2;

 case 128:
  FUNC_1(VAR_13->regmap, VAR_6, &VAR_14);
  VAR_14 &= VAR_7;

  *VAR_10 = 1;
  *VAR_11 = 0;


  if (VAR_14 == 3)
   *VAR_11 = 2;

  return VAR_1;
 }

 return -VAR_0;
}
