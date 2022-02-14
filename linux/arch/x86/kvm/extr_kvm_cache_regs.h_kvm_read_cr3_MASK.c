
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_3__ {int cr3; int regs_avail; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int (* decache_cr3 ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline ulong FUNC_2(struct kvm_vcpu *VAR_2)
{
 if (!FUNC_1(VAR_0, (ulong *)&VAR_2->arch.regs_avail))
  VAR_1->decache_cr3(VAR_2);
 return VAR_2->arch.cr3;
}
