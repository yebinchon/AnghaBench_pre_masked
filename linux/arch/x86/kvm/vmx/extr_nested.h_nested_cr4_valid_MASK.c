
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_4__ {int cr4_fixed1; int cr4_fixed0; } ;
struct TYPE_5__ {TYPE_1__ msrs; } ;
struct TYPE_6__ {TYPE_2__ nested; } ;


 int FUNC_0 (unsigned long,int ,int ) ;
 TYPE_3__* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static bool FUNC_2(struct kvm_vcpu *VAR_0, unsigned long VAR_1)
{
 u64 VAR_2 = FUNC_1(VAR_0)->nested.msrs.cr4_fixed0;
 u64 VAR_3 = FUNC_1(VAR_0)->nested.msrs.cr4_fixed1;

 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
