
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp55xx_led {scalar_t__ chan_nr; int chip; int led_current; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct lp55xx_led *VAR_1, u8 VAR_2)
{
 VAR_1->led_current = VAR_2;
 FUNC_0(VAR_1->chip, VAR_0 + VAR_1->chan_nr,
  VAR_2);
}
