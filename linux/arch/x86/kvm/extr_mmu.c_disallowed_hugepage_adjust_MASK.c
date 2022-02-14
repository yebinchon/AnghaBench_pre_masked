
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_shadow_walk_iterator {int* sptep; int level; } ;
typedef int kvm_pfn_t ;
typedef int gfn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct kvm_shadow_walk_iterator VAR_1,
           gfn_t VAR_2, kvm_pfn_t *VAR_3, int *VAR_4)
{
 int VAR_5 = *VAR_4;
 u64 VAR_6 = *VAR_1.sptep;

 if (VAR_1.level == VAR_5 && VAR_5 > VAR_0 &&
     FUNC_2() &&
     FUNC_3(VAR_6) &&
     !FUNC_1(VAR_6)) {







  u64 VAR_7 = FUNC_0(VAR_5) - FUNC_0(VAR_5 - 1);
  *VAR_3 |= VAR_2 & VAR_7;
  (*VAR_4)--;
 }
}
