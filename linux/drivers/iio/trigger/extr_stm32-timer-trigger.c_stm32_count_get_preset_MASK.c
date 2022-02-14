
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_timer_trigger {int regmap; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct stm32_timer_trigger* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct iio_dev *VAR_2,
          uintptr_t VAR_3,
          const struct iio_chan_spec *VAR_4,
          char *VAR_5)
{
 struct stm32_timer_trigger *VAR_6 = FUNC_0(VAR_2);
 u32 VAR_7;

 FUNC_1(VAR_6->regmap, VAR_1, &VAR_7);

 return FUNC_2(VAR_5, VAR_0, "%u\n", VAR_7);
}
