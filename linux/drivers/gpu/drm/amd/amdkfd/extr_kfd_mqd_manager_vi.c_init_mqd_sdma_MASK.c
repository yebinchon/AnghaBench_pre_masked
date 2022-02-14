
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vi_sdma_mqd {int dummy; } ;
struct queue_properties {int dummy; } ;
struct mqd_manager {int (* update_mqd ) (struct mqd_manager*,struct vi_sdma_mqd*,struct queue_properties*) ;} ;
struct kfd_mem_obj {int gpu_addr; scalar_t__ cpu_ptr; } ;


 int FUNC_0 (struct vi_sdma_mqd*,int ,int) ;
 int FUNC_1 (struct mqd_manager*,struct vi_sdma_mqd*,struct queue_properties*) ;

__attribute__((used)) static void FUNC_2(struct mqd_manager *VAR_0, void **VAR_1,
  struct kfd_mem_obj *VAR_2, uint64_t *VAR_3,
  struct queue_properties *VAR_4)
{
 struct vi_sdma_mqd *VAR_5;

 VAR_5 = (struct vi_sdma_mqd *) VAR_2->cpu_ptr;

 FUNC_0(VAR_5, 0, sizeof(struct vi_sdma_mqd));

 *VAR_1 = VAR_5;
 if (VAR_3)
  *VAR_3 = VAR_2->gpu_addr;

 VAR_0->update_mqd(VAR_0, VAR_5, VAR_4);
}
