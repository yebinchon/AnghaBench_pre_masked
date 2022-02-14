
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_head {int disks; TYPE_1__* dev; int log_start; scalar_t__ state; } ;
struct TYPE_2__ {scalar_t__ flags; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct stripe_head *VAR_1)
{
 int VAR_2;

 VAR_1->state = 0;
 VAR_1->log_start = VAR_0;
 for (VAR_2 = VAR_1->disks; VAR_2--; )
  VAR_1->dev[VAR_2].flags = 0;
}
