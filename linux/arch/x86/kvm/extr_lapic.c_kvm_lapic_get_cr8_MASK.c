
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

u64 FUNC_1(struct kvm_vcpu *VAR_1)
{
 u64 VAR_2;

 VAR_2 = (u64) FUNC_0(VAR_1->arch.apic, VAR_0);

 return (VAR_2 & 0xf0) >> 4;
}
