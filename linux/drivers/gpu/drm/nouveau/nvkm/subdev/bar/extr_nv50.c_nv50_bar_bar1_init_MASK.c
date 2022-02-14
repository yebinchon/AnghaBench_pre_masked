
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct nvkm_bar {TYPE_1__ subdev; } ;
struct nv50_bar {TYPE_3__* bar1; } ;
struct TYPE_6__ {TYPE_2__* node; } ;
struct TYPE_5__ {int offset; } ;


 struct nv50_bar* FUNC_0 (struct nvkm_bar*) ;
 int FUNC_1 (struct nvkm_device*,int,int) ;

void
FUNC_2(struct nvkm_bar *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->subdev.device;
 struct nv50_bar *VAR_2 = FUNC_0(VAR_0);
 FUNC_1(VAR_1, 0x001708, 0x80000000 | VAR_2->bar1->node->offset >> 4);
}
