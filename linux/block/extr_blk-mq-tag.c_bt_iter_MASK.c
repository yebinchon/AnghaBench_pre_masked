
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbitmap {int dummy; } ;
struct request {scalar_t__ q; } ;
struct bt_iter_data {int reserved; int (* fn ) (struct blk_mq_hw_ctx*,struct request*,int ,int) ;int data; struct blk_mq_hw_ctx* hctx; } ;
struct blk_mq_tags {struct request** rqs; scalar_t__ nr_reserved_tags; } ;
struct blk_mq_hw_ctx {scalar_t__ queue; struct blk_mq_tags* tags; } ;


 int FUNC_0 (struct blk_mq_hw_ctx*,struct request*,int ,int) ;

__attribute__((used)) static bool FUNC_1(struct sbitmap *VAR_0, unsigned int VAR_1, void *VAR_2)
{
 struct bt_iter_data *VAR_3 = VAR_2;
 struct blk_mq_hw_ctx *VAR_4 = VAR_3->hctx;
 struct blk_mq_tags *VAR_5 = VAR_4->tags;
 bool VAR_6 = VAR_3->reserved;
 struct request *VAR_7;

 if (!VAR_6)
  VAR_1 += VAR_5->nr_reserved_tags;
 VAR_7 = VAR_5->rqs[VAR_1];





 if (VAR_7 && VAR_7->q == VAR_4->queue)
  return VAR_3->fn(VAR_4, VAR_7, VAR_3->data, VAR_6);
 return 1;
}
