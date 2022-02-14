
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct amdgpu_device* pp_handle; int * pp_funcs; } ;
struct amdgpu_device {TYPE_1__ powerplay; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_1(void *VAR_1)
{

 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_1;

 VAR_2->powerplay.pp_funcs = &VAR_0;
 VAR_2->powerplay.pp_handle = VAR_2;
 FUNC_0(VAR_2);
 return 0;
}
