
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_timer_trigger {int regmap; int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct stm32_timer_trigger *VAR_9)
{
 u32 VAR_10, VAR_11;

 FUNC_1(VAR_9->regmap, VAR_1, &VAR_10);
 if (VAR_10 & VAR_2)
  return;

 FUNC_1(VAR_9->regmap, VAR_3, &VAR_11);
 if (VAR_11 & VAR_5)
  FUNC_0(VAR_9->clk);


 FUNC_2(VAR_9->regmap, VAR_3, VAR_4, 0);
 FUNC_2(VAR_9->regmap, VAR_3, VAR_5, 0);
 FUNC_3(VAR_9->regmap, VAR_8, 0);
 FUNC_3(VAR_9->regmap, VAR_0, 0);


 FUNC_2(VAR_9->regmap, VAR_6, VAR_7, VAR_7);
}
