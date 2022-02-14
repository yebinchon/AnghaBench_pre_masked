
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct kyber_hctx_data {struct kyber_ctx_queue* kcqs; } ;
struct kyber_ctx_queue {int lock; struct list_head* rq_list; } ;
struct blk_mq_hw_ctx {size_t type; int queue; struct kyber_hctx_data* sched_data; } ;
struct blk_mq_ctx {size_t* index_hw; } ;
struct bio {int bi_opf; } ;


 int FUNC_0 (int ,struct list_head*,struct bio*,unsigned int) ;
 struct blk_mq_ctx* FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool FUNC_5(struct blk_mq_hw_ctx *VAR_0, struct bio *VAR_1,
  unsigned int VAR_2)
{
 struct kyber_hctx_data *VAR_3 = VAR_0->sched_data;
 struct blk_mq_ctx *VAR_4 = FUNC_1(VAR_0->queue);
 struct kyber_ctx_queue *VAR_5 = &VAR_3->kcqs[VAR_4->index_hw[VAR_0->type]];
 unsigned int VAR_6 = FUNC_2(VAR_1->bi_opf);
 struct list_head *VAR_7 = &VAR_5->rq_list[VAR_6];
 bool VAR_8;

 FUNC_3(&VAR_5->lock);
 VAR_8 = FUNC_0(VAR_0->queue, VAR_7, VAR_1, VAR_2);
 FUNC_4(&VAR_5->lock);

 return VAR_8;
}
