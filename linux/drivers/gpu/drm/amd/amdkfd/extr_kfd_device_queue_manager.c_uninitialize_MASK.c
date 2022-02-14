
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_queue_manager {scalar_t__ queue_count; scalar_t__ processes_count; int pipeline_mem; int dev; int lock_hidden; int * mqd_mgrs; int allocated_queues; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct device_queue_manager *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1->queue_count > 0 || VAR_1->processes_count > 0);

 FUNC_2(VAR_1->allocated_queues);
 for (VAR_2 = 0 ; VAR_2 < VAR_0 ; VAR_2++)
  FUNC_2(VAR_1->mqd_mgrs[VAR_2]);
 FUNC_3(&VAR_1->lock_hidden);
 FUNC_1(VAR_1->dev, VAR_1->pipeline_mem);
}
