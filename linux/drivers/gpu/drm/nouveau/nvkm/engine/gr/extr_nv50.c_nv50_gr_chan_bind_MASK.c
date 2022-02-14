
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
struct TYPE_5__ {int device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct TYPE_7__ {TYPE_2__ engine; } ;
struct nv50_gr {TYPE_3__ base; int size; } ;
struct TYPE_8__ {struct nv50_gr* gr; } ;


 TYPE_4__* FUNC_0 (struct nvkm_object*) ;
 int FUNC_1 (int ,struct nvkm_gpuobj*) ;
 int FUNC_2 (struct nvkm_gpuobj*) ;
 int FUNC_3 (int ,int ,int,int,struct nvkm_gpuobj*,struct nvkm_gpuobj**) ;
 int FUNC_4 (struct nvkm_gpuobj*) ;

__attribute__((used)) static int
FUNC_5(struct nvkm_object *VAR_0, struct nvkm_gpuobj *VAR_1,
    int VAR_2, struct nvkm_gpuobj **VAR_3)
{
 struct nv50_gr *VAR_4 = FUNC_0(VAR_0)->gr;
 int VAR_5 = FUNC_3(VAR_4->base.engine.subdev.device, VAR_4->size,
      VAR_2, 1, VAR_1, VAR_3);
 if (VAR_5 == 0) {
  FUNC_4(*VAR_3);
  FUNC_1(VAR_4->base.engine.subdev.device, *VAR_3);
  FUNC_2(*VAR_3);
 }
 return VAR_5;
}
