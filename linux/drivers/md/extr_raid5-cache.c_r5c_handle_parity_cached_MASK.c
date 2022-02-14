
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_head {int disks; TYPE_1__* dev; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct stripe_head *VAR_2)
{
 int VAR_3;

 for (VAR_3 = VAR_2->disks; VAR_3--; )
  if (FUNC_1(VAR_0, &VAR_2->dev[VAR_3].flags))
   FUNC_0(VAR_1, &VAR_2->dev[VAR_3].flags);
}
