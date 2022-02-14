
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_gr {int dummy; } ;
struct nvkm_fifo {int dummy; } ;
struct nvkm_fb_tile {int zcomp; int addr; int limit; int pitch; } ;
struct nvkm_device {int chipset; struct nvkm_fifo* fifo; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct nv40_gr {TYPE_3__ base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (TYPE_3__*) ;
 struct nv40_gr* FUNC_17 (struct nvkm_gr*) ;
 int FUNC_18 (struct nvkm_fifo*,unsigned long*) ;
 int FUNC_19 (struct nvkm_fifo*,unsigned long*) ;
 int FUNC_20 (struct nvkm_device*,int ,int ) ;

__attribute__((used)) static void
FUNC_21(struct nvkm_gr *VAR_0, int VAR_1, struct nvkm_fb_tile *VAR_2)
{
 struct nv40_gr *VAR_3 = FUNC_17(VAR_0);
 struct nvkm_device *VAR_4 = VAR_3->base.engine.subdev.device;
 struct nvkm_fifo *VAR_5 = VAR_4->fifo;
 unsigned long VAR_6;

 FUNC_18(VAR_5, &VAR_6);
 FUNC_16(&VAR_3->base);

 switch (VAR_4->chipset) {
 case 0x40:
 case 0x41:
 case 0x42:
 case 0x43:
 case 0x45:
  FUNC_20(VAR_4, FUNC_2(VAR_1), VAR_2->pitch);
  FUNC_20(VAR_4, FUNC_1(VAR_1), VAR_2->limit);
  FUNC_20(VAR_4, FUNC_0(VAR_1), VAR_2->addr);
  FUNC_20(VAR_4, FUNC_6(VAR_1), VAR_2->pitch);
  FUNC_20(VAR_4, FUNC_5(VAR_1), VAR_2->limit);
  FUNC_20(VAR_4, FUNC_4(VAR_1), VAR_2->addr);
  switch (VAR_4->chipset) {
  case 0x40:
  case 0x45:
   FUNC_20(VAR_4, FUNC_3(VAR_1), VAR_2->zcomp);
   FUNC_20(VAR_4, FUNC_7(VAR_1), VAR_2->zcomp);
   break;
  case 0x41:
  case 0x42:
  case 0x43:
   FUNC_20(VAR_4, FUNC_8(VAR_1), VAR_2->zcomp);
   FUNC_20(VAR_4, FUNC_9(VAR_1), VAR_2->zcomp);
   break;
  default:
   break;
  }
  break;
 case 0x47:
 case 0x49:
 case 0x4b:
  FUNC_20(VAR_4, FUNC_12(VAR_1), VAR_2->pitch);
  FUNC_20(VAR_4, FUNC_11(VAR_1), VAR_2->limit);
  FUNC_20(VAR_4, FUNC_10(VAR_1), VAR_2->addr);
  FUNC_20(VAR_4, FUNC_6(VAR_1), VAR_2->pitch);
  FUNC_20(VAR_4, FUNC_5(VAR_1), VAR_2->limit);
  FUNC_20(VAR_4, FUNC_4(VAR_1), VAR_2->addr);
  FUNC_20(VAR_4, FUNC_13(VAR_1), VAR_2->zcomp);
  FUNC_20(VAR_4, FUNC_14(VAR_1), VAR_2->zcomp);
  break;
 default:
  FUNC_15(1);
  break;
 }

 FUNC_19(VAR_5, &VAR_6);
}
