
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_uvd_inst; int num_enc_rings; } ;
struct amdgpu_device {int flags; TYPE_1__ uvd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_5(void *VAR_4)
{
 struct amdgpu_device *VAR_5 = (struct amdgpu_device *)VAR_4;
 VAR_5->uvd.num_uvd_inst = 1;

 if (!(VAR_5->flags & VAR_0) &&
     (FUNC_0(VAR_3) & VAR_1))
  return -VAR_2;

 FUNC_4(VAR_5);

 if (FUNC_1(VAR_5)) {
  VAR_5->uvd.num_enc_rings = 2;
  FUNC_2(VAR_5);
 }

 FUNC_3(VAR_5);

 return 0;
}
