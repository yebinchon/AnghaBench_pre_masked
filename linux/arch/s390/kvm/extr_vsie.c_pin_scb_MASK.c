
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsie_page {struct kvm_s390_sie_block* scb_o; } ;
struct kvm_vcpu {int kvm; } ;
struct kvm_s390_sie_block {int dummy; } ;
typedef scalar_t__ hpa_t ;
typedef int gpa_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (int ,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_1, struct vsie_page *VAR_2,
     gpa_t VAR_3)
{
 hpa_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1->kvm, VAR_3, &VAR_4);
 if (VAR_5) {
  VAR_5 = FUNC_1(VAR_1, VAR_0);
  FUNC_0(VAR_5);
  return 1;
 }
 VAR_2->scb_o = (struct kvm_s390_sie_block *) VAR_4;
 return 0;
}
