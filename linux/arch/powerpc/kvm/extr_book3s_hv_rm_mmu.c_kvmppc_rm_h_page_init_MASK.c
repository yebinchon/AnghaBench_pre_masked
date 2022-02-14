
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct kvm_vcpu {struct kvm* kvm; } ;
struct kvm {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 scalar_t__ FUNC_0 (struct kvm*) ;
 long FUNC_1 (struct kvm_vcpu*,unsigned long,unsigned long) ;
 long FUNC_2 (struct kvm_vcpu*,unsigned long) ;

long FUNC_3(struct kvm_vcpu *VAR_9, unsigned long VAR_10,
      unsigned long VAR_11, unsigned long VAR_12)
{
 struct kvm *VAR_13 = VAR_9->kvm;
 u64 VAR_14 = VAR_8 - 1;
 long VAR_15 = VAR_5;


 if (FUNC_0(VAR_13))
  return VAR_6;


 if (VAR_10 & ~(VAR_1 | VAR_2 |
        VAR_7 | VAR_0 | VAR_3))
  return VAR_4;


 if ((VAR_11 & VAR_14) || ((VAR_10 & VAR_0) && (VAR_12 & VAR_14)))
  return VAR_4;


 if (VAR_10 & VAR_0)
  VAR_15 = FUNC_1(VAR_9, VAR_11, VAR_12);
 else if (VAR_10 & VAR_7)
  VAR_15 = FUNC_2(VAR_9, VAR_11);



 return VAR_15;
}
