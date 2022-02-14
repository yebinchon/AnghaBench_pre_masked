
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_init_data {char const* name; char const** parent_names; int num_parents; int flags; int * ops; } ;
struct clk_hw {struct clk_init_data* init; } ;
struct clk_cpu {struct clk_hw hw; struct clk* step; struct clk* pll; struct clk* mux; struct clk* div; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct clk_hw* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,struct clk_hw*) ;
 int FUNC_2 (struct clk_cpu*) ;
 struct clk_cpu* FUNC_3 (int,int ) ;

struct clk_hw *FUNC_4(const char *VAR_4, const char *VAR_5,
  struct clk *VAR_6, struct clk *VAR_7, struct clk *VAR_8,
  struct clk *VAR_9)
{
 struct clk_cpu *VAR_10;
 struct clk_hw *VAR_11;
 struct clk_init_data VAR_12;
 int VAR_13;

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 VAR_10->div = VAR_6;
 VAR_10->mux = VAR_7;
 VAR_10->pll = VAR_8;
 VAR_10->step = VAR_9;

 VAR_12.name = VAR_4;
 VAR_12.ops = &VAR_3;
 VAR_12.flags = VAR_0;
 VAR_12.parent_names = &VAR_5;
 VAR_12.num_parents = 1;

 VAR_10->hw.init = &VAR_12;
 VAR_11 = &VAR_10->hw;

 VAR_13 = FUNC_1(((void*)0), VAR_11);
 if (VAR_13) {
  FUNC_2(VAR_10);
  return FUNC_0(VAR_13);
 }

 return VAR_11;
}
