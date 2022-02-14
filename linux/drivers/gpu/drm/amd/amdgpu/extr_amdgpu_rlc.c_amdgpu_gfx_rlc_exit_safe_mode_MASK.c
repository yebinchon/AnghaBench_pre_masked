
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int in_safe_mode; TYPE_1__* funcs; } ;
struct TYPE_5__ {TYPE_3__ rlc; } ;
struct amdgpu_device {int cg_flags; TYPE_2__ gfx; } ;
struct TYPE_4__ {int (* unset_safe_mode ) (struct amdgpu_device*) ;int (* is_rlc_enabled ) (struct amdgpu_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;

void FUNC_2(struct amdgpu_device *VAR_3)
{
 if (!(VAR_3->gfx.rlc.in_safe_mode))
  return;


 if (!VAR_3->gfx.rlc.funcs->is_rlc_enabled(VAR_3))
  return;

 if (VAR_3->cg_flags &
     (VAR_1 | VAR_2 |
      VAR_0)) {
  VAR_3->gfx.rlc.funcs->unset_safe_mode(VAR_3);
  VAR_3->gfx.rlc.in_safe_mode = 0;
 }
}
