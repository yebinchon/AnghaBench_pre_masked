
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct nvkm_mmu {TYPE_3__* func; TYPE_1__* type; } ;
struct nvkm_memory {int dummy; } ;
struct TYPE_5__ {int (* vram ) (struct nvkm_mmu*,int,int ,int ,void*,int ,struct nvkm_memory**) ;} ;
struct TYPE_6__ {TYPE_2__ mem; } ;
struct TYPE_4__ {int type; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_mmu*,int,int ,int ,void*,int ,struct nvkm_memory**) ;
 int FUNC_1 (struct nvkm_memory**) ;
 int FUNC_2 (struct nvkm_mmu*,int,int ,int ,void*,int ,struct nvkm_memory**) ;

int
FUNC_3(struct nvkm_mmu *VAR_1, int VAR_2, u8 VAR_3, u64 VAR_4,
    void *VAR_5, u32 VAR_6, struct nvkm_memory **VAR_7)
{
 struct nvkm_memory *VAR_8 = ((void*)0);
 int VAR_9;

 if (VAR_1->type[VAR_2].type & VAR_0) {
  VAR_9 = VAR_1->func->mem.vram(VAR_1, VAR_2, VAR_3, VAR_4,
       VAR_5, VAR_6, &VAR_8);
 } else {
  VAR_9 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
     VAR_5, VAR_6, &VAR_8);
 }

 if (VAR_9)
  FUNC_1(&VAR_8);
 *VAR_7 = VAR_8;
 return VAR_9;
}
