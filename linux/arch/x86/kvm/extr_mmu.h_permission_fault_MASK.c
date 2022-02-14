
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u8 ;
typedef unsigned int u32 ;
struct TYPE_3__ {unsigned int pkru; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_mmu {unsigned int* permissions; unsigned int pkru_mask; } ;
struct TYPE_4__ {int (* get_cpl ) (struct kvm_vcpu*) ;unsigned long (* get_rflags ) (struct kvm_vcpu*) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int) ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_1 (struct kvm_vcpu*) ;
 unsigned long FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (unsigned int) ;

__attribute__((used)) static inline u8 FUNC_4(struct kvm_vcpu *VAR_9, struct kvm_mmu *VAR_10,
      unsigned VAR_11, unsigned VAR_12,
      unsigned VAR_13)
{
 int VAR_14 = VAR_8->get_cpl(VAR_9);
 unsigned long VAR_15 = VAR_8->get_rflags(VAR_9);
 unsigned long VAR_16 = (VAR_14 - 3) & (VAR_15 & VAR_6);
 int VAR_17 = (VAR_13 >> 1) +
      (VAR_16 >> (VAR_7 - VAR_2 + 1));
 bool VAR_18 = (VAR_10->permissions[VAR_17] >> VAR_11) & 1;
 u32 VAR_19 = VAR_1;

 FUNC_0(VAR_13 & (VAR_0 | VAR_3));
 if (FUNC_3(VAR_10->pkru_mask)) {
  u32 VAR_20, VAR_21;







  VAR_20 = (VAR_9->arch.pkru >> (VAR_12 * 2)) & 3;


  VAR_21 = (VAR_13 & ~1) +
   ((VAR_11 & VAR_4) << (VAR_2 - VAR_5));

  VAR_20 &= VAR_10->pkru_mask >> VAR_21;
  VAR_19 |= -VAR_20 & VAR_0;
  VAR_18 |= (VAR_20 != 0);
 }

 return -(u32)VAR_18 & VAR_19;
}
