
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct FsmTimer {int arg; int event; TYPE_1__* fi; } ;
struct TYPE_3__ {int (* printdebug ) (TYPE_1__*,char*,long) ;scalar_t__ debug; } ;


 struct FsmTimer* FUNC_0 (int ,struct timer_list*,int ) ;
 struct FsmTimer* VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,char*,long) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct timer_list *VAR_2)
{
 struct FsmTimer *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);




 FUNC_1(VAR_3->fi, VAR_3->event, VAR_3->arg);
}
