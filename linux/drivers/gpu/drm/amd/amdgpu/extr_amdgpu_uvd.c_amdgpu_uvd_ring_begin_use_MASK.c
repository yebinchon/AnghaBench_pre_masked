
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct TYPE_4__ {scalar_t__ dpm_enabled; } ;
struct TYPE_3__ {int idle_work; } ;
struct amdgpu_device {TYPE_2__ pm; TYPE_1__ uvd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*,int,int) ;
 int FUNC_1 (struct amdgpu_device*,int ,int ) ;
 int FUNC_2 (struct amdgpu_device*,int ,int ) ;
 int FUNC_3 (struct amdgpu_device*,int) ;
 scalar_t__ FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct amdgpu_ring *VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_3->adev;
 bool VAR_5;

 if (FUNC_4(VAR_4))
  return;

 VAR_5 = !FUNC_5(&VAR_4->uvd.idle_work);
 if (VAR_5) {
  if (VAR_4->pm.dpm_enabled) {
   FUNC_3(VAR_4, 1);
  } else {
   FUNC_0(VAR_4, 53300, 40000);
   FUNC_1(VAR_4, VAR_1,
              VAR_0);
   FUNC_2(VAR_4, VAR_1,
              VAR_2);
  }
 }
}
