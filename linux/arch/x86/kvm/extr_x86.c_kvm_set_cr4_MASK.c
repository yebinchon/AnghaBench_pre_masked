
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int walk_mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {scalar_t__ (* set_cr4 ) (struct kvm_vcpu*,unsigned long) ;} ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 unsigned long FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_7 (struct kvm_vcpu*,unsigned long) ;
 TYPE_2__* VAR_10 ;
 int FUNC_8 (struct kvm_vcpu*,int ,int) ;
 scalar_t__ FUNC_9 (struct kvm_vcpu*,unsigned long) ;

int FUNC_10(struct kvm_vcpu *VAR_11, unsigned long VAR_12)
{
 unsigned long VAR_13 = FUNC_5(VAR_11);
 unsigned long VAR_14 = VAR_4 | VAR_6 | VAR_2 |
       VAR_8 | VAR_7 | VAR_5;

 if (FUNC_7(VAR_11, VAR_12))
  return 1;

 if (FUNC_1(VAR_11)) {
  if (!(VAR_12 & VAR_2))
   return 1;
 } else if (FUNC_2(VAR_11) && (VAR_12 & VAR_2)
     && ((VAR_12 ^ VAR_13) & VAR_14)
     && !FUNC_8(VAR_11, VAR_11->arch.walk_mmu,
       FUNC_4(VAR_11)))
  return 1;

 if ((VAR_12 & VAR_3) && !(VAR_13 & VAR_3)) {
  if (!FUNC_0(VAR_11, VAR_9))
   return 1;


  if ((FUNC_4(VAR_11) & VAR_0) || !FUNC_1(VAR_11))
   return 1;
 }

 if (VAR_10->set_cr4(VAR_11, VAR_12))
  return 1;

 if (((VAR_12 ^ VAR_13) & VAR_14) ||
     (!(VAR_12 & VAR_3) && (VAR_13 & VAR_3)))
  FUNC_3(VAR_11);

 if ((VAR_12 ^ VAR_13) & (VAR_1 | VAR_5))
  FUNC_6(VAR_11);

 return 0;
}
