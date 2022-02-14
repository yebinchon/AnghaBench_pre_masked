
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_object {TYPE_2__* engine; } ;
struct nvkm_gpuobj {int dummy; } ;
struct TYPE_3__ {int device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;


 int FUNC_0 (int ,int,int,int,struct nvkm_gpuobj*,struct nvkm_gpuobj**) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_object *VAR_0, struct nvkm_gpuobj *VAR_1,
         int VAR_2, struct nvkm_gpuobj **VAR_3)
{
 return FUNC_0(VAR_0->engine->subdev.device, 256,
          VAR_2, 1, VAR_1, VAR_3);

}
