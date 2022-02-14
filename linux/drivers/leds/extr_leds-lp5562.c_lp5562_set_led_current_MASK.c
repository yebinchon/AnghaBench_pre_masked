
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp55xx_led {size_t chan_nr; int chip; int led_current; } ;






 int FUNC_0 (int ,int const,int ) ;

__attribute__((used)) static void FUNC_1(struct lp55xx_led *VAR_0, u8 VAR_1)
{
 static const u8 VAR_2[] = {
  129,
  130,
  131,
  128,
 };

 VAR_0->led_current = VAR_1;
 FUNC_0(VAR_0->chip, VAR_2[VAR_0->chan_nr], VAR_1);
}
