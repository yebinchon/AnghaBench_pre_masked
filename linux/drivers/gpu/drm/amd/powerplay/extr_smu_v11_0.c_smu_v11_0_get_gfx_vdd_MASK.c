
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct smu_context {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct smu_context *VAR_5, uint32_t *VAR_6)
{
 struct amdgpu_device *VAR_7 = VAR_5->adev;
 uint32_t VAR_8 = 0, VAR_9 = 0;

 if (!VAR_6)
  return -VAR_0;
 VAR_9 = (FUNC_0(VAR_1, 0, VAR_4) &
  VAR_2) >>
  VAR_3;

 VAR_8 = (uint32_t)FUNC_1((uint8_t)VAR_9);

 *VAR_6 = VAR_8;

 return 0;

}
