
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_instmem {int ramfc; } ;
struct nvkm_fifo_chan {int dummy; } ;
struct TYPE_10__ {size_t index; } ;
struct nvkm_engine {TYPE_4__ subdev; } ;
struct nvkm_device {struct nvkm_instmem* imem; } ;
struct TYPE_11__ {int chid; } ;
struct nv04_fifo_chan {int ramfc; TYPE_5__ base; TYPE_3__** engn; struct nv04_fifo* fifo; } ;
struct TYPE_7__ {struct nvkm_device* device; } ;
struct TYPE_8__ {TYPE_1__ subdev; } ;
struct TYPE_12__ {int nr; int lock; TYPE_2__ engine; } ;
struct nv04_fifo {TYPE_6__ base; } ;
struct TYPE_9__ {int addr; } ;


 struct nv04_fifo_chan* FUNC_0 (struct nvkm_fifo_chan*) ;
 int FUNC_1 (struct nvkm_engine*,int*,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nvkm_device*,int,int,int) ;
 int FUNC_5 (struct nvkm_device*,int) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (struct nvkm_device*,int,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_10(struct nvkm_fifo_chan *VAR_0,
     struct nvkm_engine *VAR_1)
{
 struct nv04_fifo_chan *VAR_2 = FUNC_0(VAR_0);
 struct nv04_fifo *VAR_3 = VAR_2->fifo;
 struct nvkm_device *VAR_4 = VAR_3->base.engine.subdev.device;
 struct nvkm_instmem *VAR_5 = VAR_4->imem;
 unsigned long VAR_6;
 u32 VAR_7, VAR_8, VAR_9;
 int VAR_10;

 if (!FUNC_1(VAR_1, &VAR_8, &VAR_9))
  return 0;
 VAR_7 = VAR_2->engn[VAR_1->subdev.index]->addr >> 4;

 FUNC_8(&VAR_3->base.lock, VAR_6);
 FUNC_4(VAR_4, 0x002500, 0x00000001, 0x00000000);

 VAR_10 = FUNC_5(VAR_4, 0x003204) & (VAR_3->base.nr - 1);
 if (VAR_10 == VAR_2->base.chid)
  FUNC_7(VAR_4, VAR_8, VAR_7);
 FUNC_3(VAR_5->ramfc);
 FUNC_6(VAR_5->ramfc, VAR_2->ramfc + VAR_9, VAR_7);
 FUNC_2(VAR_5->ramfc);

 FUNC_4(VAR_4, 0x002500, 0x00000001, 0x00000001);
 FUNC_9(&VAR_3->base.lock, VAR_6);
 return 0;
}
