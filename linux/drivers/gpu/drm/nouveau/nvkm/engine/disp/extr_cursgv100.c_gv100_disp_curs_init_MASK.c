
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_8__ {int ctrl; } ;
struct nv50_disp_chan {TYPE_4__ chid; TYPE_3__* disp; } ;
struct TYPE_5__ {struct nvkm_subdev subdev; } ;
struct TYPE_6__ {TYPE_1__ engine; } ;
struct TYPE_7__ {TYPE_2__ base; } ;


 int FUNC_0 (struct nv50_disp_chan*) ;
 int FUNC_1 (struct nvkm_device*,int,int) ;

__attribute__((used)) static int
FUNC_2(struct nv50_disp_chan *VAR_0)
{
 struct nvkm_subdev *VAR_1 = &VAR_0->disp->base.engine.subdev;
 struct nvkm_device *VAR_2 = VAR_1->device;
 FUNC_1(VAR_2, 0x6104e0 + VAR_0->chid.ctrl * 4, 0x00000001);
 return FUNC_0(VAR_0);
}
