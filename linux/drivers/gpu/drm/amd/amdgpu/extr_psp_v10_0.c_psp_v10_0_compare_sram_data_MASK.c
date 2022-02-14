
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct psp_context {struct amdgpu_device* adev; } ;
struct amdgpu_firmware_info {unsigned int ucode_size; scalar_t__ kaddr; } ;
struct amdgpu_device {int dummy; } ;
typedef enum AMDGPU_UCODE_ID { ____Placeholder_AMDGPU_UCODE_ID } AMDGPU_UCODE_ID ;


 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (struct amdgpu_device*,unsigned int*,unsigned int*,unsigned int*,int) ;

__attribute__((used)) static bool FUNC_3(struct psp_context *VAR_0,
     struct amdgpu_firmware_info *VAR_1,
     enum AMDGPU_UCODE_ID VAR_2)
{
 int VAR_3 = 0;
 unsigned int VAR_4 = 0;
 unsigned int VAR_5 = 0;
 unsigned int VAR_6 = 0;
 unsigned int VAR_7;
 uint32_t *VAR_8 = ((void*)0);
 struct amdgpu_device *VAR_9 = VAR_0->adev;

 VAR_3 = FUNC_2(VAR_9, &VAR_4, &VAR_5,
    &VAR_6, VAR_2);
 if (VAR_3)
  return 0;

 FUNC_1(VAR_5, VAR_4);

 VAR_7 = VAR_1->ucode_size;
 VAR_8 = (uint32_t *)VAR_1->kaddr;
 while (!VAR_7) {
  VAR_4 = FUNC_0(VAR_6);

  if (*VAR_8 != VAR_4)
   return 0;

  VAR_8++;

  VAR_7 -= 4;
 }

 return 1;
}
