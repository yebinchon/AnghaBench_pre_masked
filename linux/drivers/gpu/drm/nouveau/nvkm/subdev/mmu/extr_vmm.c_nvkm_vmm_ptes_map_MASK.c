
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nvkm_vmm_page {int dummy; } ;
struct nvkm_vmm_map {int dummy; } ;
struct nvkm_vmm {int dummy; } ;
typedef int nvkm_vmm_pte_func ;


 int FUNC_0 (struct nvkm_vmm*,struct nvkm_vmm_page const*,int ,int ,char*,int,int,int *,int ,struct nvkm_vmm_map*,int *) ;

__attribute__((used)) static void
FUNC_1(struct nvkm_vmm *VAR_0, const struct nvkm_vmm_page *VAR_1,
    u64 VAR_2, u64 VAR_3, struct nvkm_vmm_map *VAR_4,
    nvkm_vmm_pte_func VAR_5)
{
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, "map", 0, 0,
        ((void*)0), VAR_5, VAR_4, ((void*)0));
}
