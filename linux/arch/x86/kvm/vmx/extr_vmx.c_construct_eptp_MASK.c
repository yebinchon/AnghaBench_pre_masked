
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct kvm_vcpu {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;

u64 FUNC_3(struct kvm_vcpu *VAR_6, unsigned long VAR_7)
{
 u64 VAR_8 = VAR_2;

 VAR_8 |= (FUNC_0(VAR_6) == 5) ? VAR_4 : VAR_3;

 if (VAR_5 &&
     (!FUNC_1(VAR_6) || FUNC_2(VAR_6)))
  VAR_8 |= VAR_1;
 VAR_8 |= (VAR_7 & VAR_0);

 return VAR_8;
}
