
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_timer_cnt {int regmap; } ;
struct counter_device {struct stm32_timer_cnt* priv; } ;
struct counter_count {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct counter_device *VAR_2,
     struct counter_count *VAR_3,
     void *VAR_4, char *VAR_5)
{
 struct stm32_timer_cnt *const VAR_6 = VAR_2->priv;
 u32 VAR_7;

 FUNC_0(VAR_6->regmap, VAR_1, &VAR_7);

 return FUNC_1(VAR_5, VAR_0, "%u\n", VAR_7);
}
