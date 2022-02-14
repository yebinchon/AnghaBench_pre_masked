
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long lp_clk; unsigned int lp_clk_div; } ;
struct TYPE_6__ {unsigned int lp_clk_div; } ;
struct dsi_data {TYPE_1__ current_lp_cinfo; TYPE_3__ user_lp_cinfo; TYPE_2__* data; } ;
struct TYPE_5__ {unsigned int max_pll_lpdiv; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int,unsigned long) ;
 int VAR_1 ;
 int FUNC_1 (struct dsi_data*,int ,int,int,int) ;
 unsigned long FUNC_2 (struct dsi_data*) ;

__attribute__((used)) static int FUNC_3(struct dsi_data *VAR_2)
{
 unsigned long VAR_3;
 unsigned int VAR_4;
 unsigned long VAR_5;
 unsigned int VAR_6 = VAR_2->data->max_pll_lpdiv;


 VAR_4 = VAR_2->user_lp_cinfo.lp_clk_div;

 if (VAR_4 == 0 || VAR_4 > VAR_6)
  return -VAR_1;

 VAR_3 = FUNC_2(VAR_2);

 VAR_5 = VAR_3 / 2 / VAR_4;

 FUNC_0("LP_CLK_DIV %u, LP_CLK %lu\n", VAR_4, VAR_5);
 VAR_2->current_lp_cinfo.lp_clk = VAR_5;
 VAR_2->current_lp_cinfo.lp_clk_div = VAR_4;


 FUNC_1(VAR_2, VAR_0, VAR_4, 12, 0);


 FUNC_1(VAR_2, VAR_0, VAR_3 > 30000000 ? 1 : 0, 21, 21);

 return 0;
}
