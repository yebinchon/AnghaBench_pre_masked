
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_timer_trigger {int regmap; int clk; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct stm32_timer_trigger* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_4,
     const struct iio_chan_spec *VAR_5,
     unsigned int VAR_6)
{
 struct stm32_timer_trigger *VAR_7 = FUNC_1(VAR_4);
 int VAR_8 = FUNC_4(VAR_6);
 u32 VAR_9;

 if (VAR_8 < 0)
  return VAR_8;




 if (VAR_8 == 6) {
  FUNC_2(VAR_7->regmap, VAR_0, &VAR_9);
  if (!(VAR_9 & VAR_1))
   FUNC_0(VAR_7->clk);
 }

 FUNC_3(VAR_7->regmap, VAR_2, VAR_3, VAR_8);

 return 0;
}
