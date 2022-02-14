
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_ps; TYPE_3__* priv; TYPE_3__* ps; } ;
struct TYPE_5__ {TYPE_1__ dpm; } ;
struct amdgpu_device {TYPE_2__ pm; } ;
struct TYPE_6__ {struct TYPE_6__* ps_priv; } ;


 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->pm.dpm.num_ps; VAR_1++) {
  FUNC_1(VAR_0->pm.dpm.ps[VAR_1].ps_priv);
 }
 FUNC_1(VAR_0->pm.dpm.ps);
 FUNC_1(VAR_0->pm.dpm.priv);
 FUNC_0(VAR_0);
}
