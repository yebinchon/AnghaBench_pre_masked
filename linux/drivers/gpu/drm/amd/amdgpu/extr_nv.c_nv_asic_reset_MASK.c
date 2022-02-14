
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_context {int dummy; } ;
struct amdgpu_device {int in_suspend; struct smu_context smu; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,int) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct smu_context*) ;

__attribute__((used)) static int FUNC_6(struct amdgpu_device *VAR_1)
{
 int VAR_2 = 0;
 struct smu_context *VAR_3 = &VAR_1->smu;

 if (FUNC_3(VAR_1) == VAR_0) {
  if (!VAR_1->in_suspend)
   FUNC_1(VAR_1);
  VAR_2 = FUNC_5(VAR_3);
 } else {
  if (!VAR_1->in_suspend)
   FUNC_1(VAR_1);
  VAR_2 = FUNC_2(VAR_1);
 }

 return VAR_2;
}
