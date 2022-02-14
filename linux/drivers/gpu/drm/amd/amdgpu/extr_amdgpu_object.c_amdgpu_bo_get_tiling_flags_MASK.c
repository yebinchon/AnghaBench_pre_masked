
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int resv; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct amdgpu_bo {int tiling_flags; TYPE_2__ tbo; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct amdgpu_bo *VAR_0, u64 *VAR_1)
{
 FUNC_0(VAR_0->tbo.base.resv);

 if (VAR_1)
  *VAR_1 = VAR_0->tiling_flags;
}
