
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvkm_memory {int dummy; } ;
struct TYPE_2__ {int chid; } ;
struct gk104_fifo_chan {TYPE_1__ base; } ;


 int FUNC_0 (struct nvkm_memory*,scalar_t__,int) ;

void
FUNC_1(struct gk104_fifo_chan *VAR_0,
   struct nvkm_memory *VAR_1, u32 VAR_2)
{
 FUNC_0(VAR_1, VAR_2 + 0, VAR_0->base.chid);
 FUNC_0(VAR_1, VAR_2 + 4, 0x00000000);
}
