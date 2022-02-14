
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
struct nvkm_memory {int dummy; } ;
struct nvkm_fifo_chan {int dummy; } ;
struct nvkm_device {TYPE_3__* imem; } ;
struct nv04_fifo_ramfc {unsigned long long bits; unsigned long long regs; unsigned long long ctxs; int ctxp; int regp; } ;
struct TYPE_9__ {int chid; } ;
struct nv04_fifo_chan {int ramfc; TYPE_4__ base; struct nv04_fifo* fifo; } ;
struct TYPE_6__ {struct nvkm_device* device; } ;
struct TYPE_7__ {TYPE_1__ subdev; } ;
struct TYPE_10__ {int nr; int lock; TYPE_2__ engine; } ;
struct nv04_fifo {TYPE_5__ base; struct nv04_fifo_ramfc* ramfc; } ;
struct TYPE_8__ {struct nvkm_memory* ramfc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct nv04_fifo_chan* FUNC_0 (struct nvkm_fifo_chan*) ;
 int FUNC_1 (struct nvkm_memory*) ;
 int FUNC_2 (struct nvkm_memory*) ;
 int FUNC_3 (struct nvkm_device*,int ,int,int ) ;
 int FUNC_4 (struct nvkm_device*,int ) ;
 int FUNC_5 (struct nvkm_memory*,int) ;
 int FUNC_6 (struct nvkm_memory*,int,int) ;
 int FUNC_7 (struct nvkm_device*,int ,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

void
FUNC_10(struct nvkm_fifo_chan *VAR_8)
{
 struct nv04_fifo_chan *VAR_9 = FUNC_0(VAR_8);
 struct nv04_fifo *VAR_10 = VAR_9->fifo;
 struct nvkm_device *VAR_11 = VAR_10->base.engine.subdev.device;
 struct nvkm_memory *VAR_12 = VAR_11->imem->ramfc;
 const struct nv04_fifo_ramfc *VAR_13;
 unsigned long VAR_14;
 u32 VAR_15 = VAR_10->base.nr - 1;
 u32 VAR_16 = VAR_9->ramfc;
 u32 VAR_17;


 FUNC_8(&VAR_10->base.lock, VAR_14);
 FUNC_7(VAR_11, VAR_4, 0);


 VAR_17 = FUNC_4(VAR_11, VAR_2) & VAR_15;
 if (VAR_17 == VAR_9->base.chid) {
  FUNC_3(VAR_11, VAR_5, 0x00000001, 0);
  FUNC_7(VAR_11, VAR_1, 0);
  FUNC_3(VAR_11, VAR_6, 0x00000001, 0);

  VAR_13 = VAR_10->ramfc;
  FUNC_2(VAR_12);
  do {
   u32 VAR_18 = ((1ULL << VAR_13->bits) - 1) << VAR_13->regs;
   u32 VAR_19 = ((1ULL << VAR_13->bits) - 1) << VAR_13->ctxs;
   u32 VAR_20 = (FUNC_4(VAR_11, VAR_13->regp) & VAR_18) >> VAR_13->regs;
   u32 VAR_21 = (FUNC_5(VAR_12, VAR_13->ctxp + VAR_16) & ~VAR_19);
   FUNC_6(VAR_12, VAR_13->ctxp + VAR_16, VAR_21 | (VAR_20 << VAR_13->ctxs));
  } while ((++VAR_13)->bits);
  FUNC_1(VAR_12);

  VAR_13 = VAR_10->ramfc;
  do {
   FUNC_7(VAR_11, VAR_13->regp, 0x00000000);
  } while ((++VAR_13)->bits);

  FUNC_7(VAR_11, VAR_0, 0);
  FUNC_7(VAR_11, VAR_3, 0);
  FUNC_7(VAR_11, VAR_2, VAR_15);
  FUNC_7(VAR_11, VAR_1, 1);
  FUNC_7(VAR_11, VAR_6, 1);
 }


 FUNC_3(VAR_11, VAR_7, 1 << VAR_9->base.chid, 0);
 FUNC_7(VAR_11, VAR_4, 1);
 FUNC_9(&VAR_10->base.lock, VAR_14);
}
