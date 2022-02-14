
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct TYPE_3__ {int cmd; int data1; int data0; int context_id; } ;
struct TYPE_4__ {TYPE_1__ internal; } ;
struct amdgpu_device {TYPE_2__ vcn; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct amdgpu_ring*,int) ;
 int FUNC_3 (int) ;

void FUNC_4(struct amdgpu_ring *VAR_4, u64 VAR_5, u64 VAR_6,
    unsigned VAR_7)
{
 struct amdgpu_device *VAR_8 = VAR_4->adev;

 FUNC_1(VAR_7 & VAR_0);
 FUNC_2(VAR_4, FUNC_0(VAR_8->vcn.internal.context_id, 0));
 FUNC_2(VAR_4, VAR_6);

 FUNC_2(VAR_4, FUNC_0(VAR_8->vcn.internal.data0, 0));
 FUNC_2(VAR_4, VAR_5 & 0xffffffff);

 FUNC_2(VAR_4, FUNC_0(VAR_8->vcn.internal.data1, 0));
 FUNC_2(VAR_4, FUNC_3(VAR_5) & 0xff);

 FUNC_2(VAR_4, FUNC_0(VAR_8->vcn.internal.cmd, 0));
 FUNC_2(VAR_4, VAR_3 | (VAR_1 << 1));

 FUNC_2(VAR_4, FUNC_0(VAR_8->vcn.internal.data0, 0));
 FUNC_2(VAR_4, 0);

 FUNC_2(VAR_4, FUNC_0(VAR_8->vcn.internal.data1, 0));
 FUNC_2(VAR_4, 0);

 FUNC_2(VAR_4, FUNC_0(VAR_8->vcn.internal.cmd, 0));

 FUNC_2(VAR_4, VAR_3 | (VAR_2 << 1));
}
