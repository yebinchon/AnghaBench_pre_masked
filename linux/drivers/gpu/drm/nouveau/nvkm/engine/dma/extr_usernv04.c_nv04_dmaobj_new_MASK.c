
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int oclass; } ;
struct nvkm_oclass {TYPE_4__ base; } ;
struct nvkm_dmaobj {int target; int access; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct nvkm_dma {TYPE_2__ engine; } ;
struct nvkm_device {TYPE_3__* mmu; } ;
struct nv04_dmaobj {int clone; int flags0; int flags2; struct nvkm_dmaobj base; } ;
struct TYPE_7__ {int * func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;

 struct nv04_dmaobj* FUNC_0 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,struct nvkm_dma*,struct nvkm_oclass const*,void**,int *,struct nvkm_dmaobj*) ;

int
FUNC_2(struct nvkm_dma *VAR_6, const struct nvkm_oclass *VAR_7,
  void *VAR_8, u32 VAR_9, struct nvkm_dmaobj **VAR_10)
{
 struct nvkm_device *VAR_11 = VAR_6->engine.subdev.device;
 struct nv04_dmaobj *VAR_12;
 int VAR_13;

 if (!(VAR_12 = FUNC_0(sizeof(*VAR_12), VAR_2)))
  return -VAR_1;
 *VAR_10 = &VAR_12->base;

 VAR_13 = FUNC_1(&VAR_4, VAR_6, VAR_7,
          &VAR_8, &VAR_9, &VAR_12->base);
 if (VAR_13)
  return VAR_13;

 if (VAR_12->base.target == VAR_3) {
  if (VAR_11->mmu->func == &VAR_5)
   VAR_12->clone = 1;
  VAR_12->base.target = 130;
  VAR_12->base.access = 132;
 }

 VAR_12->flags0 = VAR_7->base.oclass;
 switch (VAR_12->base.target) {
 case 128:
  VAR_12->flags0 |= 0x00003000;
  break;
 case 130:
  VAR_12->flags0 |= 0x00023000;
  break;
 case 129:
  VAR_12->flags0 |= 0x00033000;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_12->base.access) {
 case 133:
  VAR_12->flags0 |= 0x00004000;
  break;
 case 131:
  VAR_12->flags0 |= 0x00008000;

 case 132:
  VAR_12->flags2 |= 0x00000002;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
