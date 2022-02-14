
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct nv50_disp_chan {TYPE_5__* func; TYPE_4__* disp; } ;
struct TYPE_10__ {scalar_t__ (* user ) (struct nv50_disp_chan*,scalar_t__*) ;} ;
struct TYPE_6__ {struct nvkm_device* device; } ;
struct TYPE_7__ {TYPE_1__ subdev; } ;
struct TYPE_8__ {TYPE_2__ engine; } ;
struct TYPE_9__ {TYPE_3__ base; } ;


 struct nv50_disp_chan* FUNC_0 (struct nvkm_object*) ;
 int FUNC_1 (struct nvkm_device*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct nv50_disp_chan*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_object *VAR_0, u64 VAR_1, u32 *VAR_2)
{
 struct nv50_disp_chan *VAR_3 = FUNC_0(VAR_0);
 struct nvkm_device *VAR_4 = VAR_3->disp->base.engine.subdev.device;
 u64 VAR_5, VAR_6 = VAR_3->func->user(VAR_3, &VAR_5);
 *VAR_2 = FUNC_1(VAR_4, VAR_6 + VAR_1);
 return 0;
}
