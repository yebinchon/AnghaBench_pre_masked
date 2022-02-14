
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_sw_chan {int dummy; } ;
struct TYPE_12__ {struct nvkm_device* device; } ;
struct nvkm_engine {TYPE_6__ subdev; } ;
struct nvkm_device {TYPE_2__* disp; } ;
struct TYPE_9__ {int ctxdma; int offset; int value; int * notify; } ;
struct TYPE_10__ {struct nvkm_engine* engine; } ;
struct TYPE_11__ {TYPE_4__ object; } ;
struct nv50_sw_chan {TYPE_3__ vblank; TYPE_5__ base; } ;
struct TYPE_7__ {int index_nr; } ;
struct TYPE_8__ {TYPE_1__ vblank; } ;


 struct nv50_sw_chan* FUNC_0 (struct nvkm_sw_chan*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool
FUNC_2(struct nvkm_sw_chan *VAR_0, int VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct nv50_sw_chan *VAR_4 = FUNC_0(VAR_0);
 struct nvkm_engine *VAR_5 = VAR_4->base.object.engine;
 struct nvkm_device *VAR_6 = VAR_5->subdev.device;
 switch (VAR_2) {
 case 0x018c: VAR_4->vblank.ctxdma = VAR_3; return 1;
 case 0x0400: VAR_4->vblank.offset = VAR_3; return 1;
 case 0x0404: VAR_4->vblank.value = VAR_3; return 1;
 case 0x0408:
  if (VAR_3 < VAR_6->disp->vblank.index_nr) {
   FUNC_1(&VAR_4->vblank.notify[VAR_3]);
   return 1;
  }
  break;
 default:
  break;
 }
 return 0;
}
