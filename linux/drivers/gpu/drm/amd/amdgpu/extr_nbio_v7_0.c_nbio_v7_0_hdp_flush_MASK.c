
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_ring {TYPE_1__* funcs; } ;
struct TYPE_4__ {int reg_offset; } ;
struct amdgpu_device {TYPE_2__ rmmio_remap; } ;
struct TYPE_3__ {int emit_wreg; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct amdgpu_ring*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_1,
    struct amdgpu_ring *VAR_2)
{
 if (!VAR_2 || !VAR_2->funcs->emit_wreg)
  FUNC_0((VAR_1->rmmio_remap.reg_offset + VAR_0) >> 2, 0);
 else
  FUNC_1(VAR_2, (VAR_1->rmmio_remap.reg_offset + VAR_0) >> 2, 0);
}
