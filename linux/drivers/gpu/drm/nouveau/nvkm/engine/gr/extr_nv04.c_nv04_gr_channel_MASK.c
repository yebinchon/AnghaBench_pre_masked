
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_device {int dummy; } ;
struct nv04_gr_chan {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct nv04_gr {struct nv04_gr_chan** chan; TYPE_3__ base; } ;


 int FUNC_0 (struct nv04_gr_chan**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nvkm_device*,int ) ;

__attribute__((used)) static struct nv04_gr_chan *
FUNC_2(struct nv04_gr *VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_2->base.engine.subdev.device;
 struct nv04_gr_chan *VAR_4 = ((void*)0);
 if (FUNC_1(VAR_3, VAR_0) & 0x00010000) {
  int VAR_5 = FUNC_1(VAR_3, VAR_1) >> 24;
  if (VAR_5 < FUNC_0(VAR_2->chan))
   VAR_4 = VAR_2->chan[VAR_5];
 }
 return VAR_4;
}
