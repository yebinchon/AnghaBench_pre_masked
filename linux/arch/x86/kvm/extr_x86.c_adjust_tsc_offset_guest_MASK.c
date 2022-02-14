
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct kvm_vcpu {int dummy; } ;
typedef scalar_t__ s64 ;
struct TYPE_2__ {scalar_t__ (* read_l1_tsc_offset ) (struct kvm_vcpu*) ;} ;


 int FUNC_0 (struct kvm_vcpu*,scalar_t__) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static inline void FUNC_2(struct kvm_vcpu *VAR_1,
        s64 VAR_2)
{
 u64 VAR_3 = VAR_0->read_l1_tsc_offset(VAR_1);
 FUNC_0(VAR_1, VAR_3 + VAR_2);
}
