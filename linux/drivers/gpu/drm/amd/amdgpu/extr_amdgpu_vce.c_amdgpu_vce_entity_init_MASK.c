
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_sched_rq {int dummy; } ;
struct TYPE_3__ {struct drm_sched_rq* sched_rq; } ;
struct amdgpu_ring {TYPE_1__ sched; } ;
struct TYPE_4__ {int entity; struct amdgpu_ring* ring; } ;
struct amdgpu_device {TYPE_2__ vce; } ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 int FUNC_1 (int *,struct drm_sched_rq**,int,int *) ;

int FUNC_2(struct amdgpu_device *VAR_1)
{
 struct amdgpu_ring *VAR_2;
 struct drm_sched_rq *VAR_3;
 int VAR_4;

 VAR_2 = &VAR_1->vce.ring[0];
 VAR_3 = &VAR_2->sched.sched_rq[VAR_0];
 VAR_4 = FUNC_1(&VAR_1->vce.entity, &VAR_3, 1, ((void*)0));
 if (VAR_4 != 0) {
  FUNC_0("Failed setting up VCE run queue.\n");
  return VAR_4;
 }

 return 0;
}
