
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_sccg_pll_setup {int divq; int vco2; int vco1; int divr2; int divf2; int fout; int bypass; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct clk_sccg_pll_setup*,struct clk_sccg_pll_setup*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct clk_sccg_pll_setup *VAR_5,
    struct clk_sccg_pll_setup *VAR_6)
{
 int VAR_7 = -VAR_0;

 for (VAR_6->divq = 0; VAR_6->divq <= VAR_2;
      VAR_6->divq++) {
  VAR_6->vco2 = VAR_6->vco1;
  FUNC_1(VAR_6->vco2, VAR_6->divr2 + 1);
  VAR_6->vco2 *= 2;
  VAR_6->vco2 *= VAR_6->divf2 + 1;
  if (VAR_6->vco2 >= VAR_4 &&
    VAR_6->vco2 <= VAR_3) {
   VAR_6->fout = VAR_6->vco2;
   FUNC_1(VAR_6->fout, 2 * (VAR_6->divq + 1));

   VAR_7 = FUNC_0(VAR_5, VAR_6);
   if (!VAR_7) {
    VAR_6->bypass = VAR_1;
    return VAR_7;
   }
  }
 }

 return VAR_7;
}
