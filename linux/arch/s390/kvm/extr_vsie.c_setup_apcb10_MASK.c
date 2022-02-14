
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_s390_apcb1 {int* apm; int* aqm; int* adm; } ;
struct kvm_s390_apcb0 {int* apm; int* aqm; int* adm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,unsigned long,struct kvm_s390_apcb0*,int) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_1, struct kvm_s390_apcb1 *VAR_2,
   unsigned long VAR_3, struct kvm_s390_apcb1 *VAR_4)
{
 struct kvm_s390_apcb0 VAR_5;

 if (FUNC_0(VAR_1, VAR_3, &VAR_5, sizeof(struct kvm_s390_apcb0)))
  return -VAR_0;

 VAR_2->apm[0] = VAR_4->apm[0] & VAR_5.apm[0];
 VAR_2->aqm[0] = VAR_4->aqm[0] & VAR_5.aqm[0] & 0xffff000000000000UL;
 VAR_2->adm[0] = VAR_4->adm[0] & VAR_5.adm[0] & 0xffff000000000000UL;

 return 0;

}
