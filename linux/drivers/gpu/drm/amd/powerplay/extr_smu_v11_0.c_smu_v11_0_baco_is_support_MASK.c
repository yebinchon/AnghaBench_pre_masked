
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu_baco_context {int platform_support; int mutex; } ;
struct smu_context {struct smu_baco_context smu_baco; struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct smu_context*,int ) ;

__attribute__((used)) static bool FUNC_4(struct smu_context *VAR_4)
{
 struct amdgpu_device *VAR_5 = VAR_4->adev;
 struct smu_baco_context *VAR_6 = &VAR_4->smu_baco;
 uint32_t VAR_7;
 bool VAR_8;

 FUNC_1(&VAR_6->mutex);
 VAR_8 = VAR_6->platform_support;
 FUNC_2(&VAR_6->mutex);

 if (!VAR_8)
  return 0;

 if (!FUNC_3(VAR_4, VAR_2))
  return 0;

 VAR_7 = FUNC_0(VAR_0, 0, VAR_3);
 if (VAR_7 & VAR_1)
  return 1;

 return 0;
}
