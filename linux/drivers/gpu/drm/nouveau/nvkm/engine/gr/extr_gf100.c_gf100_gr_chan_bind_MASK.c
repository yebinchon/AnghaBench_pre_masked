
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvkm_object {int dummy; } ;
struct nvkm_gpuobj {int dummy; } ;
struct gf100_gr_chan {int mmio_nr; TYPE_4__* mmio_vma; struct gf100_gr* gr; } ;
struct TYPE_5__ {int device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct TYPE_7__ {TYPE_2__ engine; } ;
struct gf100_gr {int size; int* data; int firmware; TYPE_3__ base; } ;
struct TYPE_8__ {int addr; } ;


 struct gf100_gr_chan* FUNC_0 (struct nvkm_object*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nvkm_gpuobj*) ;
 int FUNC_3 (int ,int,int,int,struct nvkm_gpuobj*,struct nvkm_gpuobj**) ;
 int FUNC_4 (struct nvkm_gpuobj*) ;
 int FUNC_5 (struct nvkm_gpuobj*,int,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct nvkm_object *VAR_0, struct nvkm_gpuobj *VAR_1,
     int VAR_2, struct nvkm_gpuobj **VAR_3)
{
 struct gf100_gr_chan *VAR_4 = FUNC_0(VAR_0);
 struct gf100_gr *VAR_5 = VAR_4->gr;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_3(VAR_5->base.engine.subdev.device, VAR_5->size,
         VAR_2, 0, VAR_1, VAR_3);
 if (VAR_6)
  return VAR_6;

 FUNC_4(*VAR_3);
 for (VAR_7 = 0; VAR_7 < VAR_5->size; VAR_7 += 4)
  FUNC_5(*VAR_3, VAR_7, VAR_5->data[VAR_7 / 4]);

 if (!VAR_5->firmware) {
  FUNC_5(*VAR_3, 0x00, VAR_4->mmio_nr / 2);
  FUNC_5(*VAR_3, 0x04, VAR_4->mmio_vma->addr >> 8);
 } else {
  FUNC_5(*VAR_3, 0xf4, 0);
  FUNC_5(*VAR_3, 0xf8, 0);
  FUNC_5(*VAR_3, 0x10, VAR_4->mmio_nr / 2);
  FUNC_5(*VAR_3, 0x14, FUNC_1(VAR_4->mmio_vma->addr));
  FUNC_5(*VAR_3, 0x18, FUNC_6(VAR_4->mmio_vma->addr));
  FUNC_5(*VAR_3, 0x1c, 1);
  FUNC_5(*VAR_3, 0x20, 0);
  FUNC_5(*VAR_3, 0x28, 0);
  FUNC_5(*VAR_3, 0x2c, 0);
 }
 FUNC_2(*VAR_3);
 return 0;
}
