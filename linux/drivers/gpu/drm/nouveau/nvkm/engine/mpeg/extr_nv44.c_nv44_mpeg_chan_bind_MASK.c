
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_object {int dummy; } ;
struct nvkm_gpuobj {int addr; } ;
struct TYPE_6__ {TYPE_2__* engine; } ;
struct nv44_mpeg_chan {int inst; TYPE_3__ object; } ;
struct TYPE_4__ {int device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;


 struct nv44_mpeg_chan* FUNC_0 (struct nvkm_object*) ;
 int FUNC_1 (struct nvkm_gpuobj*) ;
 int FUNC_2 (int ,int,int,int,struct nvkm_gpuobj*,struct nvkm_gpuobj**) ;
 int FUNC_3 (struct nvkm_gpuobj*) ;
 int FUNC_4 (struct nvkm_gpuobj*,int,int) ;

__attribute__((used)) static int
FUNC_5(struct nvkm_object *VAR_0, struct nvkm_gpuobj *VAR_1,
      int VAR_2, struct nvkm_gpuobj **VAR_3)
{
 struct nv44_mpeg_chan *VAR_4 = FUNC_0(VAR_0);
 int VAR_5 = FUNC_2(VAR_4->object.engine->subdev.device, 264 * 4,
      VAR_2, 1, VAR_1, VAR_3);
 if (VAR_5 == 0) {
  VAR_4->inst = (*VAR_3)->addr;
  FUNC_3(*VAR_3);
  FUNC_4(*VAR_3, 0x78, 0x02001ec1);
  FUNC_1(*VAR_3);
 }
 return VAR_5;
}
