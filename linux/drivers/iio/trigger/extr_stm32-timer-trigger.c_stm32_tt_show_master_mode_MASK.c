
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct stm32_timer_trigger {int regmap; } ;
struct iio_trigger {int name; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 struct stm32_timer_trigger* FUNC_0 (struct device*) ;
 char** VAR_6 ;
 int FUNC_1 (int ,int ,size_t*) ;
 int FUNC_2 (char*,int ,char*,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct iio_trigger* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_7,
      struct device_attribute *VAR_8,
      char *VAR_9)
{
 struct stm32_timer_trigger *VAR_10 = FUNC_0(VAR_7);
 struct iio_trigger *VAR_11 = FUNC_4(VAR_7);
 u32 VAR_12;

 FUNC_1(VAR_10->regmap, VAR_1, &VAR_12);

 if (FUNC_3(VAR_11->name))
  VAR_12 = (VAR_12 & VAR_3) >> VAR_4;
 else
  VAR_12 = (VAR_12 & VAR_2) >> VAR_5;

 return FUNC_2(VAR_9, VAR_0, "%s\n", VAR_6[VAR_12]);
}
