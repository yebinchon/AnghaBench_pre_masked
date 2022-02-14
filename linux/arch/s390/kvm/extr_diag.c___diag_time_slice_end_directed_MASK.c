
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


struct TYPE_12__ {int diagnose_9c; } ;
struct TYPE_11__ {TYPE_4__* sie_block; } ;
struct kvm_vcpu {int vcpu_id; int kvm; TYPE_6__ stat; TYPE_5__ arch; TYPE_3__* run; } ;
struct TYPE_10__ {int ipa; } ;
struct TYPE_7__ {int* gprs; } ;
struct TYPE_8__ {TYPE_1__ regs; } ;
struct TYPE_9__ {TYPE_2__ s; } ;


 int FUNC_0 (struct kvm_vcpu*,int,char*,int) ;
 struct kvm_vcpu* FUNC_1 (int ,int) ;
 int FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_0)
{
 struct kvm_vcpu *VAR_1;
 int VAR_2;

 VAR_2 = VAR_0->run->s.regs.gprs[(VAR_0->arch.sie_block->ipa & 0xf0) >> 4];
 VAR_0->stat.diagnose_9c++;
 FUNC_0(VAR_0, 5, "diag time slice end directed to %d", VAR_2);

 if (VAR_2 == VAR_0->vcpu_id)
  return 0;

 VAR_1 = FUNC_1(VAR_0->kvm, VAR_2);
 if (VAR_1)
  FUNC_2(VAR_1);
 return 0;
}
