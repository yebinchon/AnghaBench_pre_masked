
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_vmm_map {int dummy; } ;
struct nvkm_vmm {int dummy; } ;
struct nv04_vmm_map_vn {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_vmm*,char*) ;
 int FUNC_1 (int,void**,int *,struct nv04_vmm_map_vn) ;

int
FUNC_2(struct nvkm_vmm *VAR_1, void *VAR_2, u32 VAR_3,
        struct nvkm_vmm_map *VAR_4)
{
 union {
  struct nv04_vmm_map_vn vn;
 } *VAR_5 = VAR_2;
 int VAR_6 = -VAR_0;
 if ((VAR_6 = FUNC_1(VAR_6, &VAR_2, &VAR_3, VAR_5->vn)))
  FUNC_0(VAR_1, "args");
 return VAR_6;
}
