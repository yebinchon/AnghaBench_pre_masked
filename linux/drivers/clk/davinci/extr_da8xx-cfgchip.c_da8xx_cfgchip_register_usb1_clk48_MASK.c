
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct clk_init_data* init; } ;
struct da8xx_usb1_clk48 {TYPE_1__ hw; struct regmap* regmap; } ;
struct clk_init_data {char* name; char const* const* parent_names; int num_parents; int * ops; } ;


 int VAR_0 ;
 struct da8xx_usb1_clk48* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,TYPE_1__*) ;
 struct da8xx_usb1_clk48* FUNC_2 (struct device*,int,int ) ;

__attribute__((used)) static struct da8xx_usb1_clk48 *
FUNC_3(struct device *VAR_3,
      struct regmap *VAR_4)
{
 const char * const VAR_5[] = { "usb0_clk48", "usb_refclkin" };
 struct da8xx_usb1_clk48 *VAR_6;
 struct clk_init_data VAR_7;
 int VAR_8;

 VAR_6 = FUNC_2(VAR_3, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_7.name = "usb1_clk48";
 VAR_7.ops = &VAR_2;
 VAR_7.parent_names = VAR_5;
 VAR_7.num_parents = 2;

 VAR_6->hw.init = &VAR_7;
 VAR_6->regmap = VAR_4;

 VAR_8 = FUNC_1(VAR_3, &VAR_6->hw);
 if (VAR_8 < 0)
  return FUNC_0(VAR_8);

 return VAR_6;
}
