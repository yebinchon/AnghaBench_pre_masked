
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_mq_tag_set {int nr_maps; int nr_hw_queues; } ;


 unsigned int FUNC_0 (int ,unsigned int) ;
 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_1(struct blk_mq_tag_set *VAR_1)
{
 if (VAR_1->nr_maps == 1)
  return VAR_0;

 return FUNC_0(VAR_1->nr_hw_queues, VAR_0);
}
