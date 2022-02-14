
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct mapped_device {int init_tio_pdu; TYPE_1__* tag_set; int queue; int numa_node_id; } ;
struct dm_target {scalar_t__ per_io_data_size; } ;
struct dm_table {int dummy; } ;
struct dm_rq_target_io {int dummy; } ;
struct blk_mq_tag_set {int dummy; } ;
struct TYPE_6__ {int cmd_size; struct mapped_device* driver_data; int nr_hw_queues; int flags; int numa_node; int queue_depth; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 struct request_queue* FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_3 ;
 struct dm_target* FUNC_7 (struct dm_table*) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (int,int ,int ) ;

int FUNC_10(struct mapped_device *VAR_4, struct dm_table *VAR_5)
{
 struct request_queue *VAR_6;
 struct dm_target *VAR_7;
 int VAR_8;

 VAR_4->tag_set = FUNC_9(sizeof(struct blk_mq_tag_set), VAR_2, VAR_4->numa_node_id);
 if (!VAR_4->tag_set)
  return -VAR_1;

 VAR_4->tag_set->ops = &VAR_3;
 VAR_4->tag_set->queue_depth = FUNC_6();
 VAR_4->tag_set->numa_node = VAR_4->numa_node_id;
 VAR_4->tag_set->flags = VAR_0;
 VAR_4->tag_set->nr_hw_queues = FUNC_5();
 VAR_4->tag_set->driver_data = VAR_4;

 VAR_4->tag_set->cmd_size = sizeof(struct dm_rq_target_io);
 VAR_7 = FUNC_7(VAR_5);
 if (VAR_7 && VAR_7->per_io_data_size) {

  VAR_4->tag_set->cmd_size += VAR_7->per_io_data_size;
  VAR_4->init_tio_pdu = 1;
 }

 VAR_8 = FUNC_2(VAR_4->tag_set);
 if (VAR_8)
  goto out_kfree_tag_set;

 VAR_6 = FUNC_4(VAR_4->tag_set, VAR_4->queue, 1);
 if (FUNC_0(VAR_6)) {
  VAR_8 = FUNC_1(VAR_6);
  goto out_tag_set;
 }

 return 0;

out_tag_set:
 FUNC_3(VAR_4->tag_set);
out_kfree_tag_set:
 FUNC_8(VAR_4->tag_set);

 return VAR_8;
}
