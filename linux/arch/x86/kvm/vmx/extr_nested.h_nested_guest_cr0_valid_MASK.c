
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct vmcs12 {int dummy; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_4__ {int cr0_fixed0; int cr0_fixed1; int secondary_ctls_high; } ;
struct TYPE_5__ {TYPE_1__ msrs; } ;
struct TYPE_6__ {TYPE_2__ nested; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long,int,int) ;
 struct vmcs12* FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (struct vmcs12*,int) ;
 TYPE_3__* FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static bool FUNC_4(struct kvm_vcpu *VAR_3, unsigned long VAR_4)
{
 u64 VAR_5 = FUNC_3(VAR_3)->nested.msrs.cr0_fixed0;
 u64 VAR_6 = FUNC_3(VAR_3)->nested.msrs.cr0_fixed1;
 struct vmcs12 *VAR_7 = FUNC_1(VAR_3);

 if (FUNC_3(VAR_3)->nested.msrs.secondary_ctls_high &
  VAR_0 &&
     FUNC_2(VAR_7, VAR_0))
  VAR_5 &= ~(VAR_1 | VAR_2);

 return FUNC_0(VAR_4, VAR_5, VAR_6);
}
