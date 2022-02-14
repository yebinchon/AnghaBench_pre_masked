
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct gameport {int poll_interval; int poll_timer; scalar_t__ poll_cnt; int (* poll_handler ) (struct gameport*) ;} ;


 struct gameport* FUNC_0 (int ,struct timer_list*,int ) ;
 struct gameport* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct gameport*) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_3)
{
 struct gameport *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);

 VAR_4->poll_handler(VAR_4);
 if (VAR_4->poll_cnt)
  FUNC_1(&VAR_4->poll_timer, VAR_1 + FUNC_2(VAR_4->poll_interval));
}
