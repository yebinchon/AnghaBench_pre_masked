
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct timer_list {int dummy; } ;
struct mISDNtimer {scalar_t__ id; TYPE_1__* dev; int list; } ;
struct TYPE_2__ {int lock; int wait; int expired; } ;


 struct mISDNtimer* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 struct mISDNtimer* VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct timer_list *VAR_2)
{
 struct mISDNtimer *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);
 u_long VAR_4;

 FUNC_2(&VAR_3->dev->lock, VAR_4);
 if (VAR_3->id >= 0)
  FUNC_1(&VAR_3->list, &VAR_3->dev->expired);
 FUNC_4(&VAR_3->dev->wait);
 FUNC_3(&VAR_3->dev->lock, VAR_4);
}
