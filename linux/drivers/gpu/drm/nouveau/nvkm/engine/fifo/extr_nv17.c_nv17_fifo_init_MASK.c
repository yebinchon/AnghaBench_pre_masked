
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvkm_ramht {int bits; TYPE_3__* gpuobj; } ;
struct nvkm_memory {int dummy; } ;
struct nvkm_instmem {struct nvkm_memory* ramfc; struct nvkm_memory* ramro; struct nvkm_ramht* ramht; } ;
struct nvkm_fifo {int dummy; } ;
struct nvkm_device {struct nvkm_instmem* imem; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct TYPE_8__ {int nr; TYPE_2__ engine; } ;
struct nv04_fifo {TYPE_4__ base; } ;
struct TYPE_7__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct nv04_fifo* FUNC_0 (struct nvkm_fifo*) ;
 int FUNC_1 (struct nvkm_memory*) ;
 int FUNC_2 (struct nvkm_device*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_fifo *VAR_11)
{
 struct nv04_fifo *VAR_12 = FUNC_0(VAR_11);
 struct nvkm_device *VAR_13 = VAR_12->base.engine.subdev.device;
 struct nvkm_instmem *VAR_14 = VAR_13->imem;
 struct nvkm_ramht *VAR_15 = VAR_14->ramht;
 struct nvkm_memory *VAR_16 = VAR_14->ramro;
 struct nvkm_memory *VAR_17 = VAR_14->ramfc;

 FUNC_2(VAR_13, VAR_9, 0x000000ff);
 FUNC_2(VAR_13, VAR_10, 0x0101ffff);

 FUNC_2(VAR_13, VAR_6, (0x03 << 24) |
         ((VAR_15->bits - 9) << 16) |
         (VAR_15->gpuobj->addr >> 8));
 FUNC_2(VAR_13, VAR_7, FUNC_1(VAR_16) >> 8);
 FUNC_2(VAR_13, VAR_5, FUNC_1(VAR_17) >> 8 |
         0x00010000);

 FUNC_2(VAR_13, VAR_1, VAR_12->base.nr - 1);

 FUNC_2(VAR_13, VAR_3, 0xffffffff);
 FUNC_2(VAR_13, VAR_4, 0xffffffff);

 FUNC_2(VAR_13, VAR_0, 1);
 FUNC_2(VAR_13, VAR_8, 1);
 FUNC_2(VAR_13, VAR_2, 1);
}
