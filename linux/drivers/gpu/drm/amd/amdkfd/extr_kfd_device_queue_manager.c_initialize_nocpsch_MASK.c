
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device_queue_manager {int* allocated_queues; int vmid_bitmap; unsigned long long sdma_bitmap; unsigned long long xgmi_sdma_bitmap; TYPE_3__* dev; scalar_t__ xgmi_sdma_queue_count; scalar_t__ sdma_queue_count; scalar_t__ next_pipe_to_allocate; scalar_t__ queue_count; int queues; int lock_hidden; } ;
struct TYPE_5__ {int vmid_num_kfd; } ;
struct TYPE_4__ {int queue_bitmap; } ;
struct TYPE_6__ {TYPE_2__ vm_info; TYPE_1__ shared_resources; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device_queue_manager*) ;
 int FUNC_2 (struct device_queue_manager*) ;
 int FUNC_3 (struct device_queue_manager*) ;
 int FUNC_4 (struct device_queue_manager*) ;
 int* FUNC_5 (int,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int) ;
 scalar_t__ FUNC_8 (int,int ) ;

__attribute__((used)) static int FUNC_9(struct device_queue_manager *VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_7("num of pipes: %d\n", FUNC_3(VAR_2));

 VAR_2->allocated_queues = FUNC_5(FUNC_3(VAR_2),
     sizeof(unsigned int), VAR_1);
 if (!VAR_2->allocated_queues)
  return -VAR_0;

 FUNC_6(&VAR_2->lock_hidden);
 FUNC_0(&VAR_2->queues);
 VAR_2->queue_count = VAR_2->next_pipe_to_allocate = 0;
 VAR_2->sdma_queue_count = 0;
 VAR_2->xgmi_sdma_queue_count = 0;

 for (VAR_3 = 0; VAR_3 < FUNC_3(VAR_2); VAR_3++) {
  int VAR_5 = VAR_3 * FUNC_4(VAR_2);

  for (VAR_4 = 0; VAR_4 < FUNC_4(VAR_2); VAR_4++)
   if (FUNC_8(VAR_5 + VAR_4,
         VAR_2->dev->shared_resources.queue_bitmap))
    VAR_2->allocated_queues[VAR_3] |= 1 << VAR_4;
 }

 VAR_2->vmid_bitmap = (1 << VAR_2->dev->vm_info.vmid_num_kfd) - 1;
 VAR_2->sdma_bitmap = ~0ULL >> (64 - FUNC_1(VAR_2));
 VAR_2->xgmi_sdma_bitmap = ~0ULL >> (64 - FUNC_2(VAR_2));

 return 0;
}
