
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bcom_task {size_t tasknum; struct bcom_task* cookie; int bd; int irq; } ;
struct TYPE_4__ {TYPE_1__* tdt; } ;
struct TYPE_3__ {scalar_t__ stop; scalar_t__ start; } ;


 int FUNC_0 (size_t) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bcom_task*) ;

void
FUNC_4(struct bcom_task *VAR_1)
{

 FUNC_0(VAR_1->tasknum);


 VAR_0->tdt[VAR_1->tasknum].start = 0;
 VAR_0->tdt[VAR_1->tasknum].stop = 0;


 FUNC_2(VAR_1->irq);
 FUNC_1(VAR_1->bd);
 FUNC_3(VAR_1->cookie);
 FUNC_3(VAR_1);
}
