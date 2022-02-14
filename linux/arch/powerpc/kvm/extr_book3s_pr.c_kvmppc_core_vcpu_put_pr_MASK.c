
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_book3s_shadow_vcpu {int slb_max; int slb; scalar_t__ in_use; } ;
struct kvm_vcpu {int cpu; } ;
struct TYPE_2__ {int slb_shadow_max; int slb_shadow; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 struct kvmppc_book3s_shadow_vcpu* FUNC_10 (struct kvm_vcpu*) ;
 int FUNC_11 (struct kvmppc_book3s_shadow_vcpu*) ;
 TYPE_1__* FUNC_12 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_13(struct kvm_vcpu *VAR_8)
{
 if (FUNC_4(VAR_8))
  FUNC_6(VAR_8);

 FUNC_2(VAR_8, VAR_4 | VAR_5 | VAR_6);
 FUNC_3(VAR_8, VAR_2);
 FUNC_5(VAR_8);


 if (FUNC_0(VAR_1) &&
     FUNC_0(VAR_0))
  FUNC_9(VAR_7, FUNC_8(VAR_7) | VAR_3);

 VAR_8->cpu = -1;
}
