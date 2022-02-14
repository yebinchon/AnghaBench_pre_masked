
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_oclass {struct nvkm_object* parent; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_dmaobj {int target; } ;
struct nvkm_dma {int dummy; } ;
struct gf119_dmaobj {int flags0; struct nvkm_dmaobj base; } ;
struct gf119_dma_v0 {int page; int kind; int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int VAR_8 ;
 struct gf119_dmaobj* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_object*,char*,int,...) ;
 int FUNC_2 (int,void**,int*,struct gf119_dma_v0,int ,int ,int) ;
 int FUNC_3 (int *,struct nvkm_dma*,struct nvkm_oclass const*,void**,int*,struct nvkm_dmaobj*) ;

int
FUNC_4(struct nvkm_dma *VAR_9, const struct nvkm_oclass *VAR_10,
   void *VAR_11, u32 VAR_12, struct nvkm_dmaobj **VAR_13)
{
 union {
  struct gf119_dma_v0 v0;
 } *VAR_14;
 struct nvkm_object *VAR_15 = VAR_10->parent;
 struct gf119_dmaobj *VAR_16;
 u32 VAR_17, VAR_18;
 int VAR_19;

 if (!(VAR_16 = FUNC_0(sizeof(*VAR_16), VAR_7)))
  return -VAR_1;
 *VAR_13 = &VAR_16->base;

 VAR_19 = FUNC_3(&VAR_8, VAR_9, VAR_10,
          &VAR_11, &VAR_12, &VAR_16->base);
 if (VAR_19)
  return VAR_19;

 VAR_19 = -VAR_2;
 VAR_14 = VAR_11;

 FUNC_1(VAR_15, "create gf119 dma size %d\n", VAR_12);
 if (!(VAR_19 = FUNC_2(VAR_19, &VAR_11, &VAR_12, VAR_14->v0, 0, 0, 0))) {
  FUNC_1(VAR_15,
      "create gf100 dma vers %d page %d kind %02x\n",
      VAR_14->v0.version, VAR_14->v0.page, VAR_14->v0.kind);
  VAR_17 = VAR_14->v0.kind;
  VAR_18 = VAR_14->v0.page;
 } else
 if (VAR_12 == 0) {
  if (VAR_16->base.target != 129) {
   VAR_17 = VAR_3;
   VAR_18 = VAR_6;
  } else {
   VAR_17 = VAR_4;
   VAR_18 = VAR_5;
  }
 } else
  return VAR_19;

 if (VAR_18 > 1)
  return -VAR_0;
 VAR_16->flags0 = (VAR_17 << 20) | (VAR_18 << 6);

 switch (VAR_16->base.target) {
 case 128:
  VAR_16->flags0 |= 0x00000009;
  break;
 case 129:
 case 131:
 case 130:





  break;
 default:
  return -VAR_0;
 }

 return 0;
}
