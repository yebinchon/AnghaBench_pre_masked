
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nvkm_ram {int dummy; } ;
struct nvkm_fb {int dummy; } ;
struct nv40_ram {struct nvkm_ram base; } ;
typedef enum nvkm_ram_type { ____Placeholder_nvkm_ram_type } nvkm_ram_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct nv40_ram* FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,struct nvkm_fb*,int,int ,struct nvkm_ram*) ;

int
FUNC_2(struct nvkm_fb *VAR_3, enum nvkm_ram_type VAR_4, u64 VAR_5,
       struct nvkm_ram **VAR_6)
{
 struct nv40_ram *VAR_7;
 if (!(VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1)))
  return -VAR_0;
 *VAR_6 = &VAR_7->base;
 return FUNC_1(&VAR_2, VAR_3, VAR_4, VAR_5, &VAR_7->base);
}
