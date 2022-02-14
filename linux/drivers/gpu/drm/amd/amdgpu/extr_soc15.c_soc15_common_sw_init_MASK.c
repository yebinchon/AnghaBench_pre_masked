
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_device {TYPE_1__* df_funcs; } ;
struct TYPE_2__ {int (* sw_init ) (struct amdgpu_device*) ;} ;


 scalar_t__ FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;

 if (FUNC_0(VAR_1))
  FUNC_2(VAR_1);

 VAR_1->df_funcs->sw_init(VAR_1);

 return 0;
}
