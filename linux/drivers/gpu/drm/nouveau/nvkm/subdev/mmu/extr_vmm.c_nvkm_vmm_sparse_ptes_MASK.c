
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct nvkm_vmm_pt {int * pte; int * pde; } ;
struct nvkm_vmm_desc {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ,size_t) ;

__attribute__((used)) static void
FUNC_1(const struct nvkm_vmm_desc *VAR_4,
       struct nvkm_vmm_pt *VAR_5, u32 VAR_6, u32 VAR_7)
{
 if (VAR_4->type == VAR_3) {
  while (VAR_7--)
   VAR_5->pde[VAR_6++] = VAR_1;
 } else
 if (VAR_4->type == VAR_0) {
  FUNC_0(&VAR_5->pte[VAR_6], VAR_2, VAR_7);
 }
}
