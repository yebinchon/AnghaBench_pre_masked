
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_context {int pm_enabled; int mutex; struct amdgpu_device* adev; } ;
struct amdgpu_device {struct smu_context smu; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_1;
 struct smu_context *VAR_3 = &VAR_2->smu;

 VAR_3->adev = VAR_2;
 VAR_3->pm_enabled = !!VAR_0;
 FUNC_0(&VAR_3->mutex);

 return FUNC_1(VAR_2);
}
