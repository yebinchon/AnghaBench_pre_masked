
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_timer_trigger {int clk; int regmap; } ;
struct iio_trigger {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned long long,int) ;
 struct stm32_timer_trigger* FUNC_2 (struct iio_trigger*) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (char*,char*,unsigned int) ;
 struct iio_trigger* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_4,
           struct device_attribute *VAR_5, char *VAR_6)
{
 struct iio_trigger *VAR_7 = FUNC_5(VAR_4);
 struct stm32_timer_trigger *VAR_8 = FUNC_2(VAR_7);
 u32 VAR_9, VAR_10, VAR_11;
 unsigned long long VAR_12 = 0;

 FUNC_3(VAR_8->regmap, VAR_1, &VAR_11);
 FUNC_3(VAR_8->regmap, VAR_3, &VAR_9);
 FUNC_3(VAR_8->regmap, VAR_0, &VAR_10);

 if (VAR_11 & VAR_2) {
  VAR_12 = (unsigned long long)FUNC_0(VAR_8->clk);
  FUNC_1(VAR_12, VAR_9 + 1);
  FUNC_1(VAR_12, VAR_10 + 1);
 }

 return FUNC_4(VAR_6, "%d\n", (unsigned int)VAR_12);
}
