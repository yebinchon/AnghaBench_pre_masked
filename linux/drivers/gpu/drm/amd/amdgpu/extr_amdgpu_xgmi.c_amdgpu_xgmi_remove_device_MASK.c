
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_hive_info {int hive_lock; int reset_lock; int number_devices; } ;
struct TYPE_3__ {int supported; } ;
struct TYPE_4__ {TYPE_1__ xgmi; } ;
struct amdgpu_device {TYPE_2__ gmc; } ;


 struct amdgpu_hive_info* FUNC_0 (struct amdgpu_device*,int) ;
 int FUNC_1 (struct amdgpu_device*,struct amdgpu_hive_info*) ;
 int FUNC_2 (struct amdgpu_device*,struct amdgpu_hive_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct amdgpu_device *VAR_0)
{
 struct amdgpu_hive_info *VAR_1;

 if (!VAR_0->gmc.xgmi.supported)
  return;

 VAR_1 = FUNC_0(VAR_0, 1);
 if (!VAR_1)
  return;

 if (!(VAR_1->number_devices--)) {
  FUNC_1(VAR_0, VAR_1);
  FUNC_3(&VAR_1->hive_lock);
  FUNC_3(&VAR_1->reset_lock);
 } else {
  FUNC_2(VAR_0, VAR_1);
  FUNC_4(&VAR_1->hive_lock);
 }
}
