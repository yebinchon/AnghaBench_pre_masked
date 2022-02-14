
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp55xx_chip {int engine_idx; } ;
typedef enum lp55xx_engine_index { ____Placeholder_lp55xx_engine_index } lp55xx_engine_index ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lp55xx_chip*,int ,int const,int const) ;
 int FUNC_1 (struct lp55xx_chip*,int ,int const) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct lp55xx_chip *VAR_2)
{
 enum lp55xx_engine_index VAR_3 = VAR_2->engine_idx;
 static const u8 VAR_4[] = {
  [139] = 133,
  [138] = 132,
  [137] = 131,
 };

 static const u8 VAR_5[] = {
  [139] = 136,
  [138] = 135,
  [137] = 134,
 };

 static const u8 VAR_6[] = {
  [139] = 130,
  [138] = 129,
  [137] = 128,
 };

 FUNC_0(VAR_2, VAR_0, VAR_4[VAR_3], VAR_5[VAR_3]);

 FUNC_2();

 FUNC_1(VAR_2, VAR_1, VAR_6[VAR_3]);
}
