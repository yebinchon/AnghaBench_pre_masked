
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * vcpu_bo; } ;
struct radeon_device {int vce_fw; TYPE_1__ vce; } ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct radeon_device *VAR_0)
{
 if (VAR_0->vce.vcpu_bo == ((void*)0))
  return;

 FUNC_0(&VAR_0->vce.vcpu_bo);

 FUNC_1(VAR_0->vce_fw);
}
