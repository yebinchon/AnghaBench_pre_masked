
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu_context {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static uint32_t FUNC_1(struct smu_context *VAR_4)
{
 uint32_t VAR_5;
 uint32_t VAR_6 = 0;
 struct amdgpu_device *VAR_7 = VAR_4->adev;

 VAR_5 = FUNC_0(VAR_0, 0, VAR_3);
 VAR_6 = (VAR_5 & VAR_1)
  >> VAR_2;

 return VAR_6;
}
