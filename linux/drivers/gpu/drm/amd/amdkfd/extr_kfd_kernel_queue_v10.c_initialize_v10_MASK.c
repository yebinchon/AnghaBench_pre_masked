
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kfd_dev {int dummy; } ;
struct kernel_queue {int eop_kernel_addr; TYPE_1__* eop_mem; int eop_gpu_addr; } ;
typedef enum kfd_queue_type { ____Placeholder_kfd_queue_type } kfd_queue_type ;
struct TYPE_2__ {int cpu_ptr; int gpu_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct kfd_dev*,int ,TYPE_1__**) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct kernel_queue *VAR_1, struct kfd_dev *VAR_2,
   enum kfd_queue_type VAR_3, unsigned int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_0, &VAR_1->eop_mem);
 if (VAR_5 != 0)
  return 0;

 VAR_1->eop_gpu_addr = VAR_1->eop_mem->gpu_addr;
 VAR_1->eop_kernel_addr = VAR_1->eop_mem->cpu_ptr;

 FUNC_1(VAR_1->eop_kernel_addr, 0, VAR_0);

 return 1;
}
