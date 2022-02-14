
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_vmm {int dummy; } ;
struct nvkm_mmu {TYPE_2__* func; } ;
struct nvkm_device {struct nvkm_mmu* mmu; } ;
struct lock_class_key {int dummy; } ;
struct TYPE_3__ {int (* ctor ) (struct nvkm_mmu*,int,int ,int ,void*,int ,struct lock_class_key*,char const*,struct nvkm_vmm**) ;} ;
struct TYPE_4__ {TYPE_1__ vmm; } ;


 int FUNC_0 (struct nvkm_vmm**) ;
 int FUNC_1 (struct nvkm_mmu*,int,int ,int ,void*,int ,struct lock_class_key*,char const*,struct nvkm_vmm**) ;

int
FUNC_2(struct nvkm_device *VAR_0, u64 VAR_1, u64 VAR_2, void *VAR_3,
      u32 VAR_4, struct lock_class_key *VAR_5, const char *VAR_6,
      struct nvkm_vmm **VAR_7)
{
 struct nvkm_mmu *VAR_8 = VAR_0->mmu;
 struct nvkm_vmm *VAR_9 = ((void*)0);
 int VAR_10;
 VAR_10 = VAR_8->func->vmm.ctor(VAR_8, 0, VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_6, &VAR_9);
 if (VAR_10)
  FUNC_0(&VAR_9);
 *VAR_7 = VAR_9;
 return VAR_10;
}
