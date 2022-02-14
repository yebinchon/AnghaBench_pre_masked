
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int (* tlb_flush ) (struct kvm_vcpu*,int) ;} ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*,int) ;

int FUNC_5(struct kvm_vcpu *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  goto out;
 VAR_2 = FUNC_2(VAR_1);
 FUNC_1(VAR_1);
 if (VAR_2)
  goto out;
 FUNC_0(VAR_1);
 VAR_0->tlb_flush(VAR_1, 1);
out:
 return VAR_2;
}
