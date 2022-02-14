
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bl_level; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;


 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;

 VAR_1->mode_info.bl_level =
  FUNC_0(VAR_1);

 return FUNC_1(VAR_0);
}
