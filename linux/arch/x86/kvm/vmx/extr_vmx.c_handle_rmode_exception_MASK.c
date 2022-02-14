
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ halt_request; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int) ;
 int FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_2,
      int VAR_3, u32 VAR_4)
{




 if (((VAR_3 == VAR_0) || (VAR_3 == VAR_1)) && VAR_4 == 0) {
  if (FUNC_0(VAR_2, 0)) {
   if (VAR_2->arch.halt_request) {
    VAR_2->arch.halt_request = 0;
    return FUNC_2(VAR_2);
   }
   return 1;
  }
  return 0;
 }






 FUNC_1(VAR_2, VAR_3);
 return 1;
}
