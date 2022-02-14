
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct nvkm_oclass {struct nvkm_device_oclass const* priv; int ctor; TYPE_8__* engine; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_device_oclass {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct nv50_disp_chan {TYPE_5__* func; TYPE_4__* disp; } ;
struct TYPE_16__ {TYPE_7__* func; } ;
struct TYPE_14__ {int (* sclass ) (struct nvkm_oclass*,int,struct nvkm_device_oclass const**) ;} ;
struct TYPE_15__ {TYPE_6__ base; } ;
struct TYPE_13__ {scalar_t__ bind; } ;
struct TYPE_9__ {struct nvkm_device* device; } ;
struct TYPE_10__ {TYPE_1__ subdev; } ;
struct TYPE_11__ {TYPE_2__ engine; } ;
struct TYPE_12__ {TYPE_3__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nv50_disp_chan* FUNC_0 (struct nvkm_object*) ;
 int VAR_2 ;
 TYPE_8__* FUNC_1 (struct nvkm_device*,int ) ;
 int FUNC_2 (struct nvkm_oclass*,int,struct nvkm_device_oclass const**) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_object *VAR_3, int VAR_4,
    struct nvkm_oclass *VAR_5)
{
 struct nv50_disp_chan *VAR_6 = FUNC_0(VAR_3);
 struct nvkm_device *VAR_7 = VAR_6->disp->base.engine.subdev.device;
 const struct nvkm_device_oclass *VAR_8 = ((void*)0);

 if (VAR_6->func->bind)
  VAR_5->engine = FUNC_1(VAR_7, VAR_1);
 else
  VAR_5->engine = ((void*)0);

 if (VAR_5->engine && VAR_5->engine->func->base.sclass) {
  VAR_5->engine->func->base.sclass(VAR_5, VAR_4, &VAR_8);
  if (VAR_8) {
   VAR_5->ctor = VAR_2,
   VAR_5->priv = VAR_8;
   return 0;
  }
 }

 return -VAR_0;
}
