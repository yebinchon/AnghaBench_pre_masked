
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsie_page {int * scb_o; } ;
struct kvm_vcpu {int kvm; } ;
typedef scalar_t__ hpa_t ;
typedef int gpa_t ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_0, struct vsie_page *VAR_1,
        gpa_t VAR_2)
{
 hpa_t VAR_3 = (hpa_t) VAR_1->scb_o;

 if (VAR_3)
  FUNC_0(VAR_0->kvm, VAR_2, VAR_3);
 VAR_1->scb_o = ((void*)0);
}
