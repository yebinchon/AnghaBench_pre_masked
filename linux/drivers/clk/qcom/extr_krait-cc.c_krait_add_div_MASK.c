
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct clk_init_data* init; } ;
struct krait_div2_clk {int width; int shift; int lpl; unsigned int offset; TYPE_1__ hw; } ;
struct device {int dummy; } ;
struct clk_init_data {int num_parents; char const* name; char const** parent_names; int flags; int * ops; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct clk*) ;
 struct clk* FUNC_1 (struct device*,TYPE_1__*) ;
 struct krait_div2_clk* FUNC_2 (struct device*,int,int ) ;
 void* FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (char const*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_5(struct device *VAR_4, int VAR_5, const char *VAR_6, unsigned int VAR_7)
{
 struct krait_div2_clk *VAR_8;
 struct clk_init_data VAR_9 = {
  .num_parents = 1,
  .ops = &VAR_3,
  .flags = VAR_0,
 };
 const char *VAR_10[1];
 struct clk *VAR_11;

 VAR_8 = FUNC_2(VAR_4, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->width = 2;
 VAR_8->shift = 6;
 VAR_8->lpl = VAR_5 >= 0;
 VAR_8->offset = VAR_7;
 VAR_8->hw.init = &VAR_9;

 VAR_9.name = FUNC_3(VAR_2, "hfpll%s_div", VAR_6);
 if (!VAR_9.name)
  return -VAR_1;

 VAR_9.parent_names = VAR_10;
 VAR_10[0] = FUNC_3(VAR_2, "hfpll%s", VAR_6);
 if (!VAR_10[0]) {
  FUNC_4(VAR_9.name);
  return -VAR_1;
 }

 VAR_11 = FUNC_1(VAR_4, &VAR_8->hw);
 FUNC_4(VAR_10[0]);
 FUNC_4(VAR_9.name);

 return FUNC_0(VAR_11);
}
