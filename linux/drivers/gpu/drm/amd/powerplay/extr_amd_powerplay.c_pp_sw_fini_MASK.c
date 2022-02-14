
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pp_hwmgr {int dummy; } ;
struct TYPE_4__ {int * fw; } ;
struct TYPE_3__ {struct pp_hwmgr* pp_handle; } ;
struct amdgpu_device {TYPE_2__ pm; TYPE_1__ powerplay; } ;


 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = VAR_0;
 struct pp_hwmgr *VAR_2 = VAR_1->powerplay.pp_handle;

 FUNC_0(VAR_2);

 FUNC_1(VAR_1->pm.fw);
 VAR_1->pm.fw = ((void*)0);

 return 0;
}
