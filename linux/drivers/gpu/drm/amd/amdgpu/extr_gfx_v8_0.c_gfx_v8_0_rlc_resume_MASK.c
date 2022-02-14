
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
struct TYPE_4__ {int (* start ) (struct amdgpu_device*) ;int (* reset ) (struct amdgpu_device*) ;int (* stop ) (struct amdgpu_device*) ;} ;


 scalar_t__ FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_6(struct amdgpu_device *VAR_0)
{
 if (FUNC_0(VAR_0)) {
  FUNC_1(VAR_0);
  return 0;
 }

 VAR_0->gfx.rlc.funcs->stop(VAR_0);
 VAR_0->gfx.rlc.funcs->reset(VAR_0);
 FUNC_2(VAR_0);
 VAR_0->gfx.rlc.funcs->start(VAR_0);

 return 0;
}
