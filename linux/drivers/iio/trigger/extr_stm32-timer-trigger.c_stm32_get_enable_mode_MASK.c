
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
 struct stm32_timer_trigger* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2,
     const struct iio_chan_spec *VAR_3)
{
 struct stm32_timer_trigger *VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5;

 FUNC_1(VAR_4->regmap, VAR_0, &VAR_5);
 VAR_5 &= VAR_1;

 return FUNC_2(VAR_5);
}
