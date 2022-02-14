
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
 struct stm32_timer_trigger* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_3,
      const struct iio_chan_spec *VAR_4)
{
 struct stm32_timer_trigger *VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6;

 FUNC_1(VAR_5->regmap, VAR_1, &VAR_6);

 return (VAR_6 & VAR_2) == VAR_2 ? 0 : -VAR_0;
}
