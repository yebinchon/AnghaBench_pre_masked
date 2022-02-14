
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_2__ {int guest_owned_ext; int shadow_msr; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_16)
{
 ulong VAR_17 = FUNC_0(VAR_16);
 ulong VAR_18 = VAR_17;






 VAR_18 &= VAR_3 | VAR_4 | VAR_13 | VAR_12 | VAR_0 | VAR_8;


 VAR_18 |= VAR_9 | VAR_11 | VAR_6 | VAR_1 | VAR_10 | VAR_2;

 VAR_18 |= (VAR_17 & VAR_16->arch.guest_owned_ext);
 VAR_16->arch.shadow_msr = VAR_18;
}
