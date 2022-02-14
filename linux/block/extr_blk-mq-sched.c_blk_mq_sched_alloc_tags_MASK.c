
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int nr_requests; struct blk_mq_tag_set* tag_set; } ;
struct blk_mq_tag_set {int reserved_tags; } ;
struct blk_mq_hw_ctx {int sched_tags; } ;


 int VAR_0 ;
 int FUNC_0 (struct blk_mq_tag_set*,unsigned int,int ,int ) ;
 int FUNC_1 (struct blk_mq_tag_set*,int ,unsigned int,int ) ;
 int FUNC_2 (struct blk_mq_tag_set*,struct blk_mq_hw_ctx*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct request_queue *VAR_1,
       struct blk_mq_hw_ctx *VAR_2,
       unsigned int VAR_3)
{
 struct blk_mq_tag_set *VAR_4 = VAR_1->tag_set;
 int VAR_5;

 VAR_2->sched_tags = FUNC_0(VAR_4, VAR_3, VAR_1->nr_requests,
            VAR_4->reserved_tags);
 if (!VAR_2->sched_tags)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_4, VAR_2->sched_tags, VAR_3, VAR_1->nr_requests);
 if (VAR_5)
  FUNC_2(VAR_4, VAR_2, VAR_3);

 return VAR_5;
}
