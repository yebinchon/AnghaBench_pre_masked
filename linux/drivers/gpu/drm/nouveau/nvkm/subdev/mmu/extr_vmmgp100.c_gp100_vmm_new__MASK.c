
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nvkm_vmm_func {int dummy; } ;
struct nvkm_vmm {int replay; } ;
struct nvkm_mmu {int dummy; } ;
struct lock_class_key {int dummy; } ;
struct gp100_vmm_vn {int dummy; } ;
struct gp100_vmm_v0 {scalar_t__ fault_replay; } ;


 int VAR_0 ;
 int FUNC_0 (int,void**,int *,struct gp100_vmm_v0,int ,int ,int) ;
 int FUNC_1 (int,void**,int *,struct gp100_vmm_vn) ;
 int FUNC_2 (struct nvkm_vmm_func const*,struct nvkm_mmu*,int ,int,int ,int ,struct lock_class_key*,char const*,struct nvkm_vmm**) ;

int
FUNC_3(const struct nvkm_vmm_func *VAR_1,
        struct nvkm_mmu *VAR_2, bool VAR_3, u64 VAR_4, u64 VAR_5,
        void *VAR_6, u32 VAR_7, struct lock_class_key *VAR_8,
        const char *VAR_9, struct nvkm_vmm **VAR_10)
{
 union {
  struct gp100_vmm_vn vn;
  struct gp100_vmm_v0 v0;
 } *VAR_11 = VAR_6;
 int VAR_12 = -VAR_0;
 bool VAR_13;

 if (!(VAR_12 = FUNC_0(VAR_12, &VAR_6, &VAR_7, VAR_11->v0, 0, 0, 0))) {
  VAR_13 = VAR_11->v0.fault_replay != 0;
 } else
 if (!(VAR_12 = FUNC_1(VAR_12, &VAR_6, &VAR_7, VAR_11->vn))) {
  VAR_13 = 0;
 } else
  return VAR_12;

 VAR_12 = FUNC_2(VAR_1, VAR_2, 0, VAR_3, VAR_4, VAR_5, VAR_8, VAR_9, VAR_10);
 if (VAR_12)
  return VAR_12;

 (*VAR_10)->replay = VAR_13;
 return 0;
}
