
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct nvkm_vram {int mn; } ;
struct nvkm_memory {int dummy; } ;


 unsigned long long VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct nvkm_vram* FUNC_2 (struct nvkm_memory*) ;

__attribute__((used)) static u64
FUNC_3(struct nvkm_memory *VAR_1)
{
 struct nvkm_vram *VAR_2 = FUNC_2(VAR_1);
 if (!FUNC_1(VAR_2->mn))
  return ~0ULL;
 return (u64)FUNC_0(VAR_2->mn) << VAR_0;
}
