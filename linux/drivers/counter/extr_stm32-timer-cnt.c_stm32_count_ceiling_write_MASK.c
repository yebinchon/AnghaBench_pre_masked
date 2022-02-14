
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_timer_cnt {unsigned int ceiling; int regmap; } ;
struct counter_device {struct stm32_timer_cnt* priv; } ;
struct counter_count {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_3(struct counter_device *VAR_3,
      struct counter_count *VAR_4,
      void *VAR_5,
      const char *VAR_6, size_t VAR_7)
{
 struct stm32_timer_cnt *const VAR_8 = VAR_3->priv;
 unsigned int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_6, 0, &VAR_9);
 if (VAR_10)
  return VAR_10;


 FUNC_1(VAR_8->regmap, VAR_1, VAR_2, 0);
 FUNC_2(VAR_8->regmap, VAR_0, VAR_9);

 VAR_8->ceiling = VAR_9;
 return VAR_7;
}
