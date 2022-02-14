
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nvkm_oclass {struct nvkm_object* parent; } ;
struct nvkm_object {int dummy; } ;
struct nv50_disp_core_channel_dma_v0 {int pushbuf; int version; } ;
struct nv50_disp_chan_mthd {int dummy; } ;
struct nv50_disp_chan_func {int dummy; } ;
struct nv50_disp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nv50_disp_chan_func const*,struct nv50_disp_chan_mthd const*,struct nv50_disp*,int,int ,int ,struct nvkm_oclass const*,struct nvkm_object**) ;
 int FUNC_1 (struct nvkm_object*,char*,int ,...) ;
 int FUNC_2 (int,void**,int *,struct nv50_disp_core_channel_dma_v0,int ,int ,int) ;

int
FUNC_3(const struct nv50_disp_chan_func *VAR_1,
      const struct nv50_disp_chan_mthd *VAR_2,
      struct nv50_disp *VAR_3, int VAR_4,
      const struct nvkm_oclass *VAR_5, void *VAR_6, u32 VAR_7,
      struct nvkm_object **VAR_8)
{
 union {
  struct nv50_disp_core_channel_dma_v0 v0;
 } *VAR_9 = VAR_6;
 struct nvkm_object *VAR_10 = VAR_5->parent;
 u64 VAR_11;
 int VAR_12 = -VAR_0;

 FUNC_1(VAR_10, "create disp core channel dma size %d\n", VAR_7);
 if (!(VAR_12 = FUNC_2(VAR_12, &VAR_6, &VAR_7, VAR_9->v0, 0, 0, 0))) {
  FUNC_1(VAR_10, "create disp core channel dma vers %d "
       "pushbuf %016llx\n",
      VAR_9->v0.version, VAR_9->v0.pushbuf);
  VAR_11 = VAR_9->v0.pushbuf;
 } else
  return VAR_12;

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, 0,
       VAR_11, VAR_5, VAR_8);
}
