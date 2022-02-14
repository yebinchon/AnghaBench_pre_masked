
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct clk_hw {struct clk_init_data* init; } ;
struct zynqmp_pll {struct clk_hw hw; int clk_id; } ;
struct clock_topology {int flag; } ;
struct clk_init_data {char const* name; char const* const* parent_names; int num_parents; int flags; int * ops; } ;


 int VAR_0 ;
 struct clk_hw* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,struct clk_hw*) ;
 int FUNC_2 (struct clk_hw*,int ,int ) ;
 int FUNC_3 (struct zynqmp_pll*) ;
 struct zynqmp_pll* FUNC_4 (int,int ) ;
 int FUNC_5 (char*,char const*,int) ;
 int VAR_4 ;

struct clk_hw *FUNC_6(const char *VAR_5, u32 VAR_6,
           const char * const *VAR_7,
           u8 VAR_8,
           const struct clock_topology *VAR_9)
{
 struct zynqmp_pll *VAR_10;
 struct clk_hw *VAR_11;
 struct clk_init_data VAR_12;
 int VAR_13;

 VAR_12.name = VAR_5;
 VAR_12.ops = &VAR_4;
 VAR_12.flags = VAR_9->flag;
 VAR_12.parent_names = VAR_7;
 VAR_12.num_parents = 1;

 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return FUNC_0(-VAR_0);

 VAR_10->hw.init = &VAR_12;
 VAR_10->clk_id = VAR_6;

 VAR_11 = &VAR_10->hw;
 VAR_13 = FUNC_1(((void*)0), VAR_11);
 if (VAR_13) {
  FUNC_3(VAR_10);
  return FUNC_0(VAR_13);
 }

 FUNC_2(VAR_11, VAR_3, VAR_2);
 if (VAR_13 < 0)
  FUNC_5("%s:ERROR clk_set_rate_range failed %d\n", VAR_5, VAR_13);

 return VAR_11;
}
