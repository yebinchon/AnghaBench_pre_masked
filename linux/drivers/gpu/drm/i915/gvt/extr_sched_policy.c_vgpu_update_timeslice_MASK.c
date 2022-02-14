
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vgpu_sched_data {void* sched_in_time; void* left_ts; int sched_time; } ;
struct intel_vgpu {struct vgpu_sched_data* sched_data; TYPE_1__* gvt; } ;
typedef void* ktime_t ;
struct TYPE_2__ {struct intel_vgpu* idle_vgpu; } ;


 int FUNC_0 (int ,void*) ;
 void* FUNC_1 (void*,void*) ;

__attribute__((used)) static void FUNC_2(struct intel_vgpu *VAR_0, ktime_t VAR_1)
{
 ktime_t VAR_2;
 struct vgpu_sched_data *VAR_3;

 if (!VAR_0 || VAR_0 == VAR_0->gvt->idle_vgpu)
  return;

 VAR_3 = VAR_0->sched_data;
 VAR_2 = FUNC_1(VAR_1, VAR_3->sched_in_time);
 VAR_3->sched_time = FUNC_0(VAR_3->sched_time, VAR_2);
 VAR_3->left_ts = FUNC_1(VAR_3->left_ts, VAR_2);
 VAR_3->sched_in_time = VAR_1;
}
