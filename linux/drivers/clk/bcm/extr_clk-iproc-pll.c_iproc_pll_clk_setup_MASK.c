
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct iproc_pll_vco_param {int dummy; } ;
struct iproc_pll_ctrl {int flags; } ;
struct TYPE_3__ {struct clk_init_data* init; } ;
struct iproc_pll {unsigned int num; scalar_t__ control_base; scalar_t__ pwr_base; scalar_t__ asiu_base; scalar_t__ status_base; unsigned int num_vco_entries; TYPE_1__** hws; TYPE_1__ hw; struct iproc_pll_ctrl const* ctrl; struct iproc_pll* pll; struct iproc_pll_vco_param const* vco_param; } ;
struct iproc_clk_ctrl {int flags; } ;
struct iproc_clk {unsigned int num; scalar_t__ control_base; scalar_t__ pwr_base; scalar_t__ asiu_base; scalar_t__ status_base; unsigned int num_vco_entries; TYPE_1__** hws; TYPE_1__ hw; struct iproc_pll_ctrl const* ctrl; struct iproc_clk* pll; struct iproc_pll_vco_param const* vco_param; } ;
struct device_node {char* name; } ;
struct clk_init_data {char* name; char const** parent_names; int num_parents; scalar_t__ flags; int * ops; } ;
struct clk_hw_onecell_data {unsigned int num; scalar_t__ control_base; scalar_t__ pwr_base; scalar_t__ asiu_base; scalar_t__ status_base; unsigned int num_vco_entries; TYPE_1__** hws; TYPE_1__ hw; struct iproc_pll_ctrl const* ctrl; struct clk_hw_onecell_data* pll; struct iproc_pll_vco_param const* vco_param; } ;
typedef int init ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct iproc_pll*) ;
 struct iproc_pll* FUNC_5 (unsigned int,int,int ) ;
 int FUNC_6 (struct iproc_pll*) ;
 struct iproc_pll* FUNC_7 (int,int ) ;
 int FUNC_8 (struct clk_init_data*,int ,int) ;
 int FUNC_9 (struct device_node*,int ,struct iproc_pll*) ;
 char* FUNC_10 (struct device_node*,int ) ;
 int VAR_6 ;
 void* FUNC_11 (struct device_node*,int) ;
 int FUNC_12 (struct device_node*,char*,int,char const**) ;
 int FUNC_13 (struct iproc_pll*,int ,unsigned int) ;

void FUNC_14(struct device_node *VAR_7,
    const struct iproc_pll_ctrl *VAR_8,
    const struct iproc_pll_vco_param *VAR_9,
    unsigned int VAR_10,
    const struct iproc_clk_ctrl *VAR_11,
    unsigned int VAR_12)
{
 int VAR_13, VAR_14;
 struct iproc_pll *VAR_15;
 struct iproc_clk *VAR_16;
 struct clk_init_data VAR_17;
 const char *VAR_18;
 struct iproc_clk *VAR_19;
 struct clk_hw_onecell_data *VAR_20;

 if (FUNC_0(!VAR_8) || FUNC_0(!VAR_11))
  return;

 VAR_15 = FUNC_7(sizeof(*VAR_15), VAR_0);
 if (FUNC_0(!VAR_15))
  return;

 VAR_20 = FUNC_7(FUNC_13(VAR_20, VAR_3, VAR_12), VAR_0);
 if (FUNC_0(!VAR_20))
  goto err_clk_data;
 VAR_20->num = VAR_12;

 VAR_19 = FUNC_5(VAR_12, sizeof(struct iproc_clk), VAR_0);
 if (FUNC_0(!VAR_19))
  goto err_clks;

 VAR_15->control_base = FUNC_11(VAR_7, 0);
 if (FUNC_0(!VAR_15->control_base))
  goto err_pll_iomap;


 VAR_15->pwr_base = FUNC_11(VAR_7, 1);


 if (VAR_8->flags & VAR_1) {
  VAR_15->asiu_base = FUNC_11(VAR_7, 2);
  if (FUNC_0(!VAR_15->asiu_base))
   goto err_asiu_iomap;
 }

 if (VAR_8->flags & VAR_2) {



  VAR_15->status_base = FUNC_11(VAR_7, 2);
  if (!VAR_15->status_base)
   goto err_status_iomap;
 } else
  VAR_15->status_base = VAR_15->control_base;


 VAR_15->ctrl = VAR_8;

 VAR_16 = &VAR_19[0];
 VAR_16->pll = VAR_15;

 VAR_17.name = VAR_7->name;
 VAR_17.ops = &VAR_5;
 VAR_17.flags = 0;
 VAR_18 = FUNC_10(VAR_7, 0);
 VAR_17.parent_names = (VAR_18 ? &VAR_18 : ((void*)0));
 VAR_17.num_parents = (VAR_18 ? 1 : 0);
 VAR_16->hw.init = &VAR_17;

 if (VAR_9) {
  VAR_15->num_vco_entries = VAR_10;
  VAR_15->vco_param = VAR_9;
 }

 FUNC_4(VAR_15);

 VAR_14 = FUNC_1(((void*)0), &VAR_16->hw);
 if (FUNC_0(VAR_14))
  goto err_pll_register;

 VAR_20->hws[0] = &VAR_16->hw;


 for (VAR_13 = 1; VAR_13 < VAR_12; VAR_13++) {
  const char *VAR_21;

  FUNC_8(&VAR_17, 0, sizeof(VAR_17));
  VAR_18 = VAR_7->name;

  VAR_14 = FUNC_12(VAR_7, "clock-output-names",
          VAR_13, &VAR_21);
  if (FUNC_0(VAR_14))
   goto err_clk_register;

  VAR_16 = &VAR_19[VAR_13];
  VAR_16->pll = VAR_15;
  VAR_16->ctrl = &VAR_11[VAR_13];

  VAR_17.name = VAR_21;
  VAR_17.ops = &VAR_4;
  VAR_17.flags = 0;
  VAR_17.parent_names = (VAR_18 ? &VAR_18 : ((void*)0));
  VAR_17.num_parents = (VAR_18 ? 1 : 0);
  VAR_16->hw.init = &VAR_17;

  VAR_14 = FUNC_1(((void*)0), &VAR_16->hw);
  if (FUNC_0(VAR_14))
   goto err_clk_register;

  VAR_20->hws[VAR_13] = &VAR_16->hw;
 }

 VAR_14 = FUNC_9(VAR_7, VAR_6, VAR_20);
 if (FUNC_0(VAR_14))
  goto err_clk_register;

 return;

err_clk_register:
 while (--VAR_13 >= 0)
  FUNC_2(VAR_20->hws[VAR_13]);

err_pll_register:
 if (VAR_15->status_base != VAR_15->control_base)
  FUNC_3(VAR_15->status_base);

err_status_iomap:
 if (VAR_15->asiu_base)
  FUNC_3(VAR_15->asiu_base);

err_asiu_iomap:
 if (VAR_15->pwr_base)
  FUNC_3(VAR_15->pwr_base);

 FUNC_3(VAR_15->control_base);

err_pll_iomap:
 FUNC_6(VAR_19);

err_clks:
 FUNC_6(VAR_20);

err_clk_data:
 FUNC_6(VAR_15);
}
