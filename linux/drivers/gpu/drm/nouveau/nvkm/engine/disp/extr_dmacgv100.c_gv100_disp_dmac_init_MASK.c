
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_8__ {int ctrl; } ;
struct nv50_disp_chan {int push; TYPE_4__ chid; TYPE_3__* disp; } ;
struct TYPE_5__ {struct nvkm_subdev subdev; } ;
struct TYPE_6__ {TYPE_1__ engine; } ;
struct TYPE_7__ {TYPE_2__ base; } ;


 int FUNC_0 (struct nv50_disp_chan*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvkm_device*,int const,int,int) ;
 int FUNC_3 (struct nvkm_device*,int const,int) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct nv50_disp_chan *VAR_0)
{
 struct nvkm_subdev *VAR_1 = &VAR_0->disp->base.engine.subdev;
 struct nvkm_device *VAR_2 = VAR_1->device;
 const u32 VAR_3 = (VAR_0->chid.ctrl - 1) * 0x1000;
 const u32 VAR_4 = VAR_0->chid.ctrl * 0x10;
 const u32 VAR_5 = VAR_0->chid.ctrl * 0x04;

 FUNC_3(VAR_2, 0x610b24 + VAR_4, FUNC_1(VAR_0->push));
 FUNC_3(VAR_2, 0x610b20 + VAR_4, FUNC_4(VAR_0->push));
 FUNC_3(VAR_2, 0x610b28 + VAR_4, 0x00000001);
 FUNC_3(VAR_2, 0x610b2c + VAR_4, 0x00000040);

 FUNC_2(VAR_2, 0x6104e0 + VAR_5, 0x00000010, 0x00000010);
 FUNC_3(VAR_2, 0x690000 + VAR_3, 0x00000000);
 FUNC_3(VAR_2, 0x6104e0 + VAR_5, 0x00000013);
 return FUNC_0(VAR_0);
}
