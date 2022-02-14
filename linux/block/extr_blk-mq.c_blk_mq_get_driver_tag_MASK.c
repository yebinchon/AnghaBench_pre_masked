
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int tag; int rq_flags; int internal_tag; int cmd_flags; TYPE_2__* mq_hctx; int q; } ;
struct blk_mq_alloc_data {TYPE_2__* hctx; int flags; int cmd_flags; int q; } ;
struct TYPE_4__ {TYPE_1__* tags; int nr_active; int sched_tags; } ;
struct TYPE_3__ {struct request** rqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct blk_mq_alloc_data*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

bool FUNC_4(struct request *VAR_3)
{
 struct blk_mq_alloc_data VAR_4 = {
  .q = VAR_3->q,
  .hctx = VAR_3->mq_hctx,
  .flags = VAR_0,
  .cmd_flags = VAR_3->cmd_flags,
 };
 bool VAR_5;

 if (VAR_3->tag != -1)
  goto done;

 if (FUNC_3(VAR_4.hctx->sched_tags, VAR_3->internal_tag))
  VAR_4.flags |= VAR_1;

 VAR_5 = FUNC_2(VAR_4.hctx);
 VAR_3->tag = FUNC_1(&VAR_4);
 if (VAR_3->tag >= 0) {
  if (VAR_5) {
   VAR_3->rq_flags |= VAR_2;
   FUNC_0(&VAR_4.hctx->nr_active);
  }
  VAR_4.hctx->tags->rqs[VAR_3->tag] = VAR_3;
 }

done:
 return VAR_3->tag != -1;
}
