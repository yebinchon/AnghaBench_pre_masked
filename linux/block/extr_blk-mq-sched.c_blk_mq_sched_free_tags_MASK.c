
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_mq_tag_set {int dummy; } ;
struct blk_mq_hw_ctx {int * sched_tags; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct blk_mq_tag_set*,int *,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct blk_mq_tag_set *VAR_0,
       struct blk_mq_hw_ctx *VAR_1,
       unsigned int VAR_2)
{
 if (VAR_1->sched_tags) {
  FUNC_1(VAR_0, VAR_1->sched_tags, VAR_2);
  FUNC_0(VAR_1->sched_tags);
  VAR_1->sched_tags = ((void*)0);
 }
}
