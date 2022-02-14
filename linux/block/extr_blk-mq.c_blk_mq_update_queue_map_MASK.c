
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blk_mq_tag_set {int nr_maps; int * map; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* map_queues ) (struct blk_mq_tag_set*) ;} ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (struct blk_mq_tag_set*) ;

__attribute__((used)) static int FUNC_5(struct blk_mq_tag_set *VAR_1)
{
 if (VAR_1->ops->map_queues && !FUNC_3()) {
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_1->nr_maps; VAR_2++)
   FUNC_1(&VAR_1->map[VAR_2]);

  return VAR_1->ops->map_queues(VAR_1);
 } else {
  FUNC_0(VAR_1->nr_maps > 1);
  return FUNC_2(&VAR_1->map[VAR_0]);
 }
}
