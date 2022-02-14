
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvkm_memory {int dummy; } ;
struct TYPE_4__ {int chid; TYPE_1__* inst; } ;
struct gk104_fifo_chan {TYPE_2__ base; } ;
struct TYPE_3__ {int addr; } ;


 int FUNC_0 (struct nvkm_memory*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_1(struct gk104_fifo_chan *VAR_0,
   struct nvkm_memory *VAR_1, u32 VAR_2)
{
 FUNC_0(VAR_1, VAR_2 + 0, VAR_0->base.chid);
 FUNC_0(VAR_1, VAR_2 + 4, VAR_0->base.inst->addr >> 12);
}
