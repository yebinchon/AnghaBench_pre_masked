
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nullb_cmd {int dummy; } ;
struct nullb {TYPE_1__* dev; } ;
struct blk_mq_tag_set {int cmd_size; int flags; int * driver_data; int numa_node; int queue_depth; int nr_hw_queues; int * ops; } ;
struct TYPE_2__ {scalar_t__ blocking; int home_node; int hw_queue_depth; int submit_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct blk_mq_tag_set*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_1(struct nullb *VAR_9, struct blk_mq_tag_set *VAR_10)
{
 VAR_10->ops = &VAR_8;
 VAR_10->nr_hw_queues = VAR_9 ? VAR_9->dev->submit_queues :
      VAR_7;
 VAR_10->queue_depth = VAR_9 ? VAR_9->dev->hw_queue_depth :
      VAR_5;
 VAR_10->numa_node = VAR_9 ? VAR_9->dev->home_node : VAR_4;
 VAR_10->cmd_size = sizeof(struct nullb_cmd);
 VAR_10->flags = VAR_2;
 if (VAR_6)
  VAR_10->flags |= VAR_1;
 VAR_10->driver_data = ((void*)0);

 if ((VAR_9 && VAR_9->dev->blocking) || VAR_3)
  VAR_10->flags |= VAR_0;

 return FUNC_0(VAR_10);
}
