
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_fb {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct nv50_fb {int r100c08; TYPE_3__* func; TYPE_2__ base; } ;
struct TYPE_6__ {int trap; } ;


 struct nv50_fb* FUNC_0 (struct nvkm_fb*) ;
 int FUNC_1 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_fb *VAR_0)
{
 struct nv50_fb *VAR_1 = FUNC_0(VAR_0);
 struct nvkm_device *VAR_2 = VAR_1->base.subdev.device;





 FUNC_1(VAR_2, 0x100c08, VAR_1->r100c08 >> 8);



 FUNC_1(VAR_2, 0x100c90, VAR_1->func->trap);
}
