
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_fifo_chan {int dummy; } ;
struct TYPE_2__ {int chid; } ;
struct gk104_fifo_chan {int runl; TYPE_1__ base; } ;


 struct gk104_fifo_chan* FUNC_0 (struct nvkm_fifo_chan*) ;

__attribute__((used)) static u32
FUNC_1(struct nvkm_fifo_chan *VAR_0)
{
 struct gk104_fifo_chan *VAR_1 = FUNC_0(VAR_0);
 return (VAR_1->runl << 16) | VAR_1->base.chid;
}
