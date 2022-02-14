
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int nr_hw_queues; int sysfs_lock; struct blk_mq_hw_ctx** queue_hw_ctx; } ;
struct blk_mq_tag_set {int nr_hw_queues; int * map; } ;
struct blk_mq_hw_ctx {int numa_node; scalar_t__ tags; } ;


 size_t VAR_0 ;
 struct blk_mq_hw_ctx* FUNC_0 (struct blk_mq_tag_set*,struct request_queue*,int,int) ;
 int FUNC_1 (struct request_queue*,struct blk_mq_tag_set*,struct blk_mq_hw_ctx*,int) ;
 int FUNC_2 (struct blk_mq_tag_set*,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int,int) ;

__attribute__((used)) static void FUNC_7(struct blk_mq_tag_set *VAR_1,
      struct request_queue *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 struct blk_mq_hw_ctx **VAR_6 = VAR_2->queue_hw_ctx;


 FUNC_4(&VAR_2->sysfs_lock);
 for (VAR_3 = 0; VAR_3 < VAR_1->nr_hw_queues; VAR_3++) {
  int VAR_7;
  struct blk_mq_hw_ctx *VAR_8;

  VAR_7 = FUNC_3(&VAR_1->map[VAR_0], VAR_3);





  if (VAR_6[VAR_3] && (VAR_6[VAR_3]->numa_node == VAR_7))
   continue;

  VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_7);
  if (VAR_8) {
   if (VAR_6[VAR_3])
    FUNC_1(VAR_2, VAR_1, VAR_6[VAR_3], VAR_3);
   VAR_6[VAR_3] = VAR_8;
  } else {
   if (VAR_6[VAR_3])
    FUNC_6("Allocate new hctx on node %d fails,						fallback to previous one on node %d\n",

      VAR_7, VAR_6[VAR_3]->numa_node);
   else
    break;
  }
 }




 if (VAR_3 != VAR_1->nr_hw_queues) {
  VAR_4 = VAR_2->nr_hw_queues;
  VAR_5 = VAR_3;
 } else {
  VAR_4 = VAR_3;
  VAR_5 = VAR_2->nr_hw_queues;
  VAR_2->nr_hw_queues = VAR_1->nr_hw_queues;
 }

 for (; VAR_4 < VAR_5; VAR_4++) {
  struct blk_mq_hw_ctx *VAR_9 = VAR_6[VAR_4];

  if (VAR_9) {
   if (VAR_9->tags)
    FUNC_2(VAR_1, VAR_4);
   FUNC_1(VAR_2, VAR_1, VAR_9, VAR_4);
   VAR_6[VAR_4] = ((void*)0);
  }
 }
 FUNC_5(&VAR_2->sysfs_lock);
}
