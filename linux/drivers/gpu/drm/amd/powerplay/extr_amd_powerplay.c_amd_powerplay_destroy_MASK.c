
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {struct pp_hwmgr* hardcode_pp_table; } ;
struct TYPE_2__ {struct pp_hwmgr* pp_handle; } ;
struct amdgpu_device {TYPE_1__ powerplay; } ;


 int FUNC_0 (struct pp_hwmgr*) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_0)
{
 struct pp_hwmgr *VAR_1 = VAR_0->powerplay.pp_handle;

 FUNC_0(VAR_1->hardcode_pp_table);
 VAR_1->hardcode_pp_table = ((void*)0);

 FUNC_0(VAR_1);
 VAR_1 = ((void*)0);
}
