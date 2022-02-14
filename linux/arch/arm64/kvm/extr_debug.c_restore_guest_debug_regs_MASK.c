
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int mdscr_el1; } ;
struct TYPE_4__ {TYPE_1__ guest_debug_preserved; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_1)
{
 u64 VAR_2 = VAR_1->arch.guest_debug_preserved.mdscr_el1;

 FUNC_2(VAR_1, VAR_2, VAR_0);

 FUNC_0("Restored MDSCR_EL1",
    FUNC_1(VAR_1, VAR_0));
}
