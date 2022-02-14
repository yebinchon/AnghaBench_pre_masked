
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nvkm_ramht {int bits; TYPE_3__* gpuobj; } ;
struct nvkm_memory {int dummy; } ;
struct nvkm_instmem {struct nvkm_memory* ramfc; struct nvkm_memory* ramro; struct nvkm_ramht* ramht; } ;
struct nvkm_fifo {int dummy; } ;
struct nvkm_fb {TYPE_4__* ram; } ;
struct nvkm_device {int chipset; struct nvkm_instmem* imem; struct nvkm_fb* fb; } ;
struct TYPE_6__ {struct nvkm_device* device; } ;
struct TYPE_7__ {TYPE_1__ subdev; } ;
struct TYPE_10__ {int nr; TYPE_2__ engine; } ;
struct nv04_fifo {TYPE_5__ base; } ;
struct TYPE_9__ {int size; } ;
struct TYPE_8__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct nv04_fifo* FUNC_0 (struct nvkm_fifo*) ;
 int FUNC_1 (struct nvkm_memory*) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_fifo *VAR_8)
{
 struct nv04_fifo *VAR_9 = FUNC_0(VAR_8);
 struct nvkm_device *VAR_10 = VAR_9->base.engine.subdev.device;
 struct nvkm_fb *VAR_11 = VAR_10->fb;
 struct nvkm_instmem *VAR_12 = VAR_10->imem;
 struct nvkm_ramht *VAR_13 = VAR_12->ramht;
 struct nvkm_memory *VAR_14 = VAR_12->ramro;
 struct nvkm_memory *VAR_15 = VAR_12->ramfc;

 FUNC_2(VAR_10, 0x002040, 0x000000ff);
 FUNC_2(VAR_10, 0x002044, 0x2101ffff);
 FUNC_2(VAR_10, 0x002058, 0x00000001);

 FUNC_2(VAR_10, VAR_5, (0x03 << 24) |
         ((VAR_13->bits - 9) << 16) |
         (VAR_13->gpuobj->addr >> 8));
 FUNC_2(VAR_10, VAR_6, FUNC_1(VAR_14) >> 8);

 switch (VAR_10->chipset) {
 case 0x47:
 case 0x49:
 case 0x4b:
  FUNC_2(VAR_10, 0x002230, 0x00000001);

 case 0x40:
 case 0x41:
 case 0x42:
 case 0x43:
 case 0x45:
 case 0x48:
  FUNC_2(VAR_10, 0x002220, 0x00030002);
  break;
 default:
  FUNC_2(VAR_10, 0x002230, 0x00000000);
  FUNC_2(VAR_10, 0x002220, ((VAR_11->ram->size - 512 * 1024 +
           FUNC_1(VAR_15)) >> 16) |
         0x00030000);
  break;
 }

 FUNC_2(VAR_10, VAR_1, VAR_9->base.nr - 1);

 FUNC_2(VAR_10, VAR_3, 0xffffffff);
 FUNC_2(VAR_10, VAR_4, 0xffffffff);

 FUNC_2(VAR_10, VAR_0, 1);
 FUNC_2(VAR_10, VAR_7, 1);
 FUNC_2(VAR_10, VAR_2, 1);
}
