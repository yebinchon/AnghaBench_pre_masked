
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct blk_mq_tag_set* tag_set; } ;
struct blk_mq_tag_set {int nr_hw_queues; } ;


 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct request_queue*,struct blk_mq_tag_set*,int ) ;

void FUNC_2(struct request_queue *VAR_0)
{
 struct blk_mq_tag_set *VAR_1 = VAR_0->tag_set;

 FUNC_0(VAR_0);
 FUNC_1(VAR_0, VAR_1, VAR_1->nr_hw_queues);
}
