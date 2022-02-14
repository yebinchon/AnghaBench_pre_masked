
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_mmu_func {int dummy; } ;
struct nvkm_mmu {int dummy; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_mmu* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_mmu_func const*,struct nvkm_device*,int,struct nvkm_mmu*) ;

int
FUNC_2(const struct nvkm_mmu_func *VAR_2, struct nvkm_device *VAR_3,
       int VAR_4, struct nvkm_mmu **VAR_5)
{
 if (!(*VAR_5 = FUNC_0(sizeof(**VAR_5), VAR_1)))
  return -VAR_0;
 FUNC_1(VAR_2, VAR_3, VAR_4, *VAR_5);
 return 0;
}
