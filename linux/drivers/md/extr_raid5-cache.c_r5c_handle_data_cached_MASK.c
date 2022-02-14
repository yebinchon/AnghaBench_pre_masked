
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_head {int disks; int state; TYPE_1__* dev; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct stripe_head *VAR_4)
{
 int VAR_5;

 for (VAR_5 = VAR_4->disks; VAR_5--; )
  if (FUNC_2(VAR_2, &VAR_4->dev[VAR_5].flags)) {
   FUNC_1(VAR_0, &VAR_4->dev[VAR_5].flags);
   FUNC_0(VAR_1, &VAR_4->dev[VAR_5].flags);
  }
 FUNC_0(VAR_3, &VAR_4->state);
}
