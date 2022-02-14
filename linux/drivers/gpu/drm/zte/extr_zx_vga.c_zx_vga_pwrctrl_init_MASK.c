
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_vga_pwrctrl {int mask; int reg; struct regmap* regmap; } ;
struct zx_vga {struct device* dev; struct zx_vga_pwrctrl pwrctrl; } ;
struct regmap {int dummy; } ;
struct of_phandle_args {int np; int * args; } ;
struct device {int of_node; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,int ,struct of_phandle_args*) ;
 struct regmap* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct zx_vga *VAR_0)
{
 struct zx_vga_pwrctrl *VAR_1 = &VAR_0->pwrctrl;
 struct device *VAR_2 = VAR_0->dev;
 struct of_phandle_args VAR_3;
 struct regmap *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_2->of_node,
    "zte,vga-power-control", 2, 0, &VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_4(VAR_3.np);
 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_1(VAR_4);
  goto out;
 }

 VAR_1->regmap = VAR_4;
 VAR_1->reg = VAR_3.args[0];
 VAR_1->mask = VAR_3.args[1];

out:
 FUNC_2(VAR_3.np);
 return VAR_5;
}
