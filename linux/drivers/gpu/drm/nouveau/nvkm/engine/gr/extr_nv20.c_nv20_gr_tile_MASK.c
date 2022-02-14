
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_gr {int dummy; } ;
struct nvkm_fifo {int dummy; } ;
struct nvkm_fb_tile {int limit; int pitch; int addr; int zcomp; } ;
struct nvkm_device {int chipset; struct nvkm_fifo* fifo; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct nv20_gr {TYPE_3__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*) ;
 struct nv20_gr* FUNC_5 (struct nvkm_gr*) ;
 int FUNC_6 (struct nvkm_fifo*,unsigned long*) ;
 int FUNC_7 (struct nvkm_fifo*,unsigned long*) ;
 int FUNC_8 (struct nvkm_device*,int ,int) ;

void
FUNC_9(struct nvkm_gr *VAR_2, int VAR_3, struct nvkm_fb_tile *VAR_4)
{
 struct nv20_gr *VAR_5 = FUNC_5(VAR_2);
 struct nvkm_device *VAR_6 = VAR_5->base.engine.subdev.device;
 struct nvkm_fifo *VAR_7 = VAR_6->fifo;
 unsigned long VAR_8;

 FUNC_6(VAR_7, &VAR_8);
 FUNC_4(&VAR_5->base);

 FUNC_8(VAR_6, FUNC_1(VAR_3), VAR_4->limit);
 FUNC_8(VAR_6, FUNC_2(VAR_3), VAR_4->pitch);
 FUNC_8(VAR_6, FUNC_0(VAR_3), VAR_4->addr);

 FUNC_8(VAR_6, VAR_1, 0x00EA0030 + 4 * VAR_3);
 FUNC_8(VAR_6, VAR_0, VAR_4->limit);
 FUNC_8(VAR_6, VAR_1, 0x00EA0050 + 4 * VAR_3);
 FUNC_8(VAR_6, VAR_0, VAR_4->pitch);
 FUNC_8(VAR_6, VAR_1, 0x00EA0010 + 4 * VAR_3);
 FUNC_8(VAR_6, VAR_0, VAR_4->addr);

 if (VAR_6->chipset != 0x34) {
  FUNC_8(VAR_6, FUNC_3(VAR_3), VAR_4->zcomp);
  FUNC_8(VAR_6, VAR_1, 0x00ea0090 + 4 * VAR_3);
  FUNC_8(VAR_6, VAR_0, VAR_4->zcomp);
 }

 FUNC_7(VAR_7, &VAR_8);
}
