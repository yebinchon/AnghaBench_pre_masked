
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_onecell_data {unsigned int clk_num; int * clks; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * FUNC_1 (unsigned int,int,int ) ;
 int FUNC_2 (struct clk_onecell_data*) ;
 struct clk_onecell_data* FUNC_3 (int,int ) ;

struct clk_onecell_data *FUNC_4(unsigned int VAR_2)
{
 int VAR_3;
 struct clk_onecell_data *VAR_4;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->clks = FUNC_1(VAR_2, sizeof(*VAR_4->clks), VAR_1);
 if (!VAR_4->clks)
  goto err_out;

 VAR_4->clk_num = VAR_2;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  VAR_4->clks[VAR_3] = FUNC_0(-VAR_0);

 return VAR_4;
err_out:
 FUNC_2(VAR_4);

 return ((void*)0);
}
