
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct clk_hw {struct clk_init_data* init; } ;
struct zynqmp_clk_gate {struct clk_hw hw; int clk_id; int flags; } ;
struct clock_topology {int type_flag; int flag; } ;
struct clk_init_data {char const* name; char const* const* parent_names; int num_parents; int flags; int * ops; } ;


 int VAR_0 ;
 struct clk_hw* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct clk_hw*) ;
 int FUNC_2 (struct zynqmp_clk_gate*) ;
 struct zynqmp_clk_gate* FUNC_3 (int,int ) ;
 int VAR_2 ;

struct clk_hw *FUNC_4(const char *VAR_3, u32 VAR_4,
     const char * const *VAR_5,
     u8 VAR_6,
     const struct clock_topology *VAR_7)
{
 struct zynqmp_clk_gate *VAR_8;
 struct clk_hw *VAR_9;
 int VAR_10;
 struct clk_init_data VAR_11;


 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_11.name = VAR_3;
 VAR_11.ops = &VAR_2;
 VAR_11.flags = VAR_7->flag;
 VAR_11.parent_names = VAR_5;
 VAR_11.num_parents = 1;


 VAR_8->flags = VAR_7->type_flag;
 VAR_8->hw.init = &VAR_11;
 VAR_8->clk_id = VAR_4;

 VAR_9 = &VAR_8->hw;
 VAR_10 = FUNC_1(((void*)0), VAR_9);
 if (VAR_10) {
  FUNC_2(VAR_8);
  VAR_9 = FUNC_0(VAR_10);
 }

 return VAR_9;
}
