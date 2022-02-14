
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_devinit {int post; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_2__ {struct nvkm_subdev subdev; } ;
struct nv50_devinit {TYPE_1__ base; } ;


 int FUNC_0 (int) ;
 struct nv50_devinit* FUNC_1 (struct nvkm_devinit*) ;
 int FUNC_2 (struct nvkm_device*,int) ;

void
FUNC_3(struct nvkm_devinit *VAR_0)
{
 struct nv50_devinit *VAR_1 = FUNC_1(VAR_0);
 struct nvkm_subdev *VAR_2 = &VAR_1->base.subdev;
 struct nvkm_device *VAR_3 = VAR_2->device;





 VAR_0->post = ((FUNC_2(VAR_3, 0x2240c) & FUNC_0(1)) == 0);
}
