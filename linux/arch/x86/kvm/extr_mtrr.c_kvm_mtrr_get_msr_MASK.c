
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef int u32 ;
struct TYPE_5__ {unsigned long long deftype; TYPE_1__* var_ranges; int * fixed_ranges; } ;
struct TYPE_6__ {unsigned long long pat; TYPE_2__ mtrr_state; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct TYPE_4__ {unsigned long long base; unsigned long long mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long long FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

int FUNC_3(struct kvm_vcpu *VAR_4, u32 VAR_5, u64 *VAR_6)
{
 int VAR_7;


 if (VAR_5 == VAR_2) {






  *VAR_6 = 0x500 | VAR_0;
  return 0;
 }

 if (!FUNC_2(VAR_5))
  return 1;

 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7 >= 0)
  *VAR_6 = *(u64 *)&VAR_4->arch.mtrr_state.fixed_ranges[VAR_7];
 else if (VAR_5 == VAR_3)
  *VAR_6 = VAR_4->arch.mtrr_state.deftype;
 else if (VAR_5 == VAR_1)
  *VAR_6 = VAR_4->arch.pat;
 else {
  int VAR_8;

  VAR_7 = (VAR_5 - 0x200) / 2;
  VAR_8 = VAR_5 - 0x200 - 2 * VAR_7;
  if (!VAR_8)
   *VAR_6 = VAR_4->arch.mtrr_state.var_ranges[VAR_7].base;
  else
   *VAR_6 = VAR_4->arch.mtrr_state.var_ranges[VAR_7].mask;

  *VAR_6 &= (1ULL << FUNC_0(VAR_4)) - 1;
 }

 return 0;
}
