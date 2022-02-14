
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct TYPE_10__ {int ctrl; } ;
struct nv50_disp_chan {TYPE_5__ chid; TYPE_4__* disp; } ;
struct TYPE_6__ {struct nvkm_device* device; } ;
struct TYPE_7__ {TYPE_1__ subdev; } ;
struct TYPE_8__ {TYPE_2__ engine; } ;
struct TYPE_9__ {TYPE_3__ base; } ;


 int FUNC_0 (struct nv50_disp_chan*) ;
 int FUNC_1 (struct nvkm_device*,int const,int,int) ;

__attribute__((used)) static void
FUNC_2(struct nv50_disp_chan *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->disp->base.engine.subdev.device;
 const u32 VAR_2 = VAR_0->chid.ctrl * 4;
 FUNC_1(VAR_1, 0x6104e0 + VAR_2, 0x00000010, 0x00000010);
 FUNC_0(VAR_0);
 FUNC_1(VAR_1, 0x6104e0 + VAR_2, 0x00000001, 0x00000000);
}
