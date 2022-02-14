
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct nv50_disp_chan {TYPE_4__* disp; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct TYPE_7__ {TYPE_2__ engine; } ;
struct TYPE_8__ {TYPE_3__ base; } ;


 int FUNC_0 (struct nvkm_device*,int,int const,int const) ;

__attribute__((used)) static void
FUNC_1(struct nv50_disp_chan *VAR_0, bool VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->disp->base.engine.subdev.device;
 const u32 VAR_3 = 0x00000001;
 const u32 VAR_4 = VAR_1 ? VAR_3 : 0;
 FUNC_0(VAR_2, 0x611dac, VAR_3, VAR_4);
}
