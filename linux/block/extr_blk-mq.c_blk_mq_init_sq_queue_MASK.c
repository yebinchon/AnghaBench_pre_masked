
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct blk_mq_tag_set {int nr_hw_queues; int nr_maps; unsigned int queue_depth; unsigned int flags; int numa_node; struct blk_mq_ops const* ops; } ;
struct blk_mq_ops {int dummy; } ;


 struct request_queue* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct request_queue*) ;
 int VAR_0 ;
 int FUNC_2 (struct blk_mq_tag_set*) ;
 int FUNC_3 (struct blk_mq_tag_set*) ;
 struct request_queue* FUNC_4 (struct blk_mq_tag_set*) ;
 int FUNC_5 (struct blk_mq_tag_set*,int ,int) ;

struct request_queue *FUNC_6(struct blk_mq_tag_set *VAR_1,
        const struct blk_mq_ops *VAR_2,
        unsigned int VAR_3,
        unsigned int VAR_4)
{
 struct request_queue *VAR_5;
 int VAR_6;

 FUNC_5(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->ops = VAR_2;
 VAR_1->nr_hw_queues = 1;
 VAR_1->nr_maps = 1;
 VAR_1->queue_depth = VAR_3;
 VAR_1->numa_node = VAR_0;
 VAR_1->flags = VAR_4;

 VAR_6 = FUNC_2(VAR_1);
 if (VAR_6)
  return FUNC_0(VAR_6);

 VAR_5 = FUNC_4(VAR_1);
 if (FUNC_1(VAR_5)) {
  FUNC_3(VAR_1);
  return VAR_5;
 }

 return VAR_5;
}
