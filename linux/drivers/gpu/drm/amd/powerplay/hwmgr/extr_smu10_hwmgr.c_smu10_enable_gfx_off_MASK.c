
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct TYPE_2__ {int pp_feature; } ;
struct amdgpu_device {TYPE_1__ pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_2->adev;

 if (VAR_3->pm.pp_feature & VAR_1)
  FUNC_0(VAR_2, VAR_0);

 return 0;
}
