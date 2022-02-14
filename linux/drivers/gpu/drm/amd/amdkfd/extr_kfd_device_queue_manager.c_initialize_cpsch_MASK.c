
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_queue_manager {int active_runlist; unsigned long long sdma_bitmap; unsigned long long xgmi_sdma_bitmap; int hw_exception_work; scalar_t__ xgmi_sdma_queue_count; scalar_t__ sdma_queue_count; scalar_t__ processes_count; scalar_t__ queue_count; int queues; int lock_hidden; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct device_queue_manager*) ;
 int FUNC_3 (struct device_queue_manager*) ;
 int FUNC_4 (struct device_queue_manager*) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static int FUNC_7(struct device_queue_manager *VAR_1)
{
 FUNC_6("num of pipes: %d\n", FUNC_4(VAR_1));

 FUNC_5(&VAR_1->lock_hidden);
 FUNC_0(&VAR_1->queues);
 VAR_1->queue_count = VAR_1->processes_count = 0;
 VAR_1->sdma_queue_count = 0;
 VAR_1->xgmi_sdma_queue_count = 0;
 VAR_1->active_runlist = 0;
 VAR_1->sdma_bitmap = ~0ULL >> (64 - FUNC_2(VAR_1));
 VAR_1->xgmi_sdma_bitmap = ~0ULL >> (64 - FUNC_3(VAR_1));

 FUNC_1(&VAR_1->hw_exception_work, VAR_0);

 return 0;
}
