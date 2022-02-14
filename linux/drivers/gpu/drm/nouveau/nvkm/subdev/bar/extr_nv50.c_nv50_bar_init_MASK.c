
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_device {int dummy; } ;
struct nvkm_bar {int dummy; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct nv50_bar {TYPE_2__ base; } ;


 struct nv50_bar* FUNC_0 (struct nvkm_bar*) ;
 int FUNC_1 (struct nvkm_device*,int,int) ;

void
FUNC_2(struct nvkm_bar *VAR_0)
{
 struct nv50_bar *VAR_1 = FUNC_0(VAR_0);
 struct nvkm_device *VAR_2 = VAR_1->base.subdev.device;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
  FUNC_1(VAR_2, 0x001900 + (VAR_3 * 4), 0x00000000);
}
