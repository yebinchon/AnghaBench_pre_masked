
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct nvkm_vmm_page {int dummy; } ;
struct nvkm_vmm_map {int dummy; } ;
struct nvkm_vmm {int dummy; } ;
typedef int nvkm_vmm_pte_func ;


 int VAR_0 ;
 unsigned long long FUNC_0 (struct nvkm_vmm*,struct nvkm_vmm_page const*,unsigned long long,unsigned long long,char*,int,int,int ,int ,struct nvkm_vmm_map*,int *) ;
 int FUNC_1 (struct nvkm_vmm*,struct nvkm_vmm_page const*,unsigned long long,unsigned long long,int,int) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct nvkm_vmm *VAR_2, const struct nvkm_vmm_page *VAR_3,
        u64 VAR_4, u64 VAR_5, struct nvkm_vmm_map *VAR_6,
        nvkm_vmm_pte_func VAR_7)
{
 u64 VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, "ref + map", 1,
     0, VAR_1, VAR_7, VAR_6, ((void*)0));
 if (VAR_8 != ~0ULL) {
  if ((VAR_5 = VAR_8 - VAR_4))
   FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, 0, 0);
  return -VAR_0;
 }
 return 0;
}
