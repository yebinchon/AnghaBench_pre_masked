
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long* regs; int regs_avail; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef enum kvm_reg { ____Placeholder_kvm_reg } kvm_reg ;
struct TYPE_4__ {int (* cache_reg ) (struct kvm_vcpu*,int) ;} ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int) ;
 int FUNC_1 (int,unsigned long*) ;

__attribute__((used)) static inline unsigned long FUNC_2(struct kvm_vcpu *VAR_1,
           enum kvm_reg VAR_2)
{
 if (!FUNC_1(VAR_2, (unsigned long *)&VAR_1->arch.regs_avail))
  VAR_0->cache_reg(VAR_1, VAR_2);

 return VAR_1->arch.regs[VAR_2];
}
