
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static u8 FUNC_2(struct kvm_vcpu *VAR_1)
{
 u8 VAR_2 = FUNC_1();
 u8 VAR_3 = FUNC_0(VAR_1->arch.apic, VAR_0);

 return ((VAR_2 & 0xf0) > (VAR_3 & 0xf0));
}
