
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct nvkm_memory {int dummy; } ;
struct TYPE_6__ {int chid; TYPE_1__* inst; } ;
struct gk104_fifo_chan {TYPE_2__ base; TYPE_4__* fifo; } ;
struct TYPE_7__ {struct nvkm_memory* mem; } ;
struct TYPE_8__ {TYPE_3__ user; } ;
struct TYPE_5__ {scalar_t__ addr; } ;


 int FUNC_0 (scalar_t__ const) ;
 scalar_t__ FUNC_1 (struct nvkm_memory*) ;
 int FUNC_2 (struct nvkm_memory*,scalar_t__,int) ;
 int FUNC_3 (scalar_t__ const) ;

void
FUNC_4(struct gk104_fifo_chan *VAR_0,
   struct nvkm_memory *VAR_1, u32 VAR_2)
{
 struct nvkm_memory *VAR_3 = VAR_0->fifo->user.mem;
 const u64 VAR_4 = FUNC_1(VAR_3) + (VAR_0->base.chid * 0x200);
 const u64 VAR_5 = VAR_0->base.inst->addr;

 FUNC_2(VAR_1, VAR_2 + 0x0, FUNC_0(VAR_4));
 FUNC_2(VAR_1, VAR_2 + 0x4, FUNC_3(VAR_4));
 FUNC_2(VAR_1, VAR_2 + 0x8, FUNC_0(VAR_5) | VAR_0->base.chid);
 FUNC_2(VAR_1, VAR_2 + 0xc, FUNC_3(VAR_5));
}
