
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_mtrr_range {int base; int mask; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct kvm_mtrr_range *VAR_1, u64 *VAR_2, u64 *VAR_3)
{
 u64 VAR_4;

 *VAR_2 = VAR_1->base & VAR_0;

 VAR_4 = VAR_1->mask & VAR_0;




 *VAR_3 = (*VAR_2 | ~VAR_4) + 1;
}
