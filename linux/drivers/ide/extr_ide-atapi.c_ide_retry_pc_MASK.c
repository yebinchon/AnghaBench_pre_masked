
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct request {int dummy; } ;
struct ide_atapi_pc {int c; } ;
struct TYPE_10__ {scalar_t__ media; TYPE_1__* hwif; int atapi_flags; struct ide_atapi_pc request_sense_pc; struct request* sense_rq; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_11__ {int cmd; } ;
struct TYPE_9__ {struct request* rq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct request*) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (struct ide_atapi_pc*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,struct ide_atapi_pc*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,struct request*) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int ,int ,int) ;
 TYPE_3__* FUNC_7 (struct request*) ;

void FUNC_8(ide_drive_t *VAR_3)
{
 struct request *VAR_4 = VAR_3->hwif->rq;
 struct request *VAR_5 = VAR_3->sense_rq;
 struct ide_atapi_pc *VAR_6 = &VAR_3->request_sense_pc;

 (void)FUNC_4(VAR_3);


 FUNC_2(VAR_6);
 FUNC_6(VAR_6->c, FUNC_7(VAR_5)->cmd, 12);

 if (VAR_3->media == VAR_2)
  VAR_3->atapi_flags |= VAR_1;






 VAR_3->hwif->rq = ((void*)0);
 FUNC_5(VAR_3, VAR_4);
 if (FUNC_3(VAR_3, VAR_6))
  FUNC_1(VAR_3, VAR_0, FUNC_0(VAR_4));
}
