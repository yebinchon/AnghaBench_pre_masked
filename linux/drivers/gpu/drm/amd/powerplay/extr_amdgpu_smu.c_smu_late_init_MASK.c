
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dpm_level; } ;
struct smu_context {int mutex; TYPE_1__ smu_dpm; int pm_enabled; } ;
struct amdgpu_device {struct smu_context smu; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct smu_context*,int ,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_1;
 struct smu_context *VAR_3 = &VAR_2->smu;

 if (!VAR_3->pm_enabled)
  return 0;

 FUNC_0(&VAR_3->mutex);
 FUNC_2(&VAR_2->smu,
   VAR_3->smu_dpm.dpm_level,
   VAR_0);
 FUNC_1(&VAR_3->mutex);

 return 0;
}
