
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int efer; int walk_mmu; } ;
struct kvm_vcpu {int kvm; TYPE_1__ arch; } ;
struct TYPE_4__ {int (* set_cr0 ) (struct kvm_vcpu*,unsigned long) ;int (* get_cs_db_l_bits ) (struct kvm_vcpu*,int*,int*) ;} ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 unsigned long FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_9 (struct kvm_vcpu*,int ) ;
 TYPE_2__* VAR_10 ;
 int FUNC_10 (int ,int ,unsigned long long) ;
 int FUNC_11 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_12 (struct kvm_vcpu*,int*,int*) ;
 int FUNC_13 (struct kvm_vcpu*,unsigned long) ;

int FUNC_14(struct kvm_vcpu *VAR_11, unsigned long VAR_12)
{
 unsigned long VAR_13 = FUNC_7(VAR_11);
 unsigned long VAR_14 = VAR_7 | VAR_8;

 VAR_12 |= VAR_4;






 VAR_12 &= ~VAR_0;

 if ((VAR_12 & VAR_5) && !(VAR_12 & VAR_3))
  return 1;

 if ((VAR_12 & VAR_7) && !(VAR_12 & VAR_6))
  return 1;

 if (!FUNC_1(VAR_11) && (VAR_12 & VAR_7)) {
  if (FUNC_0(VAR_11) && !FUNC_11(VAR_11, VAR_11->arch.walk_mmu,
       FUNC_8(VAR_11)))
   return 1;
 }

 if (!(VAR_12 & VAR_7) && FUNC_9(VAR_11, VAR_9))
  return 1;

 VAR_10->set_cr0(VAR_11, VAR_12);

 if ((VAR_12 ^ VAR_13) & VAR_7) {
  FUNC_5(VAR_11);
  FUNC_3(VAR_11);
 }

 if ((VAR_12 ^ VAR_13) & VAR_14)
  FUNC_6(VAR_11);

 if (((VAR_12 ^ VAR_13) & VAR_3) &&
     FUNC_2(VAR_11->kvm) &&
     !FUNC_4(VAR_11->kvm, VAR_2))
  FUNC_10(VAR_11->kvm, 0, ~0ULL);

 return 0;
}
