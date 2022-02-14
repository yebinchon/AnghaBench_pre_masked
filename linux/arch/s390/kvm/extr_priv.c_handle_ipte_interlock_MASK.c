
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


struct TYPE_9__ {TYPE_2__* sie_block; } ;
struct TYPE_7__ {int instruction_ipte_interlock; } ;
struct kvm_vcpu {TYPE_5__* kvm; TYPE_3__ arch; TYPE_1__ stat; } ;
struct TYPE_12__ {scalar_t__ pstate; } ;
struct TYPE_10__ {int ipte_wq; } ;
struct TYPE_11__ {TYPE_4__ arch; } ;
struct TYPE_8__ {int gpsw; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,char*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 TYPE_6__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct kvm_vcpu *VAR_1)
{
 VAR_1->stat.instruction_ipte_interlock++;
 if (FUNC_4(VAR_1->arch.sie_block->gpsw).pstate)
  return FUNC_2(VAR_1, VAR_0);
 FUNC_5(VAR_1->kvm->arch.ipte_wq, !FUNC_1(VAR_1));
 FUNC_3(VAR_1);
 FUNC_0(VAR_1, 4, "%s", "retrying ipte interlock operation");
 return 0;
}
