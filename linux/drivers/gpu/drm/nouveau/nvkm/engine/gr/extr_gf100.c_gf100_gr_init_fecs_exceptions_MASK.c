
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct gf100_gr {TYPE_3__ base; scalar_t__ firmware; } ;


 int FUNC_0 (int ,int,int const) ;

void
FUNC_1(struct gf100_gr *VAR_0)
{
 const u32 VAR_1 = VAR_0->firmware ? 0x000e0000 : 0x000e0001;
 FUNC_0(VAR_0->base.engine.subdev.device, 0x409c24, VAR_1);
}
