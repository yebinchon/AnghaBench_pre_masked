
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kvmppc_book3s_shadow_vcpu {scalar_t__ in_use; int slb_max; int slb; } ;
struct TYPE_6__ {int shadow_vcpu; } ;
struct kvm_vcpu {TYPE_2__ arch; int cpu; } ;
struct TYPE_5__ {int kvm_shadow_vcpu; } ;
struct TYPE_8__ {TYPE_1__ thread; } ;
struct TYPE_7__ {int slb_shadow_max; int slb_shadow; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_4__* VAR_4 ;
 int FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 () ;
 struct kvmppc_book3s_shadow_vcpu* FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvmppc_book3s_shadow_vcpu*) ;
 TYPE_3__* FUNC_10 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_11(struct kvm_vcpu *VAR_5, int VAR_6)
{
 if (FUNC_0(VAR_1) &&
     FUNC_0(VAR_0))
  FUNC_6(VAR_3, FUNC_5(VAR_3) & ~VAR_2);

 VAR_5->cpu = FUNC_7();




 if (FUNC_2(VAR_5))
  FUNC_1(VAR_5);

 FUNC_3(VAR_5);
}
