
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cputm_enabled; int enabled_gmap; } ;
struct kvm_vcpu {int cpu; TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;

void FUNC_4(struct kvm_vcpu *VAR_1, int VAR_2)
{

 FUNC_1(VAR_1->arch.enabled_gmap);
 FUNC_3(VAR_1, VAR_0);
 if (VAR_1->arch.cputm_enabled && !FUNC_2(VAR_1))
  FUNC_0(VAR_1);
 VAR_1->cpu = VAR_2;
}
