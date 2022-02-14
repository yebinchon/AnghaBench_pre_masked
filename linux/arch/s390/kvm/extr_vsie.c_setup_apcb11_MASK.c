
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_s390_apcb1 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long*,unsigned long*,unsigned long*,int) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*,unsigned long,unsigned long*,int) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_1, unsigned long *VAR_2,
   unsigned long VAR_3,
   unsigned long *VAR_4)
{
 if (FUNC_1(VAR_1, VAR_3, VAR_2,
       sizeof(struct kvm_s390_apcb1)))
  return -VAR_0;

 FUNC_0(VAR_2, VAR_2, VAR_4, sizeof(struct kvm_s390_apcb1));

 return 0;
}
