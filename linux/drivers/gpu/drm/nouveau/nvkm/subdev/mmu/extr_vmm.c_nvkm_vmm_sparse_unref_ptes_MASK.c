
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct nvkm_vmm_pt {int * pte; int * pde; } ;
struct nvkm_vmm_iter {TYPE_1__* desc; struct nvkm_vmm_pt** pt; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (struct nvkm_vmm_iter*,int,size_t,size_t) ;

__attribute__((used)) static bool
FUNC_2(struct nvkm_vmm_iter *VAR_2, bool VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct nvkm_vmm_pt *VAR_6 = VAR_2->pt[0];
 if (VAR_2->desc->type == VAR_1)
  FUNC_0(&VAR_6->pde[VAR_4], 0x00, sizeof(VAR_6->pde[0]) * VAR_5);
 else
 if (VAR_2->desc->type == VAR_0)
  FUNC_0(&VAR_6->pte[VAR_4], 0x00, sizeof(VAR_6->pte[0]) * VAR_5);
 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
}
