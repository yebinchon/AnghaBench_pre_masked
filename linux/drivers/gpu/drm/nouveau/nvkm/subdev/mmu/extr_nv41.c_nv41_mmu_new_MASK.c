
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_mmu {int dummy; } ;
struct nvkm_device {scalar_t__ type; int cfgopt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nvkm_device*,int,struct nvkm_mmu**) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,struct nvkm_device*,int,struct nvkm_mmu**) ;

int
FUNC_3(struct nvkm_device *VAR_2, int VAR_3, struct nvkm_mmu **VAR_4)
{
 if (VAR_2->type == VAR_0 ||
     !FUNC_1(VAR_2->cfgopt, "NvPCIE", 1))
  return FUNC_0(VAR_2, VAR_3, VAR_4);

 return FUNC_2(&VAR_1, VAR_2, VAR_3, VAR_4);
}
