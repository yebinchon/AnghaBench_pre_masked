
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct queue_properties {int dummy; } ;
struct kfd_mem_obj {int cpu_ptr; int gpu_addr; int gtt_mem; } ;
struct kfd_dev {TYPE_2__* dqm; } ;
struct TYPE_3__ {int cpu_ptr; int gpu_addr; int gtt_mem; } ;
struct TYPE_4__ {TYPE_1__ hiq_sdma_mqd; } ;


 int VAR_0 ;
 struct kfd_mem_obj* FUNC_0 (int,int ) ;

struct kfd_mem_obj *FUNC_1(struct kfd_dev *VAR_1, struct queue_properties *VAR_2)
{
 struct kfd_mem_obj *VAR_3 = ((void*)0);

 VAR_3 = FUNC_0(sizeof(struct kfd_mem_obj), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->gtt_mem = VAR_1->dqm->hiq_sdma_mqd.gtt_mem;
 VAR_3->gpu_addr = VAR_1->dqm->hiq_sdma_mqd.gpu_addr;
 VAR_3->cpu_ptr = VAR_1->dqm->hiq_sdma_mqd.cpu_ptr;

 return VAR_3;
}
