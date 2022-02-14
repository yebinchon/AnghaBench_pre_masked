
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {void* deftype; int * fixed_ranges; } ;
struct TYPE_3__ {void* pat; TYPE_2__ mtrr_state; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct kvm_vcpu*,scalar_t__,void*) ;
 int FUNC_2 (struct kvm_vcpu*,scalar_t__,void*) ;
 int FUNC_3 (struct kvm_vcpu*,scalar_t__) ;

int FUNC_4(struct kvm_vcpu *VAR_2, u32 VAR_3, u64 VAR_4)
{
 int VAR_5;

 if (!FUNC_1(VAR_2, VAR_3, VAR_4))
  return 1;

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 >= 0)
  *(u64 *)&VAR_2->arch.mtrr_state.fixed_ranges[VAR_5] = VAR_4;
 else if (VAR_3 == VAR_1)
  VAR_2->arch.mtrr_state.deftype = VAR_4;
 else if (VAR_3 == VAR_0)
  VAR_2->arch.pat = VAR_4;
 else
  FUNC_2(VAR_2, VAR_3, VAR_4);

 FUNC_3(VAR_2, VAR_3);
 return 0;
}
