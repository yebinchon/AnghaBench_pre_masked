
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_timer_cnt {int regmap; } ;
struct counter_device {struct stm32_timer_cnt* priv; } ;
struct counter_count {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct counter_device *VAR_6,
        struct counter_count *VAR_7,
        size_t *VAR_8)
{
 struct stm32_timer_cnt *const VAR_9 = VAR_6->priv;
 u32 VAR_10;

 FUNC_0(VAR_9->regmap, VAR_4, &VAR_10);

 switch (VAR_10 & VAR_5) {
 case 1:
  *VAR_8 = VAR_1;
  return 0;
 case 2:
  *VAR_8 = VAR_2;
  return 0;
 case 3:
  *VAR_8 = VAR_3;
  return 0;
 }

 return -VAR_0;
}
