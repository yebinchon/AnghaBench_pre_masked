
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pp_hwmgr {int smu_lock; scalar_t__ pm_en; } ;
struct TYPE_4__ {scalar_t__ smu_prv_buffer_size; } ;
struct TYPE_3__ {struct pp_hwmgr* pp_handle; } ;
struct amdgpu_device {TYPE_2__ pm; TYPE_1__ powerplay; } ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_4(void *VAR_1)
{
 struct amdgpu_device *VAR_2 = VAR_1;
 struct pp_hwmgr *VAR_3 = VAR_2->powerplay.pp_handle;

 if (VAR_3 && VAR_3->pm_en) {
  FUNC_1(&VAR_3->smu_lock);
  FUNC_0(VAR_3,
     VAR_0, ((void*)0));
  FUNC_2(&VAR_3->smu_lock);
 }
 if (VAR_2->pm.smu_prv_buffer_size != 0)
  FUNC_3(VAR_2);

 return 0;
}
