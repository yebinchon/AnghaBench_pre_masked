
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore_extra_reg {int ref; } ;
struct intel_uncore_box {struct intel_uncore_extra_reg* shared_regs; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct intel_uncore_box *VAR_1, int VAR_2)
{
 struct intel_uncore_extra_reg *VAR_3;

 if (VAR_2 < VAR_0) {
  VAR_3 = &VAR_1->shared_regs[VAR_2];
  FUNC_0(&VAR_3->ref);
  return;
 }

 VAR_2 -= VAR_0;
 VAR_3 = &VAR_1->shared_regs[VAR_0];
 FUNC_1(1 << (VAR_2 * 8), &VAR_3->ref);
}
