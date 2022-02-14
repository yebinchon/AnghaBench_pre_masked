
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_timer_trigger {int has_trgo2; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct stm32_timer_trigger *VAR_2)
{
 u32 VAR_3;





 FUNC_1(VAR_2->regmap, VAR_0, VAR_1, VAR_1);
 FUNC_0(VAR_2->regmap, VAR_0, &VAR_3);
 FUNC_1(VAR_2->regmap, VAR_0, VAR_1, 0);
 VAR_2->has_trgo2 = !!VAR_3;
}
