
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wait_timer {int f; } ;
struct timer_list {int dummy; } ;


 int FUNC_0 (int ) ;
 struct wait_timer* FUNC_1 (int ,struct timer_list*,struct timer_list*) ;
 struct wait_timer* VAR_0 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_1)
{
 struct wait_timer *VAR_2 = FUNC_1(VAR_2, VAR_1, VAR_1);

 FUNC_0(VAR_2->f);
}
