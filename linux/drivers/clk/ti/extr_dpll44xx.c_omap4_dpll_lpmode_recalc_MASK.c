
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpll_data {int last_rounded_n; long last_rounded_m; int last_rounded_lpmode; int clk_ref; } ;


 long VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct dpll_data *VAR_2)
{
 long VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_2->clk_ref) / (VAR_2->last_rounded_n + 1);
 VAR_4 = VAR_3 * VAR_2->last_rounded_m;

 if ((VAR_3 < VAR_0) && (VAR_4 < VAR_1))
  VAR_2->last_rounded_lpmode = 1;
 else
  VAR_2->last_rounded_lpmode = 0;
}
