
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dpll_hw_state {int pll0; int pll3; int pll2; int pll1; int ebb0; } ;
struct dpll {int m1; int m2; int n; int p1; int p2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,struct dpll*) ;

__attribute__((used)) static int FUNC_1(const struct intel_dpll_hw_state *VAR_9)
{
 struct dpll VAR_10;

 VAR_10.m1 = 2;
 VAR_10.m2 = (VAR_9->pll0 & VAR_2) << 22;
 if (VAR_9->pll3 & VAR_0)
  VAR_10.m2 |= VAR_9->pll2 & VAR_1;
 VAR_10.n = (VAR_9->pll1 & VAR_3) >> VAR_4;
 VAR_10.p1 = (VAR_9->ebb0 & VAR_5) >> VAR_6;
 VAR_10.p2 = (VAR_9->ebb0 & VAR_7) >> VAR_8;

 return FUNC_0(100000, &VAR_10);
}
