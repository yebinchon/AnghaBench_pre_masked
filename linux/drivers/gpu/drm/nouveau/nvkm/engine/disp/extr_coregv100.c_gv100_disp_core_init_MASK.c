
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;
struct nv50_disp_chan {int push; TYPE_3__* disp; } ;
struct TYPE_4__ {struct nvkm_subdev subdev; } ;
struct TYPE_5__ {TYPE_1__ engine; } ;
struct TYPE_6__ {TYPE_2__ base; } ;


 int FUNC_0 (struct nv50_disp_chan*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvkm_device*,int,int,int) ;
 int FUNC_3 (struct nvkm_device*,int,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct nv50_disp_chan *VAR_0)
{
 struct nvkm_subdev *VAR_1 = &VAR_0->disp->base.engine.subdev;
 struct nvkm_device *VAR_2 = VAR_1->device;

 FUNC_3(VAR_2, 0x610b24, FUNC_1(VAR_0->push));
 FUNC_3(VAR_2, 0x610b20, FUNC_4(VAR_0->push));
 FUNC_3(VAR_2, 0x610b28, 0x00000001);
 FUNC_3(VAR_2, 0x610b2c, 0x00000040);

 FUNC_2(VAR_2, 0x6104e0, 0x00000010, 0x00000010);
 FUNC_3(VAR_2, 0x680000, 0x00000000);
 FUNC_3(VAR_2, 0x6104e0, 0x00000013);
 return FUNC_0(VAR_0);
}
