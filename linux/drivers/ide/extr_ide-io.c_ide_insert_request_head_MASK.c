
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct request {int queuelist; } ;
struct TYPE_3__ {int sense_rq_active; int rq_work; int rq_list; } ;
typedef TYPE_1__ ide_drive_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(ide_drive_t *VAR_0, struct request *VAR_1)
{
 VAR_0->sense_rq_active = 1;
 FUNC_1(&VAR_1->queuelist, &VAR_0->rq_list);
 FUNC_0(&VAR_0->rq_work);
}
