
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct TYPE_3__ {int cmd; } ;
struct TYPE_4__ {TYPE_1__ internal; } ;
struct amdgpu_device {TYPE_2__ vcn; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct amdgpu_ring*,int) ;

void FUNC_2(struct amdgpu_ring *VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_2->adev;

 FUNC_1(VAR_2, FUNC_0(VAR_3->vcn.internal.cmd, 0));
 FUNC_1(VAR_2, VAR_1 | (VAR_0 << 1));
}
