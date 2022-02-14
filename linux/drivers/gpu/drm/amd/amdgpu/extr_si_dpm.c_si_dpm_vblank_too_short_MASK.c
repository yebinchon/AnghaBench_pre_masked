
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ vram_type; } ;
struct amdgpu_device {TYPE_1__ gmc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*) ;

__attribute__((used)) static bool FUNC_1(void *VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_1;
 u32 VAR_3 = FUNC_0(VAR_2);

 u32 VAR_4 = VAR_2->gmc.vram_type == VAR_0 ? 450 : 0;

 if (VAR_3 < VAR_4)
  return 1;
 else
  return 0;

}
