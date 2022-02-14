
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_context {int dummy; } ;
struct amdgpu_device {struct smu_context smu; } ;
typedef enum amd_reset_method { ____Placeholder_amd_reset_method } amd_reset_method ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct smu_context*) ;

__attribute__((used)) static enum amd_reset_method
FUNC_1(struct amdgpu_device *VAR_2)
{
 struct smu_context *VAR_3 = &VAR_2->smu;

 if (FUNC_0(VAR_3))
  return VAR_0;
 else
  return VAR_1;
}
