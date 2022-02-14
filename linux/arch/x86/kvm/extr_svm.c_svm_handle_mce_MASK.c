
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_svm {int vcpu; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct vcpu_svm *VAR_1)
{
 if (FUNC_0()) {




  FUNC_2("KVM: Guest triggered AMD Erratum 383\n");

  FUNC_1(VAR_0, &VAR_1->vcpu);

  return;
 }





 asm volatile (
  "int $0x12\n");


 return;
}
