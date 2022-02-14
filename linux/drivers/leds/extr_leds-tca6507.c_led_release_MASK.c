
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tca6507_led {scalar_t__ bank; scalar_t__ blink; struct tca6507_chip* chip; } ;
struct tca6507_chip {struct bank* bank; } ;
struct bank {int level_use; int time_use; } ;



__attribute__((used)) static void FUNC_0(struct tca6507_led *VAR_0)
{

 struct tca6507_chip *VAR_1 = VAR_0->chip;
 if (VAR_0->bank >= 0) {
  struct bank *VAR_2 = VAR_1->bank + VAR_0->bank;
  if (VAR_0->blink)
   VAR_2->time_use--;
  VAR_2->level_use--;
 }
 VAR_0->blink = 0;
 VAR_0->bank = -1;
}
