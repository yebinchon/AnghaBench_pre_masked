
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tlc591xx_priv {TYPE_1__* leds; } ;
struct TYPE_2__ {int ldev; scalar_t__ active; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct tlc591xx_priv *VAR_0, unsigned int VAR_1)
{
 int VAR_2 = VAR_1;

 while (--VAR_2 >= 0) {
  if (VAR_0->leds[VAR_2].active)
   FUNC_0(&VAR_0->leds[VAR_2].ldev);
 }
}
