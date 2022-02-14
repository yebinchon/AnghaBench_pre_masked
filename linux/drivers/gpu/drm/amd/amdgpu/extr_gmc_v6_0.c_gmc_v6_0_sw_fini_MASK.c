
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * fw; } ;
struct amdgpu_device {TYPE_1__ gmc; } ;


 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;

 FUNC_3(VAR_1);
 FUNC_4(VAR_1);
 FUNC_2(VAR_1);
 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
 FUNC_5(VAR_1->gmc.fw);
 VAR_1->gmc.fw = ((void*)0);

 return 0;
}
