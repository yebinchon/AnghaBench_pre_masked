
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_device {int dummy; } ;
struct nv10_gr_chan {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct nv10_gr {struct nv10_gr_chan** chan; TYPE_3__ base; } ;


 int FUNC_0 (struct nv10_gr_chan**) ;
 int FUNC_1 (struct nvkm_device*,int) ;

__attribute__((used)) static struct nv10_gr_chan *
FUNC_2(struct nv10_gr *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->base.engine.subdev.device;
 struct nv10_gr_chan *VAR_2 = ((void*)0);
 if (FUNC_1(VAR_1, 0x400144) & 0x00010000) {
  int VAR_3 = FUNC_1(VAR_1, 0x400148) >> 24;
  if (VAR_3 < FUNC_0(VAR_0->chan))
   VAR_2 = VAR_0->chan[VAR_3];
 }
 return VAR_2;
}
