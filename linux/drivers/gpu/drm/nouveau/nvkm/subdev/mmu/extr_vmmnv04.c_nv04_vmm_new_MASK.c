
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_vmm {int limit; TYPE_2__* pd; } ;
struct nvkm_mmu {int dummy; } ;
struct nvkm_memory {int dummy; } ;
struct lock_class_key {int dummy; } ;
struct TYPE_4__ {TYPE_1__** pt; } ;
struct TYPE_3__ {struct nvkm_memory* memory; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct nvkm_mmu*,int,int,int ,int ,void*,int ,struct lock_class_key*,char const*,struct nvkm_vmm**) ;
 int FUNC_1 (struct nvkm_memory*) ;
 int FUNC_2 (struct nvkm_memory*) ;
 int FUNC_3 (struct nvkm_memory*,int,int) ;

int
FUNC_4(struct nvkm_mmu *VAR_1, bool VAR_2, u64 VAR_3, u64 VAR_4,
      void *VAR_5, u32 VAR_6, struct lock_class_key *VAR_7, const char *VAR_8,
      struct nvkm_vmm **VAR_9)
{
 struct nvkm_memory *VAR_10;
 struct nvkm_vmm *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_0(&VAR_0, VAR_1, 8, VAR_2, VAR_3, VAR_4,
       VAR_5, VAR_6, VAR_7, VAR_8, &VAR_11);
 *VAR_9 = VAR_11;
 if (VAR_12)
  return VAR_12;

 VAR_10 = VAR_11->pd->pt[0]->memory;
 FUNC_2(VAR_10);
 FUNC_3(VAR_10, 0x00000, 0x0002103d);
 FUNC_3(VAR_10, 0x00004, VAR_11->limit - 1);
 FUNC_1(VAR_10);
 return 0;
}
