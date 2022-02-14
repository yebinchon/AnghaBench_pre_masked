
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct request_queue {TYPE_2__* queuedata; } ;
struct ide_request {int dummy; } ;
struct blk_mq_tag_set {int nr_hw_queues; int queue_depth; int reserved_tags; int cmd_size; int flags; int numa_node; int * ops; } ;
struct TYPE_5__ {int rqsize; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_6__ {struct request_queue* queue; struct blk_mq_tag_set tag_set; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct request_queue*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct blk_mq_tag_set*) ;
 int FUNC_2 (struct blk_mq_tag_set*) ;
 struct request_queue* FUNC_3 (struct blk_mq_tag_set*) ;
 int FUNC_4 (int ,struct request_queue*) ;
 int FUNC_5 (struct request_queue*,int) ;
 int FUNC_6 (struct request_queue*,int) ;
 int FUNC_7 (struct request_queue*,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_9(ide_drive_t *VAR_5)
{
 struct request_queue *VAR_6;
 ide_hwif_t *VAR_7 = VAR_5->hwif;
 int VAR_8 = 256;
 int VAR_9 = VAR_2;
 struct blk_mq_tag_set *VAR_10;
 VAR_10 = &VAR_5->tag_set;
 VAR_10->ops = &VAR_4;
 VAR_10->nr_hw_queues = 1;
 VAR_10->queue_depth = 32;
 VAR_10->reserved_tags = 1;
 VAR_10->cmd_size = sizeof(struct ide_request);
 VAR_10->numa_node = FUNC_8(VAR_7);
 VAR_10->flags = VAR_1 | VAR_0;
 if (FUNC_1(VAR_10))
  return 1;

 VAR_6 = FUNC_3(VAR_10);
 if (FUNC_0(VAR_6)) {
  FUNC_2(VAR_10);
  return 1;
 }

 FUNC_4(VAR_3, VAR_6);

 VAR_6->queuedata = VAR_5;
 FUNC_7(VAR_6, 0xffff);

 if (VAR_7->rqsize < VAR_8)
  VAR_8 = VAR_7->rqsize;
 FUNC_5(VAR_6, VAR_8);
 FUNC_6(VAR_6, VAR_9);


 VAR_5->queue = VAR_6;

 return 0;
}
