
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
struct gf100_dmaobj {int flags0; int flags5; struct nvkm_dmaobj base; } ;
struct gf100_dma_v0 {int priv; int kind; int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct gf100_dmaobj* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_object*,char*,int,...) ;
 int FUNC_2 (int,void**,int*,struct gf100_dma_v0,int ,int ,int) ;
 int FUNC_3 (int *,struct nvkm_dma*,struct nvkm_oclass const*,void**,int*,struct nvkm_dmaobj*) ;

int
FUNC_4(struct nvkm_dma *VAR_9, const struct nvkm_oclass *VAR_10,
   void *VAR_11, u32 VAR_12, struct nvkm_dmaobj **VAR_13)
{
 union {
  struct gf100_dma_v0 v0;
 } *VAR_14;
 struct nvkm_object *VAR_15 = VAR_10->parent;
 struct gf100_dmaobj *VAR_16;
 u32 VAR_17, VAR_18, VAR_19;
 int VAR_20;

 if (!(VAR_16 = FUNC_0(sizeof(*VAR_16), VAR_7)))
  return -VAR_1;
 *VAR_13 = &VAR_16->base;

 VAR_20 = FUNC_3(&VAR_8, VAR_9, VAR_10,
          &VAR_11, &VAR_12, &VAR_16->base);
 if (VAR_20)
  return VAR_20;

 VAR_20 = -VAR_2;
 VAR_14 = VAR_11;

 FUNC_1(VAR_15, "create gf100 dma size %d\n", VAR_12);
 if (!(VAR_20 = FUNC_2(VAR_20, &VAR_11, &VAR_12, VAR_14->v0, 0, 0, 0))) {
  FUNC_1(VAR_15,
      "create gf100 dma vers %d priv %d kind %02x\n",
      VAR_14->v0.version, VAR_14->v0.priv, VAR_14->v0.kind);
  VAR_17 = VAR_14->v0.kind;
  VAR_18 = VAR_14->v0.priv;
  VAR_19 = 0;
 } else
 if (VAR_12 == 0) {
  if (VAR_16->base.target != 129) {
   VAR_17 = VAR_3;
   VAR_18 = VAR_5;
   VAR_19 = 2;
  } else {
   VAR_17 = VAR_4;
   VAR_18 = VAR_6;
   VAR_19 = 0;
  }
 } else
  return VAR_20;

 if (VAR_18 > 2)
  return -VAR_0;
 VAR_16->flags0 |= (VAR_17 << 22) | (VAR_18 << 20) | VAR_10->base.oclass;
 VAR_16->flags5 |= (VAR_19 << 16);

 switch (VAR_16->base.target) {
 case 129:
  VAR_16->flags0 |= 0x00000000;
  break;
 case 128:
  VAR_16->flags0 |= 0x00010000;
  break;
 case 131:
  VAR_16->flags0 |= 0x00020000;
  break;
 case 130:
  VAR_16->flags0 |= 0x00030000;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_16->base.access) {
 case 133:
  break;
 case 135:
  VAR_16->flags0 |= 0x00040000;
  break;
 case 132:
 case 134:
  VAR_16->flags0 |= 0x00080000;
  break;
 }

 return 0;
}
