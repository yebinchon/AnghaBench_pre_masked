
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct clk_init_data* init; } ;
struct da8xx_usb0_clk48 {TYPE_1__ hw; struct regmap* regmap; struct clk* fck; } ;
struct clk_init_data {char* name; char const* const* parent_names; int num_parents; int * ops; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct da8xx_usb0_clk48* FUNC_0 (struct clk*) ;
 struct da8xx_usb0_clk48* FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 int VAR_3 ;
 int FUNC_4 (struct device*,char*) ;
 struct clk* FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,TYPE_1__*) ;
 struct da8xx_usb0_clk48* FUNC_7 (struct device*,int,int ) ;

__attribute__((used)) static struct da8xx_usb0_clk48 *
FUNC_8(struct device *VAR_4,
      struct regmap *VAR_5)
{
 const char * const VAR_6[] = { "usb_refclkin", "pll0_auxclk" };
 struct clk *VAR_7;
 struct da8xx_usb0_clk48 *VAR_8;
 struct clk_init_data VAR_9;
 int VAR_10;

 VAR_7 = FUNC_5(VAR_4, "fck");
 if (FUNC_2(VAR_7)) {
  if (FUNC_3(VAR_7) != -VAR_1)
   FUNC_4(VAR_4, "Missing fck clock\n");
  return FUNC_0(VAR_7);
 }

 VAR_8 = FUNC_7(VAR_4, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return FUNC_1(-VAR_0);

 VAR_9.name = "usb0_clk48";
 VAR_9.ops = &VAR_3;
 VAR_9.parent_names = VAR_6;
 VAR_9.num_parents = 2;

 VAR_8->hw.init = &VAR_9;
 VAR_8->fck = VAR_7;
 VAR_8->regmap = VAR_5;

 VAR_10 = FUNC_6(VAR_4, &VAR_8->hw);
 if (VAR_10 < 0)
  return FUNC_1(VAR_10);

 return VAR_8;
}
