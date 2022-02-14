
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_5__ {int device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct TYPE_7__ {TYPE_2__ engine; } ;
struct gf100_gr {size_t gpc_nr; int* tpc_nr; TYPE_3__ base; TYPE_4__* func; } ;
struct TYPE_8__ {size_t tpc_nr; } ;


 int FUNC_0 (int ,int,size_t) ;

void
FUNC_1(struct gf100_gr *VAR_0)
{
 u32 VAR_1, VAR_2;
 for (VAR_1 = 0, VAR_2 = 0; VAR_2 < VAR_0->gpc_nr; VAR_2++)
  VAR_1 |= ((1 << VAR_0->tpc_nr[VAR_2]) - 1) << (VAR_2 * VAR_0->func->tpc_nr);
 FUNC_0(VAR_0->base.engine.subdev.device, 0x4041c4, VAR_1);
}
