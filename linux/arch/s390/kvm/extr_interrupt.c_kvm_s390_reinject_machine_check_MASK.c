
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union mci {scalar_t__ ck; scalar_t__ w; scalar_t__ dg; scalar_t__ sr; int val; } ;
struct mcck_volatile_info {int failing_storage_address; int ext_damage_code; int mcic; } ;
struct kvm_vcpu {int kvm; } ;
struct kvm_s390_mchk_info {int failing_storage_address; int ext_damage_code; int mcic; int cr14; } ;
struct TYPE_2__ {struct kvm_s390_mchk_info mchk; } ;
struct kvm_s390_irq {void* type; TYPE_1__ u; } ;
struct kvm_s390_interrupt_info {void* type; struct kvm_s390_mchk_info mchk; } ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct kvm_s390_interrupt_info*) ;
 int FUNC_2 (struct kvm_vcpu*,struct kvm_s390_irq*) ;

void FUNC_3(struct kvm_vcpu *VAR_4,
         struct mcck_volatile_info *VAR_5)
{
 struct kvm_s390_interrupt_info VAR_6;
 struct kvm_s390_irq VAR_7;
 struct kvm_s390_mchk_info *VAR_8;
 union mci VAR_9;
 __u64 VAR_10 = 0;
 int VAR_11;

 VAR_9.val = VAR_5->mcic;
 if (VAR_9.sr)
  VAR_10 |= VAR_1;
 if (VAR_9.dg)
  VAR_10 |= VAR_0;
 if (VAR_9.w)
  VAR_10 |= VAR_2;

 VAR_8 = VAR_9.ck ? &VAR_6.mchk : &VAR_7.u.mchk;
 VAR_8->cr14 = VAR_10;
 VAR_8->mcic = VAR_5->mcic;
 VAR_8->ext_damage_code = VAR_5->ext_damage_code;
 VAR_8->failing_storage_address = VAR_5->failing_storage_address;
 if (VAR_9.ck) {

  VAR_6.type = VAR_3;
  VAR_11 = FUNC_1(VAR_4->kvm, &VAR_6);
 } else {

  VAR_7.type = VAR_3;
  VAR_11 = FUNC_2(VAR_4, &VAR_7);
 }
 FUNC_0(VAR_11);
}
