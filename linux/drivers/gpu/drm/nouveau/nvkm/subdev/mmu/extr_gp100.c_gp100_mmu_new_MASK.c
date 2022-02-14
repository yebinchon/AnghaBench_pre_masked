
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_mmu {int dummy; } ;
struct nvkm_device {int cfgopt; } ;


 int FUNC_0 (struct nvkm_device*,int,struct nvkm_mmu**) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,struct nvkm_device*,int,struct nvkm_mmu**) ;

int
FUNC_3(struct nvkm_device *VAR_1, int VAR_2, struct nvkm_mmu **VAR_3)
{
 if (!FUNC_1(VAR_1->cfgopt, "GP100MmuLayout", 1))
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 return FUNC_2(&VAR_0, VAR_1, VAR_2, VAR_3);
}
