
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {int expires; } ;
struct bt_bmc {TYPE_1__ poll_timer; int queue; } ;


 int FUNC_0 (TYPE_1__*) ;
 struct bt_bmc* VAR_0 ;
 struct bt_bmc* FUNC_1 (int ,struct timer_list*,void (*) (struct timer_list*)) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_1)
{
 struct bt_bmc *VAR_2 = FUNC_1(VAR_2, VAR_1, FUNC_4);

 VAR_2->poll_timer.expires += FUNC_2(500);
 FUNC_3(&VAR_2->queue);
 FUNC_0(&VAR_2->poll_timer);
}
