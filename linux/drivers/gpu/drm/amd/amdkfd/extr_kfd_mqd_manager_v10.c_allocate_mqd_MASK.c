
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v10_compute_mqd {int dummy; } ;
struct queue_properties {scalar_t__ type; int ctl_stack_size; } ;
struct kfd_mem_obj {int cpu_ptr; int gpu_addr; int gtt_mem; } ;
struct kfd_dev {int kgd; scalar_t__ cwsr_enabled; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,scalar_t__,int *,int *,void*,int) ;
 int FUNC_2 (struct kfd_dev*,int,struct kfd_mem_obj**) ;
 int FUNC_3 (struct kfd_mem_obj*) ;
 struct kfd_mem_obj* FUNC_4 (int,int ) ;

__attribute__((used)) static struct kfd_mem_obj *FUNC_5(struct kfd_dev *VAR_3,
  struct queue_properties *VAR_4)
{
 int VAR_5;
 struct kfd_mem_obj *VAR_6 = ((void*)0);





 if (VAR_3->cwsr_enabled && (VAR_4->type == VAR_1)) {
  VAR_6 = FUNC_4(sizeof(struct kfd_mem_obj), VAR_0);
  if (!VAR_6)
   return ((void*)0);
  VAR_5 = FUNC_1(VAR_3->kgd,
   FUNC_0(VAR_4->ctl_stack_size, VAR_2) +
    FUNC_0(sizeof(struct v10_compute_mqd), VAR_2),
   &(VAR_6->gtt_mem),
   &(VAR_6->gpu_addr),
   (void *)&(VAR_6->cpu_ptr), 1);
 } else {
  VAR_5 = FUNC_2(VAR_3, sizeof(struct v10_compute_mqd),
    &VAR_6);
 }

 if (VAR_5) {
  FUNC_3(VAR_6);
  return ((void*)0);
 }

 return VAR_6;

}
