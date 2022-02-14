
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvkm_instmem {int ramfc; } ;
struct nvkm_fifo_chan {int dummy; } ;
struct nvkm_engine {int dummy; } ;
struct nvkm_device {struct nvkm_instmem* imem; } ;
struct TYPE_7__ {int chid; } ;
struct nv04_fifo_chan {scalar_t__ ramfc; TYPE_3__ base; struct nv04_fifo* fifo; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct TYPE_8__ {int nr; int lock; TYPE_2__ engine; } ;
struct nv04_fifo {TYPE_4__ base; } ;


 struct nv04_fifo_chan* FUNC_0 (struct nvkm_fifo_chan*) ;
 int FUNC_1 (struct nvkm_engine*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nvkm_device*,int,int,int) ;
 int FUNC_5 (struct nvkm_device*,int) ;
 int FUNC_6 (int ,scalar_t__,int) ;
 int FUNC_7 (struct nvkm_device*,scalar_t__,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_10(struct nvkm_fifo_chan *VAR_0,
     struct nvkm_engine *VAR_1, bool VAR_2)
{
 struct nv04_fifo_chan *VAR_3 = FUNC_0(VAR_0);
 struct nv04_fifo *VAR_4 = VAR_3->fifo;
 struct nvkm_device *VAR_5 = VAR_4->base.engine.subdev.device;
 struct nvkm_instmem *VAR_6 = VAR_5->imem;
 unsigned long VAR_7;
 u32 VAR_8, VAR_9;
 int VAR_10;

 if (!FUNC_1(VAR_1, &VAR_8, &VAR_9))
  return 0;

 FUNC_8(&VAR_4->base.lock, VAR_7);
 FUNC_4(VAR_5, 0x002500, 0x00000001, 0x00000000);

 VAR_10 = FUNC_5(VAR_5, 0x003204) & (VAR_4->base.nr - 1);
 if (VAR_10 == VAR_3->base.chid)
  FUNC_7(VAR_5, VAR_8, 0x00000000);
 FUNC_3(VAR_6->ramfc);
 FUNC_6(VAR_6->ramfc, VAR_3->ramfc + VAR_9, 0x00000000);
 FUNC_2(VAR_6->ramfc);

 FUNC_4(VAR_5, 0x002500, 0x00000001, 0x00000001);
 FUNC_9(&VAR_4->base.lock, VAR_7);
 return 0;
}
