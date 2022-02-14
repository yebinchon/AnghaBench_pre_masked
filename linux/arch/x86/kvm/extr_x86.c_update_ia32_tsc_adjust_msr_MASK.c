
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {int ia32_tsc_adjust_msr; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef scalar_t__ s64 ;
struct TYPE_4__ {scalar_t__ (* read_l1_tsc_offset ) (struct kvm_vcpu*) ;} ;


 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_1, s64 VAR_2)
{
 u64 VAR_3 = VAR_0->read_l1_tsc_offset(VAR_1);
 VAR_1->arch.ia32_tsc_adjust_msr += VAR_2 - VAR_3;
}
