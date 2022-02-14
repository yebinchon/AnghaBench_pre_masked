
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_vmm_pt {int pde; } ;


 int FUNC_0 (struct nvkm_vmm_pt*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_vmm_pt **VAR_0)
{
 struct nvkm_vmm_pt *VAR_1 = *VAR_0;
 if (VAR_1) {
  FUNC_1(VAR_1->pde);
  FUNC_0(VAR_1);
  *VAR_0 = ((void*)0);
 }
}
