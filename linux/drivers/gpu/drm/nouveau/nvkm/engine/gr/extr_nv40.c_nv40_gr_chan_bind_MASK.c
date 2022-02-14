
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_object {int dummy; } ;
struct nvkm_gpuobj {int addr; } ;
struct nv40_gr_chan {int inst; struct nv40_gr* gr; } ;
struct TYPE_4__ {int device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct nv40_gr {TYPE_3__ base; int size; } ;


 struct nv40_gr_chan* FUNC_0 (struct nvkm_object*) ;
 int FUNC_1 (int ,struct nvkm_gpuobj*) ;
 int FUNC_2 (struct nvkm_gpuobj*) ;
 int FUNC_3 (int ,int ,int,int,struct nvkm_gpuobj*,struct nvkm_gpuobj**) ;
 int FUNC_4 (struct nvkm_gpuobj*) ;
 int FUNC_5 (struct nvkm_gpuobj*,int,int) ;

__attribute__((used)) static int
FUNC_6(struct nvkm_object *VAR_0, struct nvkm_gpuobj *VAR_1,
    int VAR_2, struct nvkm_gpuobj **VAR_3)
{
 struct nv40_gr_chan *VAR_4 = FUNC_0(VAR_0);
 struct nv40_gr *VAR_5 = VAR_4->gr;
 int VAR_6 = FUNC_3(VAR_5->base.engine.subdev.device, VAR_5->size,
      VAR_2, 1, VAR_1, VAR_3);
 if (VAR_6 == 0) {
  VAR_4->inst = (*VAR_3)->addr;
  FUNC_4(*VAR_3);
  FUNC_1(VAR_5->base.engine.subdev.device, *VAR_3);
  FUNC_5(*VAR_3, 0x00000, VAR_4->inst >> 4);
  FUNC_2(*VAR_3);
 }
 return VAR_6;
}
