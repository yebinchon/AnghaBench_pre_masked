
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct blk_mq_tag_set {int numa_node; int flags; int cmd_size; } ;
struct TYPE_2__ {int entry; } ;
struct blk_mq_hw_ctx {int numa_node; int flags; int cpumask; struct blk_mq_hw_ctx* ctxs; int ctx_map; int srcu; int fq; TYPE_1__ dispatch_wait; int dispatch_wait_lock; scalar_t__ nr_ctx; int hctx_list; struct request_queue* queue; int dispatch; int lock; int run_work; int nr_active; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct request_queue*,int,int ,int) ;
 int VAR_6 ;
 int FUNC_4 (struct blk_mq_hw_ctx*) ;
 int FUNC_5 (struct blk_mq_tag_set*) ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (struct blk_mq_hw_ctx*) ;
 struct blk_mq_hw_ctx* FUNC_11 (int ,int,int,int) ;
 struct blk_mq_hw_ctx* FUNC_12 (int ,int,int) ;
 int VAR_8 ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *,int ,int ,int,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int,int) ;

__attribute__((used)) static struct blk_mq_hw_ctx *
FUNC_17(struct request_queue *VAR_9, struct blk_mq_tag_set *VAR_10,
  int VAR_11)
{
 struct blk_mq_hw_ctx *VAR_12;
 gfp_t VAR_13 = VAR_2 | VAR_5 | VAR_4;

 VAR_12 = FUNC_12(FUNC_5(VAR_10), VAR_13, VAR_11);
 if (!VAR_12)
  goto fail_alloc_hctx;

 if (!FUNC_16(&VAR_12->cpumask, VAR_13, VAR_11))
  goto free_hctx;

 FUNC_2(&VAR_12->nr_active, 0);
 if (VAR_11 == VAR_3)
  VAR_11 = VAR_10->numa_node;
 VAR_12->numa_node = VAR_11;

 FUNC_0(&VAR_12->run_work, VAR_7);
 FUNC_15(&VAR_12->lock);
 FUNC_1(&VAR_12->dispatch);
 VAR_12->queue = VAR_9;
 VAR_12->flags = VAR_10->flags & ~VAR_1;

 FUNC_1(&VAR_12->hctx_list);





 VAR_12->ctxs = FUNC_11(VAR_8, sizeof(void *),
   VAR_13, VAR_11);
 if (!VAR_12->ctxs)
  goto free_cpumask;

 if (FUNC_14(&VAR_12->ctx_map, VAR_8, FUNC_7(8),
    VAR_13, VAR_11))
  goto free_ctxs;
 VAR_12->nr_ctx = 0;

 FUNC_15(&VAR_12->dispatch_wait_lock);
 FUNC_9(&VAR_12->dispatch_wait, VAR_6);
 FUNC_1(&VAR_12->dispatch_wait.entry);

 VAR_12->fq = FUNC_3(VAR_9, VAR_12->numa_node, VAR_10->cmd_size,
   VAR_13);
 if (!VAR_12->fq)
  goto free_bitmap;

 if (VAR_12->flags & VAR_0)
  FUNC_8(VAR_12->srcu);
 FUNC_4(VAR_12);

 return VAR_12;

 free_bitmap:
 FUNC_13(&VAR_12->ctx_map);
 free_ctxs:
 FUNC_10(VAR_12->ctxs);
 free_cpumask:
 FUNC_6(VAR_12->cpumask);
 free_hctx:
 FUNC_10(VAR_12);
 fail_alloc_hctx:
 return ((void*)0);
}
