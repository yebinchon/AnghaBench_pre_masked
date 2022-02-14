
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct x86_emulate_ctxt {unsigned long eip; } ;
struct TYPE_4__ {unsigned long last_retry_eip; unsigned long last_retry_addr; TYPE_1__* mmu; } ;
struct kvm_vcpu {int kvm; TYPE_2__ arch; } ;
struct TYPE_3__ {int direct_map; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct kvm_vcpu* FUNC_1 (struct x86_emulate_ctxt*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 unsigned long FUNC_4 (struct kvm_vcpu*,unsigned long,int *) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct x86_emulate_ctxt*) ;

__attribute__((used)) static bool FUNC_7(struct x86_emulate_ctxt *VAR_1,
         unsigned long VAR_2, int VAR_3)
{
 struct kvm_vcpu *VAR_4 = FUNC_1(VAR_1);
 unsigned long VAR_5, VAR_6, VAR_7 = VAR_2;

 VAR_5 = VAR_4->arch.last_retry_eip;
 VAR_6 = VAR_4->arch.last_retry_addr;
 VAR_4->arch.last_retry_eip = VAR_4->arch.last_retry_addr = 0;

 if (!(VAR_3 & VAR_0))
  return 0;

 if (FUNC_0(FUNC_3(VAR_4)))
  return 0;

 if (FUNC_6(VAR_1))
  return 0;

 if (VAR_1->eip == VAR_5 && VAR_6 == VAR_2)
  return 0;

 VAR_4->arch.last_retry_eip = VAR_1->eip;
 VAR_4->arch.last_retry_addr = VAR_2;

 if (!VAR_4->arch.mmu->direct_map)
  VAR_7 = FUNC_4(VAR_4, VAR_2, ((void*)0));

 FUNC_5(VAR_4->kvm, FUNC_2(VAR_7));

 return 1;
}
