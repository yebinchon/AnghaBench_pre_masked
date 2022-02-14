
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_ring {size_t me; struct amdgpu_device* adev; } ;
struct TYPE_5__ {int scratch9; int cmd; } ;
struct TYPE_8__ {TYPE_3__* inst; TYPE_1__ internal; } ;
struct amdgpu_device {unsigned int usec_timeout; TYPE_4__ vcn; } ;
struct TYPE_6__ {int scratch9; } ;
struct TYPE_7__ {TYPE_2__ external; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct amdgpu_ring*,int) ;
 int FUNC_4 (struct amdgpu_ring*) ;
 int FUNC_5 (struct amdgpu_ring*,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_ring *VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_3->adev;
 uint32_t VAR_5 = 0;
 unsigned VAR_6;
 int VAR_7;

 FUNC_2(VAR_4->vcn.inst[VAR_3->me].external.scratch9, 0xCAFEDEAD);
 VAR_7 = FUNC_3(VAR_3, 4);
 if (VAR_7)
  return VAR_7;
 FUNC_5(VAR_3, FUNC_0(VAR_4->vcn.internal.cmd, 0));
 FUNC_5(VAR_3, VAR_2 | (VAR_1 << 1));
 FUNC_5(VAR_3, FUNC_0(VAR_4->vcn.internal.scratch9, 0));
 FUNC_5(VAR_3, 0xDEADBEEF);
 FUNC_4(VAR_3);
 for (VAR_6 = 0; VAR_6 < VAR_4->usec_timeout; VAR_6++) {
  VAR_5 = FUNC_1(VAR_4->vcn.inst[VAR_3->me].external.scratch9);
  if (VAR_5 == 0xDEADBEEF)
   break;
  FUNC_6(1);
 }

 if (VAR_6 >= VAR_4->usec_timeout)
  VAR_7 = -VAR_0;

 return VAR_7;
}
