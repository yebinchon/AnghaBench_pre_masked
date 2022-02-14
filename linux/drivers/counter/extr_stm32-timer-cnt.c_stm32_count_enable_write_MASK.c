
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_timer_cnt {int clk; int regmap; } ;
struct counter_device {struct stm32_timer_cnt* priv; } ;
struct counter_count {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,int*) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct counter_device *VAR_2,
     struct counter_count *VAR_3,
     void *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 struct stm32_timer_cnt *const VAR_7 = VAR_2->priv;
 int VAR_8;
 u32 VAR_9;
 bool VAR_10;

 VAR_8 = FUNC_2(VAR_5, &VAR_10);
 if (VAR_8)
  return VAR_8;

 if (VAR_10) {
  FUNC_3(VAR_7->regmap, VAR_0, &VAR_9);
   if (!(VAR_9 & VAR_1))
    FUNC_1(VAR_7->clk);

  FUNC_4(VAR_7->regmap, VAR_0, VAR_1,
       VAR_1);
 } else {
  FUNC_3(VAR_7->regmap, VAR_0, &VAR_9);
  FUNC_4(VAR_7->regmap, VAR_0, VAR_1, 0);
  if (VAR_9 & VAR_1)
   FUNC_0(VAR_7->clk);
 }

 return VAR_6;
}
