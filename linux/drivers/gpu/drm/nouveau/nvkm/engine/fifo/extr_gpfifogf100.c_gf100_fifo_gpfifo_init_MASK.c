
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
struct TYPE_8__ {int chid; TYPE_2__* inst; } ;
struct gf100_fifo_chan {int killed; int head; TYPE_3__ base; struct gf100_fifo* fifo; } ;
struct TYPE_9__ {struct nvkm_device* device; } ;
struct TYPE_10__ {TYPE_4__ subdev; } ;
struct TYPE_6__ {TYPE_5__ engine; } ;
struct gf100_fifo {TYPE_1__ base; } ;
struct TYPE_7__ {int addr; } ;


 struct gf100_fifo_chan* FUNC_0 (struct nvkm_fifo_chan*) ;
 int FUNC_1 (struct gf100_fifo*) ;
 int FUNC_2 (struct gf100_fifo*,struct gf100_fifo_chan*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_5(struct nvkm_fifo_chan *VAR_0)
{
 struct gf100_fifo_chan *VAR_1 = FUNC_0(VAR_0);
 struct gf100_fifo *VAR_2 = VAR_1->fifo;
 struct nvkm_device *VAR_3 = VAR_2->base.engine.subdev.device;
 u32 VAR_4 = VAR_1->base.inst->addr >> 12;
 u32 VAR_5 = VAR_1->base.chid * 8;

 FUNC_4(VAR_3, 0x003000 + VAR_5, 0xc0000000 | VAR_4);

 if (FUNC_3(&VAR_1->head) && !VAR_1->killed) {
  FUNC_2(VAR_2, VAR_1);
  FUNC_4(VAR_3, 0x003004 + VAR_5, 0x001f0001);
  FUNC_1(VAR_2);
 }
}
