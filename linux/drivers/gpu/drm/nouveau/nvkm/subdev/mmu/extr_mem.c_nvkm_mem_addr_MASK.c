
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct nvkm_memory {int dummy; } ;
struct nvkm_mem {int pages; unsigned long long* dma; scalar_t__ mem; } ;


 struct nvkm_mem* FUNC_0 (struct nvkm_memory*) ;

__attribute__((used)) static u64
FUNC_1(struct nvkm_memory *VAR_0)
{
 struct nvkm_mem *VAR_1 = FUNC_0(VAR_0);
 if (VAR_1->pages == 1 && VAR_1->mem)
  return VAR_1->dma[0];
 return ~0ULL;
}
