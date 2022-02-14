
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int diagnose_308; } ;
struct TYPE_8__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_6__* run; int kvm; TYPE_5__ stat; TYPE_2__ arch; } ;
struct TYPE_9__ {int* gprs; } ;
struct TYPE_10__ {TYPE_3__ regs; } ;
struct TYPE_12__ {unsigned long s390_reset_flags; int exit_reason; TYPE_4__ s; } ;
struct TYPE_7__ {int ipa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_7)
{
 unsigned int VAR_8 = VAR_7->arch.sie_block->ipa & 0xf;
 unsigned long VAR_9 = VAR_7->run->s.regs.gprs[VAR_8] & 0xffff;

 FUNC_0(VAR_7, 3, "diag ipl functions, subcode %lx", VAR_9);
 VAR_7->stat.diagnose_308++;
 switch (VAR_9) {
 case 3:
  VAR_7->run->s390_reset_flags = VAR_3;
  break;
 case 4:
  VAR_7->run->s390_reset_flags = 0;
  break;
 default:
  return -VAR_0;
 }

 if (!FUNC_1(VAR_7->kvm))
  FUNC_2(VAR_7);
 VAR_7->run->s390_reset_flags |= VAR_6;
 VAR_7->run->s390_reset_flags |= VAR_5;
 VAR_7->run->s390_reset_flags |= VAR_4;
 VAR_7->run->exit_reason = VAR_2;
 FUNC_0(VAR_7, 3, "requesting userspace resets %llx",
   VAR_7->run->s390_reset_flags);
 FUNC_3(VAR_7->run->s390_reset_flags);
 return -VAR_1;
}
