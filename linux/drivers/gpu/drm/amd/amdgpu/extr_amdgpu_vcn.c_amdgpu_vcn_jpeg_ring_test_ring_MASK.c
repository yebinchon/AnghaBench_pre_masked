
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
struct TYPE_5__ {int jpeg_pitch; } ;
struct TYPE_8__ {TYPE_3__* inst; TYPE_1__ internal; } ;
struct amdgpu_device {unsigned int usec_timeout; TYPE_4__ vcn; } ;
struct TYPE_6__ {int jpeg_pitch; } ;
struct TYPE_7__ {TYPE_2__ external; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct amdgpu_ring*,int) ;
 int FUNC_4 (struct amdgpu_ring*) ;
 int FUNC_5 (struct amdgpu_ring*,int) ;
 int FUNC_6 (int) ;

int FUNC_7(struct amdgpu_ring *VAR_1)
{
 struct amdgpu_device *VAR_2 = VAR_1->adev;
 uint32_t VAR_3 = 0;
 unsigned VAR_4;
 int VAR_5;

 FUNC_2(VAR_2->vcn.inst[VAR_1->me].external.jpeg_pitch, 0xCAFEDEAD);
 VAR_5 = FUNC_3(VAR_1, 3);
 if (VAR_5)
  return VAR_5;

 FUNC_5(VAR_1, FUNC_0(VAR_2->vcn.internal.jpeg_pitch, 0));
 FUNC_5(VAR_1, 0xDEADBEEF);
 FUNC_4(VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_2->usec_timeout; VAR_4++) {
  VAR_3 = FUNC_1(VAR_2->vcn.inst[VAR_1->me].external.jpeg_pitch);
  if (VAR_3 == 0xDEADBEEF)
   break;
  FUNC_6(1);
 }

 if (VAR_4 >= VAR_2->usec_timeout)
  VAR_5 = -VAR_0;

 return VAR_5;
}
