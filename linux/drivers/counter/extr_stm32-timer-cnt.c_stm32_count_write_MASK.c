
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct stm32_timer_cnt {scalar_t__ ceiling; int regmap; } ;
struct counter_device {struct stm32_timer_cnt* priv; } ;
struct counter_count_write_value {int dummy; } ;
struct counter_count {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*,int ,struct counter_count_write_value*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct counter_device *VAR_3,
        struct counter_count *VAR_4,
        struct counter_count_write_value *VAR_5)
{
 struct stm32_timer_cnt *const VAR_6 = VAR_3->priv;
 u32 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(&VAR_7, VAR_0, VAR_5);
 if (VAR_8)
  return VAR_8;

 if (VAR_7 > VAR_6->ceiling)
  return -VAR_1;

 return FUNC_1(VAR_6->regmap, VAR_2, VAR_7);
}
