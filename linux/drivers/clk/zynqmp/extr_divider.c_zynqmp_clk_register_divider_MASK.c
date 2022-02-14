
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct clk_hw {struct clk_init_data* init; } ;
struct zynqmp_clk_divider {int is_frac; struct clk_hw hw; int div_type; int clk_id; int flags; } ;
struct clock_topology {int flag; int type; int type_flag; } ;
struct clk_init_data {char const* name; int flags; char const* const* parent_names; int num_parents; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct clk_hw* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *,struct clk_hw*) ;
 int FUNC_2 (struct zynqmp_clk_divider*) ;
 struct zynqmp_clk_divider* FUNC_3 (int,int ) ;
 int VAR_3 ;

struct clk_hw *FUNC_4(const char *VAR_4,
        u32 VAR_5,
        const char * const *VAR_6,
        u8 VAR_7,
        const struct clock_topology *VAR_8)
{
 struct zynqmp_clk_divider *VAR_9;
 struct clk_hw *VAR_10;
 struct clk_init_data VAR_11;
 int VAR_12;


 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return FUNC_0(-VAR_1);

 VAR_11.name = VAR_4;
 VAR_11.ops = &VAR_3;

 VAR_11.flags = VAR_8->flag & ~VAR_0;
 VAR_11.parent_names = VAR_6;
 VAR_11.num_parents = 1;


 VAR_9->is_frac = !!(VAR_8->flag & VAR_0);
 VAR_9->flags = VAR_8->type_flag;
 VAR_9->hw.init = &VAR_11;
 VAR_9->clk_id = VAR_5;
 VAR_9->div_type = VAR_8->type;

 VAR_10 = &VAR_9->hw;
 VAR_12 = FUNC_1(((void*)0), VAR_10);
 if (VAR_12) {
  FUNC_2(VAR_9);
  VAR_10 = FUNC_0(VAR_12);
 }

 return VAR_10;
}
