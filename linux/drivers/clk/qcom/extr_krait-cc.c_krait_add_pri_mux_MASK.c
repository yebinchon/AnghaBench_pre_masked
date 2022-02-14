
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct clk_init_data* init; } ;
struct krait_mux_clk {int mask; unsigned int offset; int lpl; int safe_sel; TYPE_1__ hw; int parent_map; scalar_t__ shift; } ;
struct device {int dummy; } ;
struct clk_init_data {char const** parent_names; char const* name; int flags; int * ops; int num_parents; } ;
struct clk {int dummy; } ;


 int FUNC_0 (char const**) ;
 int VAR_0 ;
 int VAR_1 ;
 struct clk* FUNC_1 (int ) ;
 int VAR_2 ;
 struct clk* FUNC_2 (struct device*,TYPE_1__*) ;
 struct krait_mux_clk* FUNC_3 (struct device*,int,int ) ;
 void* FUNC_4 (int ,char*,char const*) ;
 int FUNC_5 (char const*) ;
 int VAR_3 ;
 int FUNC_6 (struct device*,struct clk*,struct krait_mux_clk*) ;
 int VAR_4 ;

__attribute__((used)) static struct clk *
FUNC_7(struct device *VAR_5, int VAR_6, const char *VAR_7,
    unsigned int VAR_8)
{
 int VAR_9;
 struct krait_mux_clk *VAR_10;
 const char *VAR_11[3];
 struct clk_init_data VAR_12 = {
  .parent_names = VAR_11,
  .num_parents = FUNC_0(VAR_11),
  .ops = &VAR_3,
  .flags = VAR_0,
 };
 struct clk *VAR_13;

 VAR_10 = FUNC_3(VAR_5, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return FUNC_1(-VAR_1);

 VAR_10->mask = 0x3;
 VAR_10->shift = 0;
 VAR_10->offset = VAR_8;
 VAR_10->lpl = VAR_6 >= 0;
 VAR_10->parent_map = VAR_4;
 VAR_10->hw.init = &VAR_12;
 VAR_10->safe_sel = 2;

 VAR_12.name = FUNC_4(VAR_2, "krait%s_pri_mux", VAR_7);
 if (!VAR_12.name)
  return FUNC_1(-VAR_1);

 VAR_11[0] = FUNC_4(VAR_2, "hfpll%s", VAR_7);
 if (!VAR_11[0]) {
  VAR_13 = FUNC_1(-VAR_1);
  goto err_p0;
 }

 VAR_11[1] = FUNC_4(VAR_2, "hfpll%s_div", VAR_7);
 if (!VAR_11[1]) {
  VAR_13 = FUNC_1(-VAR_1);
  goto err_p1;
 }

 VAR_11[2] = FUNC_4(VAR_2, "krait%s_sec_mux", VAR_7);
 if (!VAR_11[2]) {
  VAR_13 = FUNC_1(-VAR_1);
  goto err_p2;
 }

 VAR_13 = FUNC_2(VAR_5, &VAR_10->hw);

 VAR_9 = FUNC_6(VAR_5, VAR_13, VAR_10);
 if (VAR_9)
  goto err_p3;
err_p3:
 FUNC_5(VAR_11[2]);
err_p2:
 FUNC_5(VAR_11[1]);
err_p1:
 FUNC_5(VAR_11[0]);
err_p0:
 FUNC_5(VAR_12.name);
 return VAR_13;
}
