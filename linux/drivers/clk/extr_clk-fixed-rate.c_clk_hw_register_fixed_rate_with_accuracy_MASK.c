
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct clk_init_data {char const* name; unsigned long flags; char const** parent_names; int num_parents; int * ops; } ;
struct clk_hw {struct clk_init_data* init; } ;
struct clk_fixed_rate {unsigned long fixed_rate; unsigned long fixed_accuracy; struct clk_hw hw; } ;


 int VAR_0 ;
 struct clk_hw* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,struct clk_hw*) ;
 int FUNC_2 (struct clk_fixed_rate*) ;
 struct clk_fixed_rate* FUNC_3 (int,int ) ;

struct clk_hw *FUNC_4(struct device *VAR_3,
  const char *VAR_4, const char *VAR_5, unsigned long VAR_6,
  unsigned long VAR_7, unsigned long VAR_8)
{
 struct clk_fixed_rate *VAR_9;
 struct clk_hw *VAR_10;
 struct clk_init_data VAR_11;
 int VAR_12;


 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_11.name = VAR_4;
 VAR_11.ops = &VAR_2;
 VAR_11.flags = VAR_6;
 VAR_11.parent_names = (VAR_5 ? &VAR_5: ((void*)0));
 VAR_11.num_parents = (VAR_5 ? 1 : 0);


 VAR_9->fixed_rate = VAR_7;
 VAR_9->fixed_accuracy = VAR_8;
 VAR_9->hw.init = &VAR_11;


 VAR_10 = &VAR_9->hw;
 VAR_12 = FUNC_1(VAR_3, VAR_10);
 if (VAR_12) {
  FUNC_2(VAR_9);
  VAR_10 = FUNC_0(VAR_12);
 }

 return VAR_10;
}
