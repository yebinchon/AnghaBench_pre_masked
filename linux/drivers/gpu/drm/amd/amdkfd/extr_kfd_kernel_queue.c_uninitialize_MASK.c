
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* uninitialize ) (struct kernel_queue*) ;} ;
struct kernel_queue {TYPE_3__* queue; int dev; int pq; TYPE_1__ ops_asic_specific; int wptr_mem; int rptr_mem; TYPE_4__* mqd_mgr; int fence_mem_obj; } ;
struct TYPE_9__ {int (* free_mqd ) (TYPE_4__*,int ,int ) ;int (* destroy_mqd ) (TYPE_4__*,int ,int ,int ,int ,int ) ;} ;
struct TYPE_7__ {scalar_t__ type; int doorbell_ptr; } ;
struct TYPE_8__ {TYPE_2__ properties; int mqd_mem_obj; int mqd; int queue; int pipe; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_4__*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;
 int FUNC_4 (struct kernel_queue*) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(struct kernel_queue *VAR_4)
{
 if (VAR_4->queue->properties.type == VAR_2)
  VAR_4->mqd_mgr->destroy_mqd(VAR_4->mqd_mgr,
     VAR_4->queue->mqd,
     VAR_0,
     VAR_3,
     VAR_4->queue->pipe,
     VAR_4->queue->queue);
 else if (VAR_4->queue->properties.type == VAR_1)
  FUNC_0(VAR_4->dev, VAR_4->fence_mem_obj);

 VAR_4->mqd_mgr->free_mqd(VAR_4->mqd_mgr, VAR_4->queue->mqd,
    VAR_4->queue->mqd_mem_obj);

 FUNC_0(VAR_4->dev, VAR_4->rptr_mem);
 FUNC_0(VAR_4->dev, VAR_4->wptr_mem);
 VAR_4->ops_asic_specific.uninitialize(VAR_4);
 FUNC_0(VAR_4->dev, VAR_4->pq);
 FUNC_1(VAR_4->dev,
     VAR_4->queue->properties.doorbell_ptr);
 FUNC_5(VAR_4->queue);
}
