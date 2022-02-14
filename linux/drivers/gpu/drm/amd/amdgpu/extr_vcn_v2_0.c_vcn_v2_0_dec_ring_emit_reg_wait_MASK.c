
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct TYPE_4__ {int cmd; int gp_scratch8; int data1; int data0; } ;
struct TYPE_3__ {TYPE_2__ internal; } ;
struct amdgpu_device {TYPE_1__ vcn; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct amdgpu_ring*,int) ;

void FUNC_2(struct amdgpu_ring *VAR_2, uint32_t VAR_3,
    uint32_t VAR_4, uint32_t VAR_5)
{
 struct amdgpu_device *VAR_6 = VAR_2->adev;

 FUNC_1(VAR_2, FUNC_0(VAR_6->vcn.internal.data0, 0));
 FUNC_1(VAR_2, VAR_3 << 2);

 FUNC_1(VAR_2, FUNC_0(VAR_6->vcn.internal.data1, 0));
 FUNC_1(VAR_2, VAR_4);

 FUNC_1(VAR_2, FUNC_0(VAR_6->vcn.internal.gp_scratch8, 0));
 FUNC_1(VAR_2, VAR_5);

 FUNC_1(VAR_2, FUNC_0(VAR_6->vcn.internal.cmd, 0));

 FUNC_1(VAR_2, VAR_1 | (VAR_0 << 1));
}
