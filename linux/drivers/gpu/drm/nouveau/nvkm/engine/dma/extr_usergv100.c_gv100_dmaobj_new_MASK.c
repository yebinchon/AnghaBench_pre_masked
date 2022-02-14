
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_oclass {struct nvkm_object* parent; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_dmaobj {int target; } ;
struct nvkm_dma {int dummy; } ;
struct gv100_dmaobj {int flags0; struct nvkm_dmaobj base; } ;
struct gf119_dma_v0 {scalar_t__ page; scalar_t__ kind; int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 struct gv100_dmaobj* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_object*,char*,int,...) ;
 int FUNC_2 (int,void**,int*,struct gf119_dma_v0,int ,int ,int) ;
 int FUNC_3 (int *,struct nvkm_dma*,struct nvkm_oclass const*,void**,int*,struct nvkm_dmaobj*) ;

int
FUNC_4(struct nvkm_dma *VAR_6, const struct nvkm_oclass *VAR_7,
   void *VAR_8, u32 VAR_9, struct nvkm_dmaobj **VAR_10)
{
 union {
  struct gf119_dma_v0 v0;
 } *VAR_11;
 struct nvkm_object *VAR_12 = VAR_7->parent;
 struct gv100_dmaobj *VAR_13;
 u32 VAR_14, VAR_15;
 int VAR_16;

 if (!(VAR_13 = FUNC_0(sizeof(*VAR_13), VAR_4)))
  return -VAR_1;
 *VAR_10 = &VAR_13->base;

 VAR_16 = FUNC_3(&VAR_5, VAR_6, VAR_7,
          &VAR_8, &VAR_9, &VAR_13->base);
 if (VAR_16)
  return VAR_16;

 VAR_16 = -VAR_2;
 VAR_11 = VAR_8;

 FUNC_1(VAR_12, "create gv100 dma size %d\n", VAR_9);
 if (!(VAR_16 = FUNC_2(VAR_16, &VAR_8, &VAR_9, VAR_11->v0, 0, 0, 0))) {
  FUNC_1(VAR_12,
      "create gv100 dma vers %d page %d kind %02x\n",
      VAR_11->v0.version, VAR_11->v0.page, VAR_11->v0.kind);
  VAR_14 = VAR_11->v0.kind != 0;
  VAR_15 = VAR_11->v0.page != 0;
 } else
 if (VAR_9 == 0) {
  VAR_14 = 0;
  VAR_15 = VAR_3;
 } else
  return VAR_16;

 if (VAR_14)
  VAR_13->flags0 |= 0x00100000;
 if (VAR_15)
  VAR_13->flags0 |= 0x00000040;
 VAR_13->flags0 |= 0x00000004;

 switch (VAR_13->base.target) {
 case 128 : VAR_13->flags0 |= 0x00000001; break;
 case 130 : VAR_13->flags0 |= 0x00000002; break;
 case 129: VAR_13->flags0 |= 0x00000003; break;
 default:
  return -VAR_0;
 }

 return 0;
}
