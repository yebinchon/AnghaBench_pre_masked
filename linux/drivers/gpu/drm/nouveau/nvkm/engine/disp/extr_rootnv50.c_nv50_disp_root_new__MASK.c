
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_oclass {int dummy; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_disp {int dummy; } ;
struct nv50_disp_root_func {int dummy; } ;
struct nv50_disp_root {struct nv50_disp* disp; struct nv50_disp_root_func const* func; struct nvkm_object object; } ;
struct nv50_disp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nv50_disp_root* FUNC_0 (int,int ) ;
 struct nv50_disp* FUNC_1 (struct nvkm_disp*) ;
 int VAR_2 ;
 int FUNC_2 (int *,struct nvkm_oclass const*,struct nvkm_object*) ;

int
FUNC_3(const struct nv50_disp_root_func *VAR_3,
      struct nvkm_disp *VAR_4, const struct nvkm_oclass *VAR_5,
      void *VAR_6, u32 VAR_7, struct nvkm_object **VAR_8)
{
 struct nv50_disp *VAR_9 = FUNC_1(VAR_4);
 struct nv50_disp_root *VAR_10;

 if (!(VAR_10 = FUNC_0(sizeof(*VAR_10), VAR_1)))
  return -VAR_0;
 *VAR_8 = &VAR_10->object;

 FUNC_2(&VAR_2, VAR_5, &VAR_10->object);
 VAR_10->func = VAR_3;
 VAR_10->disp = VAR_9;
 return 0;
}
