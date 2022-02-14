
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct kfd_mem_obj {int cpu_ptr; int gpu_addr; int gtt_mem; } ;
struct kfd_dev {int kgd; TYPE_1__* device_info; } ;
struct device_queue_manager {TYPE_2__** mqd_mgrs; struct kfd_mem_obj hiq_sdma_mqd; struct kfd_dev* dev; } ;
struct TYPE_4__ {int mqd_size; } ;
struct TYPE_3__ {int num_sdma_engines; int num_sdma_queues_per_engine; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int,int *,int *,void*,int) ;

__attribute__((used)) static int FUNC_1(struct device_queue_manager *VAR_2)
{
 int VAR_3;
 struct kfd_dev *VAR_4 = VAR_2->dev;
 struct kfd_mem_obj *VAR_5 = &VAR_2->hiq_sdma_mqd;
 uint32_t VAR_6 = VAR_2->mqd_mgrs[VAR_1]->mqd_size *
  VAR_4->device_info->num_sdma_engines *
  VAR_4->device_info->num_sdma_queues_per_engine +
  VAR_2->mqd_mgrs[VAR_0]->mqd_size;

 VAR_3 = FUNC_0(VAR_4->kgd, VAR_6,
  &(VAR_5->gtt_mem), &(VAR_5->gpu_addr),
  (void *)&(VAR_5->cpu_ptr), 1);

 return VAR_3;
}
