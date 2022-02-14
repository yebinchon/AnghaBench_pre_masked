
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {TYPE_1__* funcs; struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;
typedef enum drm_sched_priority { ____Placeholder_drm_sched_priority } drm_sched_priority ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,struct amdgpu_ring*,int) ;
 int FUNC_1 (struct amdgpu_device*,struct amdgpu_ring*,int) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_ring *VAR_2,
            enum drm_sched_priority VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_2->adev;
 bool VAR_5 = VAR_3 == VAR_1;

 if (VAR_2->funcs->type != VAR_0)
  return;

 FUNC_0(VAR_4, VAR_2, VAR_5);
 FUNC_1(VAR_4, VAR_2, VAR_5);
}
