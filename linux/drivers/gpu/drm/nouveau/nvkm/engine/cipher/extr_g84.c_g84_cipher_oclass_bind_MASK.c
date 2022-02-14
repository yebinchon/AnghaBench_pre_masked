
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_object {int oclass; TYPE_2__* engine; } ;
struct nvkm_gpuobj {int dummy; } ;
struct TYPE_3__ {int device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;


 int FUNC_0 (struct nvkm_gpuobj*) ;
 int FUNC_1 (int ,int,int,int,struct nvkm_gpuobj*,struct nvkm_gpuobj**) ;
 int FUNC_2 (struct nvkm_gpuobj*) ;
 int FUNC_3 (struct nvkm_gpuobj*,int,int) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_object *VAR_0, struct nvkm_gpuobj *VAR_1,
         int VAR_2, struct nvkm_gpuobj **VAR_3)
{
 int VAR_4 = FUNC_1(VAR_0->engine->subdev.device, 16,
      VAR_2, 0, VAR_1, VAR_3);
 if (VAR_4 == 0) {
  FUNC_2(*VAR_3);
  FUNC_3(*VAR_3, 0x00, VAR_0->oclass);
  FUNC_3(*VAR_3, 0x04, 0x00000000);
  FUNC_3(*VAR_3, 0x08, 0x00000000);
  FUNC_3(*VAR_3, 0x0c, 0x00000000);
  FUNC_0(*VAR_3);
 }
 return VAR_4;
}
