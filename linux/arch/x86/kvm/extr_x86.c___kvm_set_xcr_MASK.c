
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int xcr0; int guest_supported_xcr0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_8, u32 VAR_9, u64 VAR_10)
{
 u64 VAR_11 = VAR_10;
 u64 VAR_12 = VAR_8->arch.xcr0;
 u64 VAR_13;


 if (VAR_9 != VAR_0)
  return 1;
 if (!(VAR_11 & VAR_5))
  return 1;
 if ((VAR_11 & VAR_7) && !(VAR_11 & VAR_6))
  return 1;






 VAR_13 = VAR_8->arch.guest_supported_xcr0 | VAR_5;
 if (VAR_11 & ~VAR_13)
  return 1;

 if ((!(VAR_11 & VAR_3)) !=
     (!(VAR_11 & VAR_2)))
  return 1;

 if (VAR_11 & VAR_1) {
  if (!(VAR_11 & VAR_7))
   return 1;
  if ((VAR_11 & VAR_1) != VAR_1)
   return 1;
 }
 VAR_8->arch.xcr0 = VAR_11;

 if ((VAR_11 ^ VAR_12) & VAR_4)
  FUNC_0(VAR_8);
 return 0;
}
