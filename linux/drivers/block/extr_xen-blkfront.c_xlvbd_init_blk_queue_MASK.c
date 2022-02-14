
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct request_queue {struct blkfront_info* queuedata; } ;
struct gendisk {struct request_queue* queue; struct blkfront_info* private_data; } ;
struct blkif_req {int dummy; } ;
struct TYPE_5__ {int queue_depth; int cmd_size; struct blkfront_info* driver_data; int flags; int numa_node; int nr_hw_queues; int * ops; } ;
struct blkfront_info {scalar_t__ max_indirect_segments; unsigned int physical_sector_size; int sector_size; struct gendisk* gd; struct request_queue* rq; TYPE_1__ tag_set; int nr_rings; } ;


 int VAR_0 ;
 int FUNC_0 (struct blkfront_info*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct request_queue*) ;
 int VAR_3 ;
 int FUNC_2 (struct request_queue*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 struct request_queue* FUNC_5 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_6 (struct blkfront_info*) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct gendisk *VAR_5, u16 VAR_6,
    unsigned int VAR_7)
{
 struct request_queue *VAR_8;
 struct blkfront_info *VAR_9 = VAR_5->private_data;

 FUNC_7(&VAR_9->tag_set, 0, sizeof(VAR_9->tag_set));
 VAR_9->tag_set.ops = &VAR_4;
 VAR_9->tag_set.nr_hw_queues = VAR_9->nr_rings;
 if (VAR_2 && VAR_9->max_indirect_segments == 0) {






  VAR_9->tag_set.queue_depth = FUNC_0(VAR_9) / 2;
 } else
  VAR_9->tag_set.queue_depth = FUNC_0(VAR_9);
 VAR_9->tag_set.numa_node = VAR_3;
 VAR_9->tag_set.flags = VAR_0;
 VAR_9->tag_set.cmd_size = sizeof(struct blkif_req);
 VAR_9->tag_set.driver_data = VAR_9;

 if (FUNC_3(&VAR_9->tag_set))
  return -VAR_1;
 VAR_8 = FUNC_5(&VAR_9->tag_set);
 if (FUNC_1(VAR_8)) {
  FUNC_4(&VAR_9->tag_set);
  return FUNC_2(VAR_8);
 }

 VAR_8->queuedata = VAR_9;
 VAR_9->rq = VAR_5->queue = VAR_8;
 VAR_9->gd = VAR_5;
 VAR_9->sector_size = VAR_6;
 VAR_9->physical_sector_size = VAR_7;
 FUNC_6(VAR_9);

 return 0;
}
