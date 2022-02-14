
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct clk_hw {struct clk_init_data* init; } ;
struct zynqmp_clk_mux {int flags; struct clk_hw hw; int clk_id; } ;
struct clock_topology {int type_flag; int flag; } ;
struct clk_init_data {char const* name; char const* const* parent_names; int num_parents; int flags; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct clk_hw* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *,struct clk_hw*) ;
 int FUNC_2 (struct clk_hw*) ;
 struct zynqmp_clk_mux* FUNC_3 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;

struct clk_hw *FUNC_4(const char *VAR_5, u32 VAR_6,
           const char * const *VAR_7,
           u8 VAR_8,
           const struct clock_topology *VAR_9)
{
 struct zynqmp_clk_mux *VAR_10;
 struct clk_hw *VAR_11;
 struct clk_init_data VAR_12;
 int VAR_13;

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 VAR_12.name = VAR_5;
 if (VAR_9->type_flag & VAR_0)
  VAR_12.ops = &VAR_4;
 else
  VAR_12.ops = &VAR_3;
 VAR_12.flags = VAR_9->flag;
 VAR_12.parent_names = VAR_7;
 VAR_12.num_parents = VAR_8;
 VAR_10->flags = VAR_9->type_flag;
 VAR_10->hw.init = &VAR_12;
 VAR_10->clk_id = VAR_6;

 VAR_11 = &VAR_10->hw;
 VAR_13 = FUNC_1(((void*)0), VAR_11);
 if (VAR_13) {
  FUNC_2(VAR_11);
  VAR_11 = FUNC_0(VAR_13);
 }

 return VAR_11;
}
