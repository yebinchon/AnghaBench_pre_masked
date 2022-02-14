
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_vmm {int * engref; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct nvkm_vmm*,int) ;

void
FUNC_2(struct nvkm_vmm *VAR_1, int VAR_2)
{
 u32 VAR_3 = 0x00000001;
 if (FUNC_0(&VAR_1->engref[VAR_0]))
  VAR_3 |= 0x00000004;
 FUNC_1(VAR_1, VAR_3);
}
