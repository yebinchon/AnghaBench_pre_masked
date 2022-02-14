
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int diagnose_other; } ;
struct TYPE_7__ {TYPE_2__* sie_block; } ;
struct kvm_vcpu {TYPE_4__ stat; TYPE_3__ arch; } ;
struct TYPE_5__ {int mask; } ;
struct TYPE_6__ {TYPE_1__ gpsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*,int *) ;
 int FUNC_7 (struct kvm_vcpu*,int ) ;
 int FUNC_8 (struct kvm_vcpu*,int) ;

int FUNC_9(struct kvm_vcpu *VAR_3)
{
 int VAR_4 = FUNC_6(VAR_3, ((void*)0)) & 0xffff;

 if (VAR_3->arch.sie_block->gpsw.mask & VAR_2)
  return FUNC_7(VAR_3, VAR_1);

 FUNC_8(VAR_3, VAR_4);
 switch (VAR_4) {
 case 0x10:
  return FUNC_5(VAR_3);
 case 0x44:
  return FUNC_2(VAR_3);
 case 0x9c:
  return FUNC_3(VAR_3);
 case 0x258:
  return FUNC_1(VAR_3);
 case 0x308:
  return FUNC_0(VAR_3);
 case 0x500:
  return FUNC_4(VAR_3);
 default:
  VAR_3->stat.diagnose_other++;
  return -VAR_0;
 }
}
