
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_7__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {int kvm; TYPE_5__* run; TYPE_2__ arch; } ;
struct TYPE_8__ {int * gprs; } ;
struct TYPE_9__ {TYPE_3__ regs; } ;
struct TYPE_10__ {TYPE_4__ s; } ;
struct TYPE_6__ {int ipa; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct kvm_vcpu* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,int *) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,scalar_t__,int ) ;

int FUNC_6(struct kvm_vcpu *VAR_3)
{
 int VAR_4 = VAR_3->arch.sie_block->ipa & 0x000f;
 u16 VAR_5 = VAR_3->run->s.regs.gprs[VAR_4];
 struct kvm_vcpu *VAR_6;
 u8 VAR_7 = FUNC_2(VAR_3, ((void*)0));

 FUNC_5(VAR_3, VAR_7, VAR_5);

 if (VAR_7 == VAR_2) {
  VAR_6 = FUNC_1(VAR_3->kvm, VAR_5);
  FUNC_0(VAR_6 == ((void*)0));

  FUNC_4(VAR_6);
  FUNC_3(VAR_3, VAR_1);
  return 0;
 }

 return -VAR_0;
}
