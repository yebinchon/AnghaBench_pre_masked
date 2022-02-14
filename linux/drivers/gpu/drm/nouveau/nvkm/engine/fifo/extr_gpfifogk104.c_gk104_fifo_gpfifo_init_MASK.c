
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_fifo_chan {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_10__ {int chid; TYPE_4__* inst; } ;
struct gk104_fifo_chan {int runl; int killed; int head; TYPE_5__ base; struct gk104_fifo* fifo; } ;
struct TYPE_6__ {struct nvkm_device* device; } ;
struct TYPE_7__ {TYPE_1__ subdev; } ;
struct TYPE_8__ {TYPE_2__ engine; } ;
struct gk104_fifo {TYPE_3__ base; } ;
struct TYPE_9__ {int addr; } ;


 struct gk104_fifo_chan* FUNC_0 (struct nvkm_fifo_chan*) ;
 int FUNC_1 (struct gk104_fifo*,struct gk104_fifo_chan*) ;
 int FUNC_2 (struct gk104_fifo*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct nvkm_device*,int,int,int) ;
 int FUNC_5 (struct nvkm_device*,int,int) ;

void
FUNC_6(struct nvkm_fifo_chan *VAR_0)
{
 struct gk104_fifo_chan *VAR_1 = FUNC_0(VAR_0);
 struct gk104_fifo *VAR_2 = VAR_1->fifo;
 struct nvkm_device *VAR_3 = VAR_2->base.engine.subdev.device;
 u32 VAR_4 = VAR_1->base.inst->addr >> 12;
 u32 VAR_5 = VAR_1->base.chid * 8;

 FUNC_4(VAR_3, 0x800004 + VAR_5, 0x000f0000, VAR_1->runl << 16);
 FUNC_5(VAR_3, 0x800000 + VAR_5, 0x80000000 | VAR_4);

 if (FUNC_3(&VAR_1->head) && !VAR_1->killed) {
  FUNC_1(VAR_2, VAR_1);
  FUNC_4(VAR_3, 0x800004 + VAR_5, 0x00000400, 0x00000400);
  FUNC_2(VAR_2, VAR_1->runl);
  FUNC_4(VAR_3, 0x800004 + VAR_5, 0x00000400, 0x00000400);
 }
}
