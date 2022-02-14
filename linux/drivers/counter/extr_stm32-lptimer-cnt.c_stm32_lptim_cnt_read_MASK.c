
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_lptim_cnt {int regmap; } ;
struct counter_device {struct stm32_lptim_cnt* priv; } ;
struct counter_count_read_value {int dummy; } ;
struct counter_count {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct counter_count_read_value*,int ,int *) ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct counter_device *VAR_2,
    struct counter_count *VAR_3,
    struct counter_count_read_value *VAR_4)
{
 struct stm32_lptim_cnt *const VAR_5 = VAR_2->priv;
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5->regmap, VAR_1, &VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_0(VAR_4, VAR_0, &VAR_6);

 return 0;
}
