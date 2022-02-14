
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* funcs; } ;
struct TYPE_6__ {TYPE_2__ rlc; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_3__ gfx; } ;
struct TYPE_4__ {int (* resume ) (struct amdgpu_device*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_7(void *VAR_1)
{
 int VAR_2;
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_1;

 if (!FUNC_0(VAR_3))
  FUNC_4(VAR_3);

 FUNC_1(VAR_3);

 VAR_2 = FUNC_3(VAR_3);
 if (VAR_2)
  return VAR_2;

 VAR_2 = VAR_3->gfx.rlc.funcs->resume(VAR_3);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_3);
 if (VAR_2)
  return VAR_2;

 if (VAR_3->asic_type != VAR_0) {
  VAR_2 = FUNC_5(VAR_3);
  if (VAR_2)
   return VAR_2;
 }

 return VAR_2;
}
