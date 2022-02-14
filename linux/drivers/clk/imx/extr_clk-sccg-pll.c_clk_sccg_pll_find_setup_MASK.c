
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
struct clk_sccg_pll_setup {int bypass; void* fout; void* fout_request; int fout_error; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct clk_sccg_pll_setup*,struct clk_sccg_pll_setup*,void*) ;
 int FUNC_1 (struct clk_sccg_pll_setup*,struct clk_sccg_pll_setup*,void*) ;
 int FUNC_2 (struct clk_sccg_pll_setup*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct clk_sccg_pll_setup *VAR_2,
     uint64_t VAR_3,
     uint64_t VAR_4, int VAR_5)
{
 struct clk_sccg_pll_setup VAR_6;
 int VAR_7 = -VAR_0;

 FUNC_2(&VAR_6, 0, sizeof(struct clk_sccg_pll_setup));
 FUNC_2(VAR_2, 0, sizeof(struct clk_sccg_pll_setup));

 VAR_6.fout_error = VAR_1;
 VAR_6.fout_request = VAR_4;

 switch (VAR_5) {

 case 129:
  if (VAR_3 == VAR_4) {
   VAR_2->bypass = 129;
   VAR_2->fout = VAR_4;
   VAR_7 = 0;
  }
  break;

 case 130:
  VAR_7 = FUNC_1(VAR_2, &VAR_6, VAR_3);
  break;

 case 128:
  VAR_7 = FUNC_0(VAR_2, &VAR_6, VAR_3);
  break;
 }

 return VAR_7;
}
