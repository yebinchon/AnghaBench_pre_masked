
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_timer_trigger {int regmap; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct stm32_timer_trigger* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (char const*,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_4(struct iio_dev *VAR_3,
          uintptr_t VAR_4,
          const struct iio_chan_spec *VAR_5,
          const char *VAR_6, size_t VAR_7)
{
 struct stm32_timer_trigger *VAR_8 = FUNC_0(VAR_3);
 unsigned int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_6, 0, &VAR_9);
 if (VAR_10)
  return VAR_10;


 FUNC_2(VAR_8->regmap, VAR_1, VAR_2, 0);
 FUNC_3(VAR_8->regmap, VAR_0, VAR_9);

 return VAR_7;
}
