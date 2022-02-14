
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int np; } ;
struct generic_pm_domain {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct cpg_mssr_clk_domain {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 struct cpg_mssr_clk_domain* VAR_1 ;
 scalar_t__ FUNC_3 (struct of_phandle_args*,struct cpg_mssr_clk_domain*) ;
 int FUNC_4 (struct device*,char*) ;
 struct clk* FUNC_5 (struct of_phandle_args*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct device_node*,char*,char*,int,struct of_phandle_args*) ;
 int FUNC_8 (struct device*,struct clk*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*) ;

int FUNC_11(struct generic_pm_domain *VAR_2, struct device *VAR_3)
{
 struct cpg_mssr_clk_domain *VAR_4 = VAR_1;
 struct device_node *VAR_5 = VAR_3->of_node;
 struct of_phandle_args VAR_6;
 struct clk *VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 if (!VAR_4) {
  FUNC_4(VAR_3, "CPG/MSSR clock domain not yet available\n");
  return -VAR_0;
 }

 while (!FUNC_7(VAR_5, "clocks", "#clock-cells", VAR_8,
        &VAR_6)) {
  if (FUNC_3(&VAR_6, VAR_4))
   goto found;

  FUNC_6(VAR_6.np);
  VAR_8++;
 }

 return 0;

found:
 VAR_7 = FUNC_5(&VAR_6);
 FUNC_6(VAR_6.np);

 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_9 = FUNC_9(VAR_3);
 if (VAR_9)
  goto fail_put;

 VAR_9 = FUNC_8(VAR_3, VAR_7);
 if (VAR_9)
  goto fail_destroy;

 return 0;

fail_destroy:
 FUNC_10(VAR_3);
fail_put:
 FUNC_2(VAR_7);
 return VAR_9;
}
