
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_sched_job {int s_priority; int sched; } ;
struct amdgpu_ring {int dummy; } ;
struct amdgpu_job {int sched_sync; int sync; int fence; } ;


 int FUNC_0 (struct amdgpu_ring*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_sched_job*) ;
 int FUNC_4 (struct amdgpu_job*) ;
 struct amdgpu_job* FUNC_5 (struct drm_sched_job*) ;
 struct amdgpu_ring* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct drm_sched_job *VAR_0)
{
 struct amdgpu_ring *VAR_1 = FUNC_6(VAR_0->sched);
 struct amdgpu_job *VAR_2 = FUNC_5(VAR_0);

 FUNC_3(VAR_0);

 FUNC_0(VAR_1, VAR_0->s_priority);
 FUNC_2(VAR_2->fence);
 FUNC_1(&VAR_2->sync);
 FUNC_1(&VAR_2->sched_sync);
 FUNC_4(VAR_2);
}
