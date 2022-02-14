
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nvkm_vmm_func {int dummy; } ;
struct nvkm_vmm {int dummy; } ;
struct nvkm_mmu {int dummy; } ;
struct nv04_vmm_vn {int dummy; } ;
struct lock_class_key {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void**,int *,struct nv04_vmm_vn) ;
 int FUNC_1 (struct nvkm_vmm_func const*,struct nvkm_mmu*,int ,int,int ,int ,struct lock_class_key*,char const*,struct nvkm_vmm**) ;

int
FUNC_2(const struct nvkm_vmm_func *VAR_1, struct nvkm_mmu *VAR_2,
       u32 VAR_3, bool VAR_4, u64 VAR_5, u64 VAR_6,
       void *VAR_7, u32 VAR_8, struct lock_class_key *VAR_9,
       const char *VAR_10, struct nvkm_vmm **VAR_11)
{
 union {
  struct nv04_vmm_vn vn;
 } *VAR_12 = VAR_7;
 int VAR_13;

 VAR_13 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
       VAR_9, VAR_10, VAR_11);
 if (VAR_13)
  return VAR_13;

 return FUNC_0(-VAR_0, &VAR_7, &VAR_8, VAR_12->vn);
}
