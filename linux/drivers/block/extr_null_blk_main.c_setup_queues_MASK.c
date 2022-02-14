
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nullb_queue {int dummy; } ;
struct nullb {TYPE_1__* dev; int queue_depth; int queues; } ;
struct TYPE_2__ {int hw_queue_depth; int submit_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct nullb *VAR_2)
{
 VAR_2->queues = FUNC_0(VAR_2->dev->submit_queues,
    sizeof(struct nullb_queue),
    VAR_1);
 if (!VAR_2->queues)
  return -VAR_0;

 VAR_2->queue_depth = VAR_2->dev->hw_queue_depth;

 return 0;
}
