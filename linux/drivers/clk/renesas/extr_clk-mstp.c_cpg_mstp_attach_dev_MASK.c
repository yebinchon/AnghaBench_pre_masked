
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int np; } ;
struct generic_pm_domain {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct clk {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 struct clk* FUNC_3 (struct of_phandle_args*) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct device_node*,char*,char*,int,struct of_phandle_args*) ;
 int FUNC_8 (struct device*,struct clk*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*) ;

int FUNC_11(struct generic_pm_domain *VAR_0, struct device *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->of_node;
 struct of_phandle_args VAR_3;
 struct clk *VAR_4;
 int VAR_5 = 0;
 int VAR_6;

 while (!FUNC_7(VAR_2, "clocks", "#clock-cells", VAR_5,
        &VAR_3)) {
  if (FUNC_4(VAR_3.np,
         "renesas,cpg-mstp-clocks"))
   goto found;


  if (FUNC_5(VAR_3.np, "zb_clk"))
   goto found;

  FUNC_6(VAR_3.np);
  VAR_5++;
 }

 return 0;

found:
 VAR_4 = FUNC_3(&VAR_3);
 FUNC_6(VAR_3.np);

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_6 = FUNC_9(VAR_1);
 if (VAR_6)
  goto fail_put;

 VAR_6 = FUNC_8(VAR_1, VAR_4);
 if (VAR_6)
  goto fail_destroy;

 return 0;

fail_destroy:
 FUNC_10(VAR_1);
fail_put:
 FUNC_2(VAR_4);
 return VAR_6;
}
