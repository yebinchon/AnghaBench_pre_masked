
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* funcs; } ;
struct TYPE_6__ {TYPE_2__ rlc; } ;
struct amdgpu_device {TYPE_3__ gfx; } ;
struct TYPE_4__ {int (* resume ) (struct amdgpu_device*) ;} ;


 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0)
{
 int VAR_1;
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_0;

 FUNC_0(VAR_2);


 VAR_1 = VAR_2->gfx.rlc.funcs->resume(VAR_2);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_1(VAR_2);
 if (VAR_1)
  return VAR_1;

 return VAR_1;
}
