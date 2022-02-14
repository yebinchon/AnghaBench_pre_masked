
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
struct TYPE_10__ {int hz; } ;
struct nvkm_head {scalar_t__ id; TYPE_5__ asy; } ;
struct nvkm_devinit {int dummy; } ;
struct TYPE_7__ {TYPE_1__* device; } ;
struct TYPE_8__ {TYPE_2__ subdev; } ;
struct TYPE_9__ {TYPE_3__ engine; } ;
struct nv50_disp {TYPE_4__ base; } ;
struct TYPE_6__ {struct nvkm_devinit* devinit; } ;


 int FUNC_0 (struct nvkm_head*,char*,int const) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct nvkm_devinit*,scalar_t__,int const) ;

void
FUNC_2(struct nv50_disp *VAR_1, struct nvkm_head *VAR_2)
{
 struct nvkm_devinit *VAR_3 = VAR_1->base.engine.subdev.device->devinit;
 const u32 VAR_4 = VAR_2->asy.hz / 1000;
 FUNC_0(VAR_2, "supervisor 2.1 - %d khz", VAR_4);
 if (VAR_4)
  FUNC_1(VAR_3, VAR_0 + VAR_2->id, VAR_4);
}
