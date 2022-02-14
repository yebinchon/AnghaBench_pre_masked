
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_11__ {int instruction_sigp_arch; } ;
struct TYPE_10__ {TYPE_2__* sie_block; } ;
struct kvm_vcpu {TYPE_7__* run; TYPE_4__ stat; TYPE_3__ arch; } ;
struct TYPE_12__ {int * gprs; } ;
struct TYPE_13__ {TYPE_5__ regs; } ;
struct TYPE_14__ {TYPE_6__ s; } ;
struct TYPE_8__ {int mask; } ;
struct TYPE_9__ {int ipa; TYPE_1__ gpsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (struct kvm_vcpu*,int ,int *) ;
 int FUNC_1 (struct kvm_vcpu*,int,int ,int ,int *) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,int,int ) ;
 int FUNC_3 (struct kvm_vcpu*,int *) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;
 int FUNC_5 (struct kvm_vcpu*,int) ;
 int FUNC_6 (struct kvm_vcpu*,int,int ,int ) ;

int FUNC_7(struct kvm_vcpu *VAR_3)
{
 int VAR_4 = (VAR_3->arch.sie_block->ipa & 0x00f0) >> 4;
 int VAR_5 = VAR_3->arch.sie_block->ipa & 0x000f;
 u32 VAR_6;
 u16 VAR_7 = VAR_3->run->s.regs.gprs[VAR_5];
 u8 VAR_8;
 int VAR_9;


 if (VAR_3->arch.sie_block->gpsw.mask & VAR_2)
  return FUNC_4(VAR_3, VAR_1);

 VAR_8 = FUNC_3(VAR_3, ((void*)0));
 if (FUNC_2(VAR_3, VAR_8, VAR_7))
  return -VAR_0;

 if (VAR_4 % 2)
  VAR_6 = VAR_3->run->s.regs.gprs[VAR_4];
 else
  VAR_6 = VAR_3->run->s.regs.gprs[VAR_4 + 1];

 FUNC_6(VAR_3, VAR_8, VAR_7, VAR_6);
 switch (VAR_8) {
 case 128:
  VAR_3->stat.instruction_sigp_arch++;
  VAR_9 = FUNC_0(VAR_3, VAR_6,
         &VAR_3->run->s.regs.gprs[VAR_4]);
  break;
 default:
  VAR_9 = FUNC_1(VAR_3, VAR_8, VAR_7,
         VAR_6,
         &VAR_3->run->s.regs.gprs[VAR_4]);
 }

 if (VAR_9 < 0)
  return VAR_9;

 FUNC_5(VAR_3, VAR_9);
 return 0;
}
