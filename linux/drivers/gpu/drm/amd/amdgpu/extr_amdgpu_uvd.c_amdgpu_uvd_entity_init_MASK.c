
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_sched_rq {int dummy; } ;
struct TYPE_5__ {struct drm_sched_rq* sched_rq; } ;
struct amdgpu_ring {TYPE_2__ sched; } ;
struct TYPE_6__ {int entity; TYPE_1__* inst; } ;
struct amdgpu_device {TYPE_3__ uvd; } ;
struct TYPE_4__ {struct amdgpu_ring ring; } ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 int FUNC_1 (int *,struct drm_sched_rq**,int,int *) ;

int FUNC_2(struct amdgpu_device *VAR_1)
{
 struct amdgpu_ring *VAR_2;
 struct drm_sched_rq *VAR_3;
 int VAR_4;

 VAR_2 = &VAR_1->uvd.inst[0].ring;
 VAR_3 = &VAR_2->sched.sched_rq[VAR_0];
 VAR_4 = FUNC_1(&VAR_1->uvd.entity, &VAR_3, 1, ((void*)0));
 if (VAR_4) {
  FUNC_0("Failed setting up UVD kernel entity.\n");
  return VAR_4;
 }

 return 0;
}
