
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct clk_init_data* init; } ;
struct krait_mux_clk {unsigned int offset; int lpl; int mask; int shift; TYPE_1__ hw; scalar_t__ safe_sel; int parent_map; } ;
struct device {int dummy; } ;
struct clk_init_data {char const** parent_names; char const* name; int flags; int * ops; int num_parents; } ;
struct clk {int dummy; } ;


 int FUNC_0 (char const**) ;
 int VAR_0 ;
 int VAR_1 ;
 struct clk* FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (struct clk*) ;
 struct clk* FUNC_3 (struct device*,TYPE_1__*) ;
 struct krait_mux_clk* FUNC_4 (struct device*,int,int ) ;
 void* FUNC_5 (int ,char*,char const*) ;
 int FUNC_6 (char const*) ;
 int VAR_3 ;
 int FUNC_7 (struct device*,struct clk*,struct krait_mux_clk*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_8(struct device *VAR_5, int VAR_6, const char *VAR_7,
    unsigned int VAR_8, bool VAR_9)
{
 int VAR_10;
 struct krait_mux_clk *VAR_11;
 static const char *VAR_12[] = {
  "acpu_aux",
  "qsb",
 };
 struct clk_init_data VAR_13 = {
  .parent_names = VAR_12,
  .num_parents = FUNC_0(VAR_12),
  .ops = &VAR_3,
  .flags = VAR_0,
 };
 struct clk *VAR_14;

 VAR_11 = FUNC_4(VAR_5, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->offset = VAR_8;
 VAR_11->lpl = VAR_6 >= 0;
 VAR_11->mask = 0x3;
 VAR_11->shift = 2;
 VAR_11->parent_map = VAR_4;
 VAR_11->hw.init = &VAR_13;
 VAR_11->safe_sel = 0;

 VAR_13.name = FUNC_5(VAR_2, "krait%s_sec_mux", VAR_7);
 if (!VAR_13.name)
  return -VAR_1;

 if (VAR_9) {
  VAR_12[0] = FUNC_5(VAR_2, "acpu%s_aux", VAR_7);
  if (!VAR_12[0]) {
   VAR_14 = FUNC_1(-VAR_1);
   goto err_aux;
  }
 }

 VAR_14 = FUNC_3(VAR_5, &VAR_11->hw);

 VAR_10 = FUNC_7(VAR_5, VAR_14, VAR_11);
 if (VAR_10)
  goto unique_aux;

unique_aux:
 if (VAR_9)
  FUNC_6(VAR_12[0]);
err_aux:
 FUNC_6(VAR_13.name);
 return FUNC_2(VAR_14);
}
