
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nvkm_vmm_func {int dummy; } ;
struct nvkm_vmm {int dummy; } ;
struct nvkm_mmu {int dummy; } ;
struct lock_class_key {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_vmm* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_vmm_func const*,struct nvkm_mmu*,int ,int,int ,int ,struct lock_class_key*,char const*,struct nvkm_vmm*) ;

int
FUNC_2(const struct nvkm_vmm_func *VAR_2, struct nvkm_mmu *VAR_3,
       u32 VAR_4, bool VAR_5, u64 VAR_6, u64 VAR_7,
       struct lock_class_key *VAR_8, const char *VAR_9,
       struct nvkm_vmm **VAR_10)
{
 if (!(*VAR_10 = FUNC_0(sizeof(**VAR_10), VAR_1)))
  return -VAR_0;
 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, *VAR_10);
}
