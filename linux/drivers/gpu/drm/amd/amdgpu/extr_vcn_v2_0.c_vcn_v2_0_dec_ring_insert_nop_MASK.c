
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_ring {int wptr; struct amdgpu_device* adev; } ;
struct TYPE_3__ {int nop; } ;
struct TYPE_4__ {TYPE_1__ internal; } ;
struct amdgpu_device {TYPE_2__ vcn; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct amdgpu_ring*,int ) ;

void FUNC_3(struct amdgpu_ring *VAR_0, uint32_t VAR_1)
{
 struct amdgpu_device *VAR_2 = VAR_0->adev;
 int VAR_3;

 FUNC_1(VAR_0->wptr % 2 || VAR_1 % 2);

 for (VAR_3 = 0; VAR_3 < VAR_1 / 2; VAR_3++) {
  FUNC_2(VAR_0, FUNC_0(VAR_2->vcn.internal.nop, 0));
  FUNC_2(VAR_0, 0);
 }
}
