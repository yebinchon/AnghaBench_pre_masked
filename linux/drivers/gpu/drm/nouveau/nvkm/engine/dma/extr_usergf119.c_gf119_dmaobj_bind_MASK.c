
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvkm_gpuobj {int dummy; } ;
struct nvkm_dmaobj {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_8__ {int start; int limit; TYPE_3__* dma; } ;
struct gf119_dmaobj {int flags0; TYPE_4__ base; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct TYPE_7__ {TYPE_2__ engine; } ;


 struct gf119_dmaobj* FUNC_0 (struct nvkm_dmaobj*) ;
 int FUNC_1 (struct nvkm_gpuobj*) ;
 int FUNC_2 (struct nvkm_device*,int,int,int,struct nvkm_gpuobj*,struct nvkm_gpuobj**) ;
 int FUNC_3 (struct nvkm_gpuobj*) ;
 int FUNC_4 (struct nvkm_gpuobj*,int,int) ;

__attribute__((used)) static int
FUNC_5(struct nvkm_dmaobj *VAR_0, struct nvkm_gpuobj *VAR_1,
    int VAR_2, struct nvkm_gpuobj **VAR_3)
{
 struct gf119_dmaobj *VAR_4 = FUNC_0(VAR_0);
 struct nvkm_device *VAR_5 = VAR_4->base.dma->engine.subdev.device;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_5, 24, VAR_2, 0, VAR_1, VAR_3);
 if (VAR_6 == 0) {
  FUNC_3(*VAR_3);
  FUNC_4(*VAR_3, 0x00, VAR_4->flags0);
  FUNC_4(*VAR_3, 0x04, VAR_4->base.start >> 8);
  FUNC_4(*VAR_3, 0x08, VAR_4->base.limit >> 8);
  FUNC_4(*VAR_3, 0x0c, 0x00000000);
  FUNC_4(*VAR_3, 0x10, 0x00000000);
  FUNC_4(*VAR_3, 0x14, 0x00000000);
  FUNC_1(*VAR_3);
 }

 return VAR_6;
}
