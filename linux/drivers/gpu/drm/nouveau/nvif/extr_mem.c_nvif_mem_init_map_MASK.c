
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct nvif_mmu {int mem; } ;
struct nvif_mem {int object; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvif_mem*) ;
 int FUNC_1 (struct nvif_mmu*,int ,int,int ,int ,int *,int ,struct nvif_mem*) ;
 int FUNC_2 (int *,int *,int ) ;

int
FUNC_3(struct nvif_mmu *VAR_1, u8 VAR_2, u64 VAR_3, struct nvif_mem *VAR_4)
{
 int VAR_5 = FUNC_1(VAR_1, VAR_1->mem, VAR_0 | VAR_2, 0,
    VAR_3, ((void*)0), 0, VAR_4);
 if (VAR_5 == 0) {
  VAR_5 = FUNC_2(&VAR_4->object, ((void*)0), 0);
  if (VAR_5)
   FUNC_0(VAR_4);
 }
 return VAR_5;
}
