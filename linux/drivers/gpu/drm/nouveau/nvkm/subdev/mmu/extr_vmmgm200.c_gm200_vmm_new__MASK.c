
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
struct gm200_vmm_vn {int dummy; } ;
struct gm200_vmm_v0 {int bigpage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,void**,int *,struct gm200_vmm_v0,int ,int ,int) ;
 int FUNC_1 (int,void**,int *,struct gm200_vmm_vn) ;
 int FUNC_2 (struct nvkm_vmm_func const*,struct nvkm_mmu*,int ,int,int ,int ,struct lock_class_key*,char const*,struct nvkm_vmm**) ;

int
FUNC_3(const struct nvkm_vmm_func *VAR_2,
        const struct nvkm_vmm_func *VAR_3,
        struct nvkm_mmu *VAR_4, bool VAR_5, u64 VAR_6, u64 VAR_7,
        void *VAR_8, u32 VAR_9, struct lock_class_key *VAR_10,
        const char *VAR_11, struct nvkm_vmm **VAR_12)
{
 const struct nvkm_vmm_func *VAR_13;
 union {
  struct gm200_vmm_vn vn;
  struct gm200_vmm_v0 v0;
 } *VAR_14 = VAR_8;
 int VAR_15 = -VAR_1;

 if (!(VAR_15 = FUNC_0(VAR_15, &VAR_8, &VAR_9, VAR_14->v0, 0, 0, 0))) {
  switch (VAR_14->v0.bigpage) {
  case 16: VAR_13 = VAR_2; break;
  case 17: VAR_13 = VAR_3; break;
  default:
   return -VAR_0;
  }
 } else
 if (!(VAR_15 = FUNC_1(VAR_15, &VAR_8, &VAR_9, VAR_14->vn))) {
  VAR_13 = VAR_3;
 } else
  return VAR_15;

 return FUNC_2(VAR_13, VAR_4, 0, VAR_5, VAR_6, VAR_7, VAR_10, VAR_11, VAR_12);
}
