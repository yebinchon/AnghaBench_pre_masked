
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgpu_sched_data {int active; int lru_list; } ;
struct intel_vgpu {struct vgpu_sched_data* sched_data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct intel_vgpu *VAR_0)
{
 struct vgpu_sched_data *VAR_1 = VAR_0->sched_data;

 FUNC_0(&VAR_1->lru_list);
 VAR_1->active = 0;
}
