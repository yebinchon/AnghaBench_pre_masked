
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


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 struct nv10_gr_chan* FUNC_1 (struct nv10_gr*) ;
 int FUNC_2 (struct nv10_gr_chan*,int) ;
 int FUNC_3 (struct nv10_gr_chan*) ;
 int FUNC_4 (struct nvkm_device*,int ) ;

__attribute__((used)) static void
FUNC_5(struct nv10_gr *VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_1->base.engine.subdev.device;
 struct nv10_gr_chan *VAR_3 = ((void*)0);
 struct nv10_gr_chan *VAR_4 = ((void*)0);
 int VAR_5;

 FUNC_0(&VAR_1->base);


 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  FUNC_3(VAR_3);


 VAR_5 = (FUNC_4(VAR_2, VAR_0) >> 20) & 0x1f;
 VAR_4 = VAR_1->chan[VAR_5];
 if (VAR_4)
  FUNC_2(VAR_4, VAR_5);
}
