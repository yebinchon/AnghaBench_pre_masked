
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp55xx_chip {int engine_idx; } ;
typedef enum lp55xx_engine_index { ____Placeholder_lp55xx_engine_index } lp55xx_engine_index ;





 int VAR_0 ;



 int FUNC_0 () ;
 int FUNC_1 (struct lp55xx_chip*,int ,int const,int ) ;

__attribute__((used)) static void FUNC_2(struct lp55xx_chip *VAR_1)
{
 enum lp55xx_engine_index VAR_2 = VAR_1->engine_idx;
 static const u8 VAR_3[] = {
  [130] = 131,
  [129] = 132,
  [128] = 133,
 };

 FUNC_1(VAR_1, VAR_0, VAR_3[VAR_2], 0);

 FUNC_0();
}
