
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct iss_net_private {int lock; scalar_t__ timer_val; int timer; } ;


 struct iss_net_private* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 struct iss_net_private* VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_3)
{
 struct iss_net_private *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);

 FUNC_1();
 FUNC_3(&VAR_4->lock);
 FUNC_2(&VAR_4->timer, VAR_0 + VAR_4->timer_val);
 FUNC_4(&VAR_4->lock);
}
