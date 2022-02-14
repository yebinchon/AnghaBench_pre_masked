
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_fifo_chan {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_8__ {int chid; } ;
struct gk104_fifo_chan {int runl; int head; TYPE_4__ base; struct gk104_fifo* fifo; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct TYPE_7__ {TYPE_2__ engine; } ;
struct gk104_fifo {TYPE_3__ base; } ;


 struct gk104_fifo_chan* FUNC_0 (struct nvkm_fifo_chan*) ;
 int FUNC_1 (struct gk104_fifo_chan*) ;
 int FUNC_2 (struct gk104_fifo*,struct gk104_fifo_chan*) ;
 int FUNC_3 (struct gk104_fifo*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nvkm_device*,int,int,int) ;
 int FUNC_6 (struct nvkm_device*,int,int) ;

void
FUNC_7(struct nvkm_fifo_chan *VAR_0)
{
 struct gk104_fifo_chan *VAR_1 = FUNC_0(VAR_0);
 struct gk104_fifo *VAR_2 = VAR_1->fifo;
 struct nvkm_device *VAR_3 = VAR_2->base.engine.subdev.device;
 u32 VAR_4 = VAR_1->base.chid * 8;

 if (!FUNC_4(&VAR_1->head)) {
  FUNC_2(VAR_2, VAR_1);
  FUNC_5(VAR_3, 0x800004 + VAR_4, 0x00000800, 0x00000800);
  FUNC_1(VAR_1);
  FUNC_3(VAR_2, VAR_1->runl);
 }

 FUNC_6(VAR_3, 0x800000 + VAR_4, 0x00000000);
}
