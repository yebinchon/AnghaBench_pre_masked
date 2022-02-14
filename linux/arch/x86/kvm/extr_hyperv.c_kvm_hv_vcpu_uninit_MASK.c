
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu_hv {int * stimer; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct kvm_vcpu_hv* FUNC_2 (struct kvm_vcpu*) ;

void FUNC_3(struct kvm_vcpu *VAR_0)
{
 struct kvm_vcpu_hv *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->stimer); VAR_2++)
  FUNC_1(&VAR_1->stimer[VAR_2]);
}
