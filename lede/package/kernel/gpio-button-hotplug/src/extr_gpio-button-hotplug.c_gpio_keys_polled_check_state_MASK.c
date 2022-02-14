
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_keys_button_data {int last_state; scalar_t__ count; scalar_t__ threshold; TYPE_1__* b; } ;
struct TYPE_2__ {int type; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct gpio_keys_button_data*,unsigned int,int) ;
 int FUNC_1 (struct gpio_keys_button_data*) ;

__attribute__((used)) static void FUNC_2(struct gpio_keys_button_data *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2);

 if (VAR_3 != VAR_2->last_state) {
  unsigned int VAR_4 = VAR_2->b->type ?: VAR_0;

  if (VAR_2->count < VAR_2->threshold) {
   VAR_2->count++;
   return;
  }

  if ((VAR_2->last_state != -1) || (VAR_4 == VAR_1))
   FUNC_0(VAR_2, VAR_4, VAR_3);

  VAR_2->last_state = VAR_3;
 }

 VAR_2->count = 0;
}
