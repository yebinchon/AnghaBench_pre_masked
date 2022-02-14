
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_hive_info {scalar_t__ hive_id; int pstate; int hive_lock; int reset_lock; int device_list; struct amdgpu_device* adev; } ;
struct TYPE_3__ {scalar_t__ hive_id; } ;
struct TYPE_4__ {TYPE_1__ xgmi; } ;
struct amdgpu_device {TYPE_2__ gmc; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*,struct amdgpu_hive_info*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct amdgpu_hive_info* VAR_2 ;
 int VAR_3 ;

struct amdgpu_hive_info *FUNC_5(struct amdgpu_device *VAR_4, int VAR_5)
{
 int VAR_6;
 struct amdgpu_hive_info *VAR_7;

 if (!VAR_4->gmc.xgmi.hive_id)
  return ((void*)0);

 FUNC_3(&VAR_3);

 for (VAR_6 = 0 ; VAR_6 < VAR_1; ++VAR_6) {
  VAR_7 = &VAR_2[VAR_6];
  if (VAR_7->hive_id == VAR_4->gmc.xgmi.hive_id) {
   if (VAR_5)
    FUNC_3(&VAR_7->hive_lock);
   FUNC_4(&VAR_3);
   return VAR_7;
  }
 }
 if (VAR_6 >= VAR_0) {
  FUNC_4(&VAR_3);
  return ((void*)0);
 }


 VAR_7 = &VAR_2[VAR_1++];

 if (FUNC_1(VAR_4, VAR_7)) {
  FUNC_4(&VAR_3);
  return ((void*)0);
 }

 VAR_7->adev = VAR_4;
 VAR_7->hive_id = VAR_4->gmc.xgmi.hive_id;
 FUNC_0(&VAR_7->device_list);
 FUNC_2(&VAR_7->hive_lock);
 FUNC_2(&VAR_7->reset_lock);

 if (VAR_5)
  FUNC_3(&VAR_7->hive_lock);
 VAR_7->pstate = -1;
 FUNC_4(&VAR_3);

 return VAR_7;
}
