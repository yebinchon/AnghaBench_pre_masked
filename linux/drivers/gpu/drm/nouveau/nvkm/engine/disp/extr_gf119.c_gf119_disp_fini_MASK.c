
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct nv50_disp {TYPE_3__ base; } ;


 int FUNC_0 (struct nvkm_device*,int,int) ;

void
FUNC_1(struct nv50_disp *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->base.engine.subdev.device;

 FUNC_0(VAR_1, 0x6100b0, 0x00000000);
}
