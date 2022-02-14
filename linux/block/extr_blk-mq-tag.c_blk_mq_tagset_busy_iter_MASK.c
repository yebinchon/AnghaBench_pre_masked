
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_mq_tag_set {int nr_hw_queues; scalar_t__* tags; } ;
typedef int busy_tag_iter_fn ;


 int FUNC_0 (scalar_t__,int *,void*) ;

void FUNC_1(struct blk_mq_tag_set *VAR_0,
  busy_tag_iter_fn *VAR_1, void *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->nr_hw_queues; VAR_3++) {
  if (VAR_0->tags && VAR_0->tags[VAR_3])
   FUNC_0(VAR_0->tags[VAR_3], VAR_1, VAR_2);
 }
}
