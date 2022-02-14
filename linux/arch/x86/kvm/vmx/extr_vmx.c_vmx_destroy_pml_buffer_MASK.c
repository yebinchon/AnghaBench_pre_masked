
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_vmx {int * pml_pg; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct vcpu_vmx *VAR_0)
{
 if (VAR_0->pml_pg) {
  FUNC_0(VAR_0->pml_pg);
  VAR_0->pml_pg = ((void*)0);
 }
}
