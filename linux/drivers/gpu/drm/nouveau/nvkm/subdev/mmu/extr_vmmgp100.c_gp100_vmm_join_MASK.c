
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nvkm_vmm {scalar_t__ replay; } ;
struct nvkm_memory {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nvkm_vmm*,struct nvkm_memory*,int) ;

int
FUNC_2(struct nvkm_vmm *VAR_0, struct nvkm_memory *VAR_1)
{
 u64 VAR_2 = FUNC_0(10) | FUNC_0(11) ;
 if (VAR_0->replay) {
  VAR_2 |= FUNC_0(4);
  VAR_2 |= FUNC_0(5);
 }
 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
