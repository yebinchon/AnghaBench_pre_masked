
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct pattern_trig_data {scalar_t__ delta_t; int timer; int led_cdev; TYPE_2__* curr; TYPE_1__* next; int repeat; int is_indefinite; } ;
struct TYPE_4__ {scalar_t__ brightness; scalar_t__ delta_t; } ;
struct TYPE_3__ {scalar_t__ brightness; int delta_t; } ;


 scalar_t__ VAR_0 ;
 struct pattern_trig_data* VAR_1 ;
 struct pattern_trig_data* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct pattern_trig_data*) ;
 int FUNC_5 (struct pattern_trig_data*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_4)
{
 struct pattern_trig_data *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_3);

 for (;;) {
  if (!VAR_5->is_indefinite && !VAR_5->repeat)
   break;

  if (VAR_5->curr->brightness == VAR_5->next->brightness) {

   FUNC_1(VAR_5->led_cdev,
        VAR_5->curr->brightness);
   FUNC_2(&VAR_5->timer,
      VAR_2 + FUNC_3(VAR_5->curr->delta_t));
   if (!VAR_5->next->delta_t) {

    FUNC_5(VAR_5);
   }

   FUNC_5(VAR_5);
  } else {







   if (VAR_5->delta_t > VAR_5->curr->delta_t) {
    FUNC_5(VAR_5);
    continue;
   }

   FUNC_1(VAR_5->led_cdev,
        FUNC_4(VAR_5));
   FUNC_2(&VAR_5->timer,
      VAR_2 + FUNC_3(VAR_0));


   VAR_5->delta_t += VAR_0;
  }

  break;
 }
}
