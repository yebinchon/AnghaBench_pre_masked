
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * funcs; int num_types; } ;
struct TYPE_6__ {TYPE_1__ irq; } ;
struct TYPE_7__ {TYPE_2__ thermal; } ;
struct TYPE_8__ {TYPE_3__ dpm; } ;
struct amdgpu_device {TYPE_4__ pm; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_2)
{
 VAR_2->pm.dpm.thermal.irq.num_types = VAR_0;
 VAR_2->pm.dpm.thermal.irq.funcs = &VAR_1;
}
