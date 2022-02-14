
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct blk_mq_tags {int dummy; } ;
struct blk_mq_tag_set {int nr_hw_queues; int queue_depth; int reserved_tags; int nr_maps; int * tags; TYPE_2__* map; int tag_list; int tag_list_lock; int numa_node; TYPE_1__* ops; } ;
struct TYPE_4__ {int nr_queues; int * mq_map; } ;
struct TYPE_3__ {int put_budget; int get_budget; int queue_rq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct blk_mq_tag_set*) ;
 int FUNC_3 (struct blk_mq_tag_set*) ;
 scalar_t__ FUNC_4 () ;
 void* FUNC_5 (int,int,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (unsigned int,int) ;
 int FUNC_8 (int *) ;
 int VAR_7 ;
 int FUNC_9 (struct blk_mq_tag_set*) ;
 int FUNC_10 (char*,int) ;

int FUNC_11(struct blk_mq_tag_set *VAR_8)
{
 int VAR_9, VAR_10;

 FUNC_0(VAR_0 > 1 << VAR_2);

 if (!VAR_8->nr_hw_queues)
  return -VAR_3;
 if (!VAR_8->queue_depth)
  return -VAR_3;
 if (VAR_8->queue_depth < VAR_8->reserved_tags + VAR_1)
  return -VAR_3;

 if (!VAR_8->ops->queue_rq)
  return -VAR_3;

 if (!VAR_8->ops->get_budget ^ !VAR_8->ops->put_budget)
  return -VAR_3;

 if (VAR_8->queue_depth > VAR_0) {
  FUNC_10("blk-mq: reduced tag depth to %u\n",
   VAR_0);
  VAR_8->queue_depth = VAR_0;
 }

 if (!VAR_8->nr_maps)
  VAR_8->nr_maps = 1;
 else if (VAR_8->nr_maps > VAR_6)
  return -VAR_3;






 if (FUNC_4()) {
  VAR_8->nr_hw_queues = 1;
  VAR_8->nr_maps = 1;
  VAR_8->queue_depth = FUNC_7(64U, VAR_8->queue_depth);
 }




 if (VAR_8->nr_maps == 1 && VAR_8->nr_hw_queues > VAR_7)
  VAR_8->nr_hw_queues = VAR_7;

 VAR_8->tags = FUNC_5(FUNC_9(VAR_8), sizeof(struct blk_mq_tags *),
     VAR_5, VAR_8->numa_node);
 if (!VAR_8->tags)
  return -VAR_4;

 VAR_10 = -VAR_4;
 for (VAR_9 = 0; VAR_9 < VAR_8->nr_maps; VAR_9++) {
  VAR_8->map[VAR_9].mq_map = FUNC_5(VAR_7,
        sizeof(VAR_8->map[VAR_9].mq_map[0]),
        VAR_5, VAR_8->numa_node);
  if (!VAR_8->map[VAR_9].mq_map)
   goto out_free_mq_map;
  VAR_8->map[VAR_9].nr_queues = FUNC_4() ? 1 : VAR_8->nr_hw_queues;
 }

 VAR_10 = FUNC_3(VAR_8);
 if (VAR_10)
  goto out_free_mq_map;

 VAR_10 = FUNC_2(VAR_8);
 if (VAR_10)
  goto out_free_mq_map;

 FUNC_8(&VAR_8->tag_list_lock);
 FUNC_1(&VAR_8->tag_list);

 return 0;

out_free_mq_map:
 for (VAR_9 = 0; VAR_9 < VAR_8->nr_maps; VAR_9++) {
  FUNC_6(VAR_8->map[VAR_9].mq_map);
  VAR_8->map[VAR_9].mq_map = ((void*)0);
 }
 FUNC_6(VAR_8->tags);
 VAR_8->tags = ((void*)0);
 return VAR_10;
}
