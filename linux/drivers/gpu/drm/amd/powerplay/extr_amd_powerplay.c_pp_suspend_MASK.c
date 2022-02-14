
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {int dummy; } ;
struct TYPE_2__ {struct pp_hwmgr* pp_handle; } ;
struct amdgpu_device {TYPE_1__ powerplay; } ;


 int FUNC_0 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = VAR_0;
 struct pp_hwmgr *VAR_2 = VAR_1->powerplay.pp_handle;

 return FUNC_0(VAR_2);
}
