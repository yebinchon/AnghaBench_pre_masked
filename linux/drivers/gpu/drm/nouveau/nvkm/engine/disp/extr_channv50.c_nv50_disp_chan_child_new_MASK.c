
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
struct nvkm_oclass {int handle; struct nvkm_device_oclass* priv; int parent; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_device_oclass {int (* ctor ) (struct nvkm_device*,struct nvkm_oclass const*,void*,int ,int *) ;} ;
struct nvkm_device {int dummy; } ;
struct TYPE_10__ {int object; struct nvkm_object base; } ;
struct nv50_disp_chan_object {scalar_t__ hash; TYPE_5__ oproxy; struct nv50_disp* disp; } ;
struct nv50_disp_chan {TYPE_4__* func; struct nv50_disp* disp; } ;
struct TYPE_6__ {struct nvkm_device* device; } ;
struct TYPE_7__ {TYPE_1__ subdev; } ;
struct TYPE_8__ {TYPE_2__ engine; } ;
struct nv50_disp {TYPE_3__ base; } ;
struct TYPE_9__ {scalar_t__ (* bind ) (struct nv50_disp_chan*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct nv50_disp_chan_object* FUNC_0 (int,int ) ;
 struct nv50_disp_chan* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,struct nvkm_oclass const*,TYPE_5__*) ;
 int FUNC_3 (struct nvkm_device*,struct nvkm_oclass const*,void*,int ,int *) ;
 scalar_t__ FUNC_4 (struct nv50_disp_chan*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(const struct nvkm_oclass *VAR_3,
    void *VAR_4, u32 VAR_5, struct nvkm_object **VAR_6)
{
 struct nv50_disp_chan *VAR_7 = FUNC_1(VAR_3->parent);
 struct nv50_disp *VAR_8 = VAR_7->disp;
 struct nvkm_device *VAR_9 = VAR_8->base.engine.subdev.device;
 const struct nvkm_device_oclass *VAR_10 = VAR_3->priv;
 struct nv50_disp_chan_object *VAR_11;
 int VAR_12;

 if (!(VAR_11 = FUNC_0(sizeof(*VAR_11), VAR_1)))
  return -VAR_0;
 FUNC_2(&VAR_2, VAR_3, &VAR_11->oproxy);
 VAR_11->disp = VAR_8;
 *VAR_6 = &VAR_11->oproxy.base;

 VAR_12 = VAR_10->ctor(VAR_9, VAR_3, VAR_4, VAR_5, &VAR_11->oproxy.object);
 if (VAR_12)
  return VAR_12;

 VAR_11->hash = VAR_7->func->bind(VAR_7, VAR_11->oproxy.object,
           VAR_3->handle);
 if (VAR_11->hash < 0)
  return VAR_11->hash;

 return 0;
}
