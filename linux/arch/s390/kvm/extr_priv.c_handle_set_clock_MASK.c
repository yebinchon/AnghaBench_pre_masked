
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_5__ {TYPE_3__* sie_block; } ;
struct TYPE_6__ {int instruction_sck; } ;
struct kvm_vcpu {int kvm; TYPE_1__ arch; TYPE_2__ stat; } ;
struct kvm_s390_vm_tod_clock {int tod; int member_0; } ;
struct TYPE_8__ {int mask; } ;
struct TYPE_7__ {TYPE_4__ gpsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int *) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;
 int FUNC_5 (int ,struct kvm_s390_vm_tod_clock*) ;
 int FUNC_6 (struct kvm_vcpu*,int,int ,int *,int) ;

__attribute__((used)) static int FUNC_7(struct kvm_vcpu *VAR_3)
{
 struct kvm_s390_vm_tod_clock VAR_4 = { 0 };
 int VAR_5;
 u8 VAR_6;
 u64 VAR_7;

 VAR_3->stat.instruction_sck++;

 if (VAR_3->arch.sie_block->gpsw.mask & VAR_2)
  return FUNC_3(VAR_3, VAR_0);

 VAR_7 = FUNC_1(VAR_3, &VAR_6);
 if (VAR_7 & 7)
  return FUNC_3(VAR_3, VAR_1);
 VAR_5 = FUNC_6(VAR_3, VAR_7, VAR_6, &VAR_4.tod, sizeof(VAR_4.tod));
 if (VAR_5)
  return FUNC_2(VAR_3, VAR_5);

 FUNC_0(VAR_3, 3, "SCK: setting guest TOD to 0x%llx", VAR_4.tod);
 FUNC_5(VAR_3->kvm, &VAR_4);

 FUNC_4(VAR_3, 0);
 return 0;
}
