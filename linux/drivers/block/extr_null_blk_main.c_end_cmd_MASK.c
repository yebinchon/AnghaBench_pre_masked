
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nullb_cmd {TYPE_3__* bio; int error; int rq; TYPE_2__* nq; } ;
struct TYPE_6__ {int bi_status; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {int queue_mode; } ;




 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct nullb_cmd*) ;

__attribute__((used)) static void FUNC_3(struct nullb_cmd *VAR_0)
{
 int VAR_1 = VAR_0->nq->dev->queue_mode;

 switch (VAR_1) {
 case 128:
  FUNC_1(VAR_0->rq, VAR_0->error);
  return;
 case 129:
  VAR_0->bio->bi_status = VAR_0->error;
  FUNC_0(VAR_0->bio);
  break;
 }

 FUNC_2(VAR_0);
}
