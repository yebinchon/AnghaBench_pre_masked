
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct request {int tag; unsigned int internal_tag; unsigned int cmd_flags; int ref; int * end_io_data; int * end_io; scalar_t__ timeout; int deadline; scalar_t__ extra_len; scalar_t__ nr_integrity_segments; scalar_t__ nr_phys_segments; scalar_t__ stats_sectors; scalar_t__ io_start_time_ns; scalar_t__ start_time_ns; int alloc_time_ns; int * part; int * rq_disk; int rb_node; int hash; int queuelist; int rq_flags; TYPE_2__* mq_hctx; TYPE_3__* mq_ctx; int q; } ;
struct blk_mq_tags {struct request** static_rqs; } ;
struct blk_mq_alloc_data {int flags; TYPE_3__* ctx; int q; TYPE_2__* hctx; } ;
typedef int req_flags_t ;
struct TYPE_6__ {int * rq_dispatched; } ;
struct TYPE_5__ {int flags; TYPE_1__* tags; int nr_active; } ;
struct TYPE_4__ {struct request** rqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct request*) ;
 struct blk_mq_tags* FUNC_6 (struct blk_mq_alloc_data*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 () ;
 size_t FUNC_9 (unsigned int) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static struct request *FUNC_11(struct blk_mq_alloc_data *VAR_6,
  unsigned int VAR_7, unsigned int VAR_8, u64 VAR_9)
{
 struct blk_mq_tags *VAR_10 = FUNC_6(VAR_6);
 struct request *VAR_11 = VAR_10->static_rqs[VAR_7];
 req_flags_t VAR_12 = 0;

 if (VAR_6->flags & VAR_1) {
  VAR_11->tag = -1;
  VAR_11->internal_tag = VAR_7;
 } else {
  if (VAR_6->hctx->flags & VAR_0) {
   VAR_12 = VAR_4;
   FUNC_4(&VAR_6->hctx->nr_active);
  }
  VAR_11->tag = VAR_7;
  VAR_11->internal_tag = -1;
  VAR_6->hctx->tags->rqs[VAR_11->tag] = VAR_11;
 }


 VAR_11->q = VAR_6->q;
 VAR_11->mq_ctx = VAR_6->ctx;
 VAR_11->mq_hctx = VAR_6->hctx;
 VAR_11->rq_flags = VAR_12;
 VAR_11->cmd_flags = VAR_8;
 if (VAR_6->flags & VAR_2)
  VAR_11->rq_flags |= VAR_5;
 if (FUNC_7(VAR_6->q))
  VAR_11->rq_flags |= VAR_3;
 FUNC_1(&VAR_11->queuelist);
 FUNC_0(&VAR_11->hash);
 FUNC_2(&VAR_11->rb_node);
 VAR_11->rq_disk = ((void*)0);
 VAR_11->part = ((void*)0);



 if (FUNC_5(VAR_11))
  VAR_11->start_time_ns = FUNC_8();
 else
  VAR_11->start_time_ns = 0;
 VAR_11->io_start_time_ns = 0;
 VAR_11->stats_sectors = 0;
 VAR_11->nr_phys_segments = 0;




 VAR_11->extra_len = 0;
 FUNC_3(VAR_11->deadline, 0);

 VAR_11->timeout = 0;

 VAR_11->end_io = ((void*)0);
 VAR_11->end_io_data = ((void*)0);

 VAR_6->ctx->rq_dispatched[FUNC_9(VAR_8)]++;
 FUNC_10(&VAR_11->ref, 1);
 return VAR_11;
}
