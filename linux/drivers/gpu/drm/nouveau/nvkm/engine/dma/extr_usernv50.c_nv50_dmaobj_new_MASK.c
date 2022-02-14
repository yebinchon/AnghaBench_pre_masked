
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int oclass; } ;
struct nvkm_oclass {TYPE_1__ base; struct nvkm_object* parent; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_dmaobj {int target; int access; } ;
struct nvkm_dma {int dummy; } ;
struct nv50_dmaobj {int flags0; int flags5; struct nvkm_dmaobj base; } ;
struct nv50_dma_v0 {int priv; int part; int comp; int kind; int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct nv50_dmaobj* FUNC_0 (int,int ) ;
 int VAR_12 ;
 int FUNC_1 (struct nvkm_object*,char*,int,...) ;
 int FUNC_2 (int,void**,int*,struct nv50_dma_v0,int ,int ,int) ;
 int FUNC_3 (int *,struct nvkm_dma*,struct nvkm_oclass const*,void**,int*,struct nvkm_dmaobj*) ;

int
FUNC_4(struct nvkm_dma *VAR_13, const struct nvkm_oclass *VAR_14,
  void *VAR_15, u32 VAR_16, struct nvkm_dmaobj **VAR_17)
{
 union {
  struct nv50_dma_v0 v0;
 } *VAR_18;
 struct nvkm_object *VAR_19 = VAR_14->parent;
 struct nv50_dmaobj *VAR_20;
 u32 VAR_21, VAR_22, VAR_23, VAR_24;
 int VAR_25;

 if (!(VAR_20 = FUNC_0(sizeof(*VAR_20), VAR_3)))
  return -VAR_1;
 *VAR_17 = &VAR_20->base;

 VAR_25 = FUNC_3(&VAR_12, VAR_13, VAR_14,
          &VAR_15, &VAR_16, &VAR_20->base);
 if (VAR_25)
  return VAR_25;

 VAR_25 = -VAR_2;
 VAR_18 = VAR_15;

 FUNC_1(VAR_19, "create nv50 dma size %d\n", VAR_16);
 if (!(VAR_25 = FUNC_2(VAR_25, &VAR_15, &VAR_16, VAR_18->v0, 0, 0, 0))) {
  FUNC_1(VAR_19, "create nv50 dma vers %d priv %d part %d "
       "comp %d kind %02x\n", VAR_18->v0.version,
      VAR_18->v0.priv, VAR_18->v0.part, VAR_18->v0.comp,
      VAR_18->v0.kind);
  VAR_21 = VAR_18->v0.priv;
  VAR_22 = VAR_18->v0.part;
  VAR_23 = VAR_18->v0.comp;
  VAR_24 = VAR_18->v0.kind;
 } else
 if (VAR_16 == 0) {
  if (VAR_20->base.target != 129) {
   VAR_21 = VAR_10;
   VAR_22 = VAR_8;
   VAR_23 = VAR_4;
   VAR_24 = VAR_6;
  } else {
   VAR_21 = VAR_11;
   VAR_22 = VAR_9;
   VAR_23 = VAR_5;
   VAR_24 = VAR_7;
  }
 } else
  return VAR_25;

 if (VAR_21 > 2 || VAR_22 > 2 || VAR_23 > 3 || VAR_24 > 0x7f)
  return -VAR_0;
 VAR_20->flags0 = (VAR_23 << 29) | (VAR_24 << 22) | (VAR_21 << 20) |
    VAR_14->base.oclass;
 VAR_20->flags5 = (VAR_22 << 16);

 switch (VAR_20->base.target) {
 case 129:
  VAR_20->flags0 |= 0x00000000;
  break;
 case 128:
  VAR_20->flags0 |= 0x00010000;
  break;
 case 131:
  VAR_20->flags0 |= 0x00020000;
  break;
 case 130:
  VAR_20->flags0 |= 0x00030000;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_20->base.access) {
 case 133:
  break;
 case 135:
  VAR_20->flags0 |= 0x00040000;
  break;
 case 132:
 case 134:
  VAR_20->flags0 |= 0x00080000;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
