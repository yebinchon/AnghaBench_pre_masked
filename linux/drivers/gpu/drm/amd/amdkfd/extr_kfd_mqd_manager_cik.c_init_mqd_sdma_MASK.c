
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct queue_properties {int dummy; } ;
struct mqd_manager {int (* update_mqd ) (struct mqd_manager*,struct cik_sdma_rlc_registers*,struct queue_properties*) ;} ;
struct kfd_mem_obj {int gpu_addr; scalar_t__ cpu_ptr; } ;
struct cik_sdma_rlc_registers {int dummy; } ;


 int FUNC_0 (struct cik_sdma_rlc_registers*,int ,int) ;
 int FUNC_1 (struct mqd_manager*,struct cik_sdma_rlc_registers*,struct queue_properties*) ;

__attribute__((used)) static void FUNC_2(struct mqd_manager *VAR_0, void **VAR_1,
   struct kfd_mem_obj *VAR_2, uint64_t *VAR_3,
   struct queue_properties *VAR_4)
{
 struct cik_sdma_rlc_registers *VAR_5;

 VAR_5 = (struct cik_sdma_rlc_registers *) VAR_2->cpu_ptr;

 FUNC_0(VAR_5, 0, sizeof(struct cik_sdma_rlc_registers));

 *VAR_1 = VAR_5;
 if (VAR_3)
  *VAR_3 = VAR_2->gpu_addr;

 VAR_0->update_mqd(VAR_0, VAR_5, VAR_4);
}
