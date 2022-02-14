
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_oclass {struct nvkm_object* parent; } ;
struct nvkm_object {int dummy; } ;
struct nv50_disp_cursor_v0 {int head; int version; } ;
struct nv50_disp_chan_func {int dummy; } ;
struct nv50_disp {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nv50_disp_chan_func const*,int *,struct nv50_disp*,int,int,int,struct nvkm_oclass const*,struct nvkm_object**) ;
 int FUNC_1 (struct nvkm_object*,char*,int ,...) ;
 int FUNC_2 (int,void**,int *,struct nv50_disp_cursor_v0,int ,int ,int) ;
 int FUNC_3 (int *,int) ;

int
FUNC_4(const struct nv50_disp_chan_func *VAR_2,
      struct nv50_disp *VAR_3, int VAR_4, int VAR_5,
      const struct nvkm_oclass *VAR_6, void *VAR_7, u32 VAR_8,
      struct nvkm_object **VAR_9)
{
 union {
  struct nv50_disp_cursor_v0 v0;
 } *VAR_10 = VAR_7;
 struct nvkm_object *VAR_11 = VAR_6->parent;
 int VAR_12, VAR_13 = -VAR_1;

 FUNC_1(VAR_11, "create disp cursor size %d\n", VAR_8);
 if (!(VAR_13 = FUNC_2(VAR_13, &VAR_7, &VAR_8, VAR_10->v0, 0, 0, 0))) {
  FUNC_1(VAR_11, "create disp cursor vers %d head %d\n",
      VAR_10->v0.version, VAR_10->v0.head);
  if (!FUNC_3(&VAR_3->base, VAR_10->v0.head))
   return -VAR_0;
  VAR_12 = VAR_10->v0.head;
 } else
  return VAR_13;

 return FUNC_0(VAR_2, ((void*)0), VAR_3, VAR_4 + VAR_12, VAR_5 + VAR_12,
       VAR_12, VAR_6, VAR_9);
}
