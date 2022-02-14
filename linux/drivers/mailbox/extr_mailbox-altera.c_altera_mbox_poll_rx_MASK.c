
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct altera_mbox {int rxpoll_timer; int chan; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct altera_mbox* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 struct altera_mbox* VAR_2 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_4)
{
 struct altera_mbox *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_3);

 FUNC_0(VAR_5->chan);

 FUNC_2(&VAR_5->rxpoll_timer,
    VAR_1 + FUNC_3(VAR_0));
}
