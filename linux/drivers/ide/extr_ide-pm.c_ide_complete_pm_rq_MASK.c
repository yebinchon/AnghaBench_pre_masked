
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {int dummy; } ;
struct ide_pm_state {scalar_t__ pm_step; } ;
struct TYPE_7__ {TYPE_1__* hwif; int dev_flags; int name; struct request_queue* queue; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_8__ {scalar_t__ type; struct ide_pm_state* special; } ;
struct TYPE_6__ {int * rq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct request*,int ) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (TYPE_2__*,struct request*) ;
 TYPE_3__* FUNC_3 (struct request*) ;
 int FUNC_4 (char*,int ,char*) ;

void FUNC_5(ide_drive_t *VAR_4, struct request *VAR_5)
{
 struct request_queue *VAR_6 = VAR_4->queue;
 struct ide_pm_state *VAR_7 = FUNC_3(VAR_5)->special;

 FUNC_2(VAR_4, VAR_5);
 if (VAR_7->pm_step != VAR_3)
  return;





 if (FUNC_3(VAR_5)->type == VAR_0)
  FUNC_1(VAR_6);
 else
  VAR_4->dev_flags &= ~VAR_2;

 VAR_4->hwif->rq = ((void*)0);

 FUNC_0(VAR_5, VAR_1);
}
