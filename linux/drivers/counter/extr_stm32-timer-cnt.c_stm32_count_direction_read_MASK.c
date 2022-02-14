
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
 int VAR_2 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (char*,int ,char*,char const*) ;

__attribute__((used)) static ssize_t FUNC_2(struct counter_device *VAR_3,
          struct counter_count *VAR_4,
          void *VAR_5, char *VAR_6)
{
 struct stm32_timer_cnt *const VAR_7 = VAR_3->priv;
 const char *VAR_8;
 u32 VAR_9;

 FUNC_0(VAR_7->regmap, VAR_1, &VAR_9);
 VAR_8 = (VAR_9 & VAR_2) ? "backward" : "forward";

 return FUNC_1(VAR_6, VAR_0, "%s\n", VAR_8);
}
