
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct queue_properties {int sdma_engine_id; int sdma_queue_id; } ;
struct kfd_mem_obj {int * cpu_ptr; scalar_t__ gpu_addr; void* gtt_mem; } ;
struct kfd_dev {TYPE_4__* dqm; TYPE_1__* device_info; } ;
struct TYPE_7__ {scalar_t__ cpu_ptr; scalar_t__ gpu_addr; scalar_t__ gtt_mem; } ;
struct TYPE_8__ {TYPE_3__ hiq_sdma_mqd; TYPE_2__** mqd_mgrs; } ;
struct TYPE_6__ {int mqd_size; } ;
struct TYPE_5__ {int num_sdma_queues_per_engine; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct kfd_mem_obj* FUNC_0 (int,int ) ;

struct kfd_mem_obj *FUNC_1(struct kfd_dev *VAR_3,
     struct queue_properties *VAR_4)
{
 struct kfd_mem_obj *VAR_5 = ((void*)0);
 uint64_t VAR_6;

 VAR_5 = FUNC_0(sizeof(struct kfd_mem_obj), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = (VAR_4->sdma_engine_id *
  VAR_3->device_info->num_sdma_queues_per_engine +
  VAR_4->sdma_queue_id) *
  VAR_3->dqm->mqd_mgrs[VAR_2]->mqd_size;

 VAR_6 += VAR_3->dqm->mqd_mgrs[VAR_1]->mqd_size;

 VAR_5->gtt_mem = (void *)((uint64_t)VAR_3->dqm->hiq_sdma_mqd.gtt_mem
    + VAR_6);
 VAR_5->gpu_addr = VAR_3->dqm->hiq_sdma_mqd.gpu_addr + VAR_6;
 VAR_5->cpu_ptr = (uint32_t *)((uint64_t)
    VAR_3->dqm->hiq_sdma_mqd.cpu_ptr + VAR_6);

 return VAR_5;
}
