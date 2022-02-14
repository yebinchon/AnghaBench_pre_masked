
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kvm_mtrr {int * var_ranges; } ;
struct TYPE_2__ {struct kvm_mtrr mtrr_state; } ;
struct kvm_vcpu {int kvm; TYPE_1__ arch; } ;
typedef int gfn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int*,int*) ;
 int FUNC_1 (struct kvm_mtrr*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct kvm_mtrr*) ;
 int VAR_2 ;
 int FUNC_6 (int *,int*,int*) ;

__attribute__((used)) static void FUNC_7(struct kvm_vcpu *VAR_3, u32 VAR_4)
{
 struct kvm_mtrr *VAR_5 = &VAR_3->arch.mtrr_state;
 gfn_t VAR_6, VAR_7;
 int VAR_8;

 if (VAR_4 == VAR_0 || !VAR_2 ||
       !FUNC_3(VAR_3->kvm))
  return;

 if (!FUNC_5(VAR_5) && VAR_4 != VAR_1)
  return;


 if (FUNC_0(VAR_4, &VAR_6, &VAR_7)) {
  if (!FUNC_1(VAR_5))
   return;
 } else if (VAR_4 == VAR_1) {
  VAR_6 = 0x0;
  VAR_7 = ~0ULL;
 } else {

  VAR_8 = (VAR_4 - 0x200) / 2;
  FUNC_6(&VAR_5->var_ranges[VAR_8], &VAR_6, &VAR_7);
 }

 FUNC_4(VAR_3->kvm, FUNC_2(VAR_6), FUNC_2(VAR_7));
}
