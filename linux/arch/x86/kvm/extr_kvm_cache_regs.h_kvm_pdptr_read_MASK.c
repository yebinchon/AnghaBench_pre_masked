
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {TYPE_1__* walk_mmu; int regs_avail; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
typedef enum kvm_reg { ____Placeholder_kvm_reg } kvm_reg ;
struct TYPE_6__ {int (* cache_reg ) (struct kvm_vcpu*,int) ;} ;
struct TYPE_4__ {int * pdptrs; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct kvm_vcpu*,int) ;
 int FUNC_2 (scalar_t__,unsigned long*) ;

__attribute__((used)) static inline u64 FUNC_3(struct kvm_vcpu *VAR_2, int VAR_3)
{
 FUNC_0();

 if (!FUNC_2(VAR_0,
        (unsigned long *)&VAR_2->arch.regs_avail))
  VAR_1->cache_reg(VAR_2, (enum kvm_reg)VAR_0);

 return VAR_2->arch.walk_mmu->pdptrs[VAR_3];
}
