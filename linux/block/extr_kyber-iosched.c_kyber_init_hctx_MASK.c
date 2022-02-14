
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct kyber_queue_data {int async_depth; } ;
struct kyber_hctx_data {struct kyber_hctx_data* kcqs; scalar_t__ batching; scalar_t__ cur_domain; int * wait_index; TYPE_3__* domain_wait; int * rqs; int lock; int * kcq_map; } ;
struct kyber_ctx_queue {int dummy; } ;
struct blk_mq_hw_ctx {int nr_ctx; TYPE_4__* sched_tags; struct kyber_hctx_data* sched_data; int numa_node; TYPE_2__* queue; } ;
struct TYPE_10__ {int entry; struct blk_mq_hw_ctx* private; } ;
struct TYPE_9__ {int bitmap_tags; } ;
struct TYPE_8__ {TYPE_5__ wait; int * sbq; } ;
struct TYPE_7__ {TYPE_1__* elevator; } ;
struct TYPE_6__ {struct kyber_queue_data* elevator_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (struct kyber_hctx_data*) ;
 struct kyber_hctx_data* FUNC_5 (int,int,int ,int ) ;
 struct kyber_hctx_data* FUNC_6 (int,int ,int ) ;
 int FUNC_7 (struct kyber_hctx_data*) ;
 int VAR_3 ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int,int ,int ,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct blk_mq_hw_ctx *VAR_4, unsigned int VAR_5)
{
 struct kyber_queue_data *VAR_6 = VAR_4->queue->elevator->elevator_data;
 struct kyber_hctx_data *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_1, VAR_4->numa_node);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->kcqs = FUNC_5(VAR_4->nr_ctx,
           sizeof(struct kyber_ctx_queue),
           VAR_1, VAR_4->numa_node);
 if (!VAR_7->kcqs)
  goto err_khd;

 for (VAR_8 = 0; VAR_8 < VAR_4->nr_ctx; VAR_8++)
  FUNC_7(&VAR_7->kcqs[VAR_8]);

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  if (FUNC_9(&VAR_7->kcq_map[VAR_8], VAR_4->nr_ctx,
          FUNC_2(8), VAR_1, VAR_4->numa_node)) {
   while (--VAR_8 >= 0)
    FUNC_8(&VAR_7->kcq_map[VAR_8]);
   goto err_kcqs;
  }
 }

 FUNC_11(&VAR_7->lock);

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  FUNC_0(&VAR_7->rqs[VAR_8]);
  VAR_7->domain_wait[VAR_8].sbq = ((void*)0);
  FUNC_3(&VAR_7->domain_wait[VAR_8].wait,
       VAR_3);
  VAR_7->domain_wait[VAR_8].wait.private = VAR_4;
  FUNC_0(&VAR_7->domain_wait[VAR_8].wait.entry);
  FUNC_1(&VAR_7->wait_index[VAR_8], 0);
 }

 VAR_7->cur_domain = 0;
 VAR_7->batching = 0;

 VAR_4->sched_data = VAR_7;
 FUNC_10(&VAR_4->sched_tags->bitmap_tags,
     VAR_6->async_depth);

 return 0;

err_kcqs:
 FUNC_4(VAR_7->kcqs);
err_khd:
 FUNC_4(VAR_7);
 return -VAR_0;
}
