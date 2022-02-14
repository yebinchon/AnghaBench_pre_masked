
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_ring {TYPE_2__* adev; } ;
struct TYPE_3__ {int idle_work; } ;
struct TYPE_4__ {TYPE_1__ vce; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct amdgpu_ring *VAR_1)
{
 if (!FUNC_0(VAR_1->adev))
  FUNC_1(&VAR_1->adev->vce.idle_work, VAR_0);
}
