
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {int dummy; } ;
struct TYPE_2__ {struct pp_hwmgr* pp_handle; } ;
struct amdgpu_device {TYPE_1__ powerplay; } ;


 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0)
{
 int VAR_1 = 0;
 struct amdgpu_device *VAR_2 = VAR_0;
 struct pp_hwmgr *VAR_3 = VAR_2->powerplay.pp_handle;

 VAR_1 = FUNC_0(VAR_3);

 if (VAR_1)
  FUNC_1("powerplay hw init failed\n");

 return VAR_1;
}
