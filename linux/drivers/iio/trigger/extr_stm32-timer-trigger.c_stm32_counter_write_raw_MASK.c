
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_timer_trigger {int clk; int regmap; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct stm32_timer_trigger* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_4,
       struct iio_chan_spec const *VAR_5,
       int VAR_6, int VAR_7, long VAR_8)
{
 struct stm32_timer_trigger *VAR_9 = FUNC_2(VAR_4);
 u32 VAR_10;

 switch (VAR_8) {
 case 129:
  return FUNC_5(VAR_9->regmap, VAR_1, VAR_6);

 case 128:

  return -VAR_0;

 case 130:
  if (VAR_6) {
   FUNC_3(VAR_9->regmap, VAR_2, &VAR_10);
   if (!(VAR_10 & VAR_3))
    FUNC_1(VAR_9->clk);
   FUNC_4(VAR_9->regmap, VAR_2, VAR_3,
        VAR_3);
  } else {
   FUNC_3(VAR_9->regmap, VAR_2, &VAR_10);
   FUNC_4(VAR_9->regmap, VAR_2, VAR_3,
        0);
   if (VAR_10 & VAR_3)
    FUNC_0(VAR_9->clk);
  }
  return 0;
 }

 return -VAR_0;
}
