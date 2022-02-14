
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int weight; } ;
struct vgpu_sched_data {int lru_list; struct intel_vgpu* vgpu; TYPE_1__ sched_ctl; } ;
struct TYPE_4__ {int weight; } ;
struct intel_vgpu {struct vgpu_sched_data* sched_data; TYPE_2__ sched_ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct vgpu_sched_data* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct intel_vgpu *VAR_2)
{
 struct vgpu_sched_data *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->sched_ctl.weight = VAR_2->sched_ctl.weight;
 VAR_3->vgpu = VAR_2;
 FUNC_0(&VAR_3->lru_list);

 VAR_2->sched_data = VAR_3;

 return 0;
}
