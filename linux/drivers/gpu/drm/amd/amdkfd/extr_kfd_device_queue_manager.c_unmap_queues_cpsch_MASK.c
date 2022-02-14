
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct device_queue_manager {int active_runlist; scalar_t__ sdma_queue_count; int packets; int * fence_addr; int fence_gpu_addr; scalar_t__ xgmi_sdma_queue_count; scalar_t__ is_hws_hang; } ;
typedef enum kfd_unmap_queues_filter { ____Placeholder_kfd_unmap_queues_filter } kfd_unmap_queues_filter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int,int ,int,int ) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;
 int VAR_4 ;
 int FUNC_5 (struct device_queue_manager*) ;

__attribute__((used)) static int FUNC_6(struct device_queue_manager *VAR_5,
    enum kfd_unmap_queues_filter VAR_6,
    uint32_t VAR_7)
{
 int VAR_8 = 0;

 if (VAR_5->is_hws_hang)
  return -VAR_0;
 if (!VAR_5->active_runlist)
  return VAR_8;

 FUNC_4("Before destroying queues, sdma queue count is : %u, xgmi sdma queue count is : %u\n",
  VAR_5->sdma_queue_count, VAR_5->xgmi_sdma_queue_count);

 if (VAR_5->sdma_queue_count > 0 || VAR_5->xgmi_sdma_queue_count)
  FUNC_5(VAR_5);

 VAR_8 = FUNC_3(&VAR_5->packets, VAR_3,
   VAR_6, VAR_7, 0, 0);
 if (VAR_8)
  return VAR_8;

 *VAR_5->fence_addr = VAR_2;
 FUNC_2(&VAR_5->packets, VAR_5->fence_gpu_addr,
    VAR_1);

 VAR_8 = FUNC_0(VAR_5->fence_addr, VAR_1,
    VAR_4);
 if (VAR_8)
  return VAR_8;

 FUNC_1(&VAR_5->packets);
 VAR_5->active_runlist = 0;

 return VAR_8;
}
