
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
typedef int u16 ;
struct lp55xx_engine {int led_mux; } ;
struct lp55xx_chip {struct lp55xx_engine* engines; } ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



 int FUNC_0 (struct lp55xx_chip*) ;
 int FUNC_1 (struct lp55xx_chip*,scalar_t__,int const) ;

__attribute__((used)) static int FUNC_2(struct lp55xx_chip *VAR_2, u16 VAR_3, int VAR_4)
{
 struct lp55xx_engine *VAR_5 = &VAR_2->engines[VAR_4 - 1];
 int VAR_6;
 static const u8 VAR_7[] = {
  [130] = 133,
  [129] = 132,
  [128] = 131,
 };

 FUNC_0(VAR_2);

 VAR_6 = FUNC_1(VAR_2, VAR_1, VAR_7[VAR_4]);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_0 , (u8)(VAR_3 >> 8));
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_0 + 1, (u8)(VAR_3));
 if (VAR_6)
  return VAR_6;

 VAR_5->led_mux = VAR_3;
 return 0;
}
