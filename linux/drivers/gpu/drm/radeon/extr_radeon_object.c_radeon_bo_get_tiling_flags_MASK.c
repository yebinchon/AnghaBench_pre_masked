
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int resv; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct radeon_bo {int pitch; int tiling_flags; TYPE_2__ tbo; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct radeon_bo *VAR_0,
    uint32_t *VAR_1,
    uint32_t *VAR_2)
{
 FUNC_0(VAR_0->tbo.base.resv);

 if (VAR_1)
  *VAR_1 = VAR_0->tiling_flags;
 if (VAR_2)
  *VAR_2 = VAR_0->pitch;
}
