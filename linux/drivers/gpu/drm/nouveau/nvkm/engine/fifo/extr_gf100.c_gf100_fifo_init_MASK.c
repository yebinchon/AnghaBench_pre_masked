
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nvkm_fifo {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_10__ {TYPE_4__* bar; } ;
struct TYPE_6__ {struct nvkm_device* device; } ;
struct TYPE_7__ {TYPE_1__ subdev; } ;
struct TYPE_8__ {TYPE_2__ engine; } ;
struct gf100_fifo {int pbdma_nr; TYPE_5__ user; TYPE_3__ base; } ;
struct TYPE_9__ {int addr; } ;


 struct gf100_fifo* FUNC_0 (struct nvkm_fifo*) ;
 int FUNC_1 (struct nvkm_device*,int,int,int) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_fifo *VAR_0)
{
 struct gf100_fifo *VAR_1 = FUNC_0(VAR_0);
 struct nvkm_device *VAR_2 = VAR_1->base.engine.subdev.device;
 int VAR_3;


 FUNC_2(VAR_2, 0x000204, (1 << VAR_1->pbdma_nr) - 1);
 FUNC_2(VAR_2, 0x002204, (1 << VAR_1->pbdma_nr) - 1);


 if (VAR_1->pbdma_nr >= 3) {
  FUNC_2(VAR_2, 0x002208, ~(1 << 0));
  FUNC_2(VAR_2, 0x00220c, ~(1 << 1));
  FUNC_2(VAR_2, 0x002210, ~(1 << 1));
  FUNC_2(VAR_2, 0x002214, ~(1 << 1));
  FUNC_2(VAR_2, 0x002218, ~(1 << 2));
  FUNC_2(VAR_2, 0x00221c, ~(1 << 1));
 }


 for (VAR_3 = 0; VAR_3 < VAR_1->pbdma_nr; VAR_3++) {
  FUNC_1(VAR_2, 0x04013c + (VAR_3 * 0x2000), 0x10000100, 0x00000000);
  FUNC_2(VAR_2, 0x040108 + (VAR_3 * 0x2000), 0xffffffff);
  FUNC_2(VAR_2, 0x04010c + (VAR_3 * 0x2000), 0xfffffeff);
 }

 FUNC_1(VAR_2, 0x002200, 0x00000001, 0x00000001);
 FUNC_2(VAR_2, 0x002254, 0x10000000 | VAR_1->user.bar->addr >> 12);

 FUNC_2(VAR_2, 0x002100, 0xffffffff);
 FUNC_2(VAR_2, 0x002140, 0x7fffffff);
 FUNC_2(VAR_2, 0x002628, 0x00000001);
}
