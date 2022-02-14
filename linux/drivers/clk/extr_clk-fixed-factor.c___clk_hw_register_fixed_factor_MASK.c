
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct clk_parent_data {int index; } ;
struct clk_init_data {char const* name; unsigned long flags; char const** parent_names; int num_parents; struct clk_parent_data* parent_data; int * ops; } ;
struct clk_hw {struct clk_init_data* init; } ;
struct clk_fixed_factor {unsigned int mult; unsigned int div; struct clk_hw hw; } ;


 int VAR_0 ;
 struct clk_hw* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,struct clk_hw*) ;
 int FUNC_2 (struct clk_fixed_factor*) ;
 struct clk_fixed_factor* FUNC_3 (int,int ) ;
 int FUNC_4 (struct device_node*,struct clk_hw*) ;

__attribute__((used)) static struct clk_hw *
FUNC_5(struct device *VAR_3, struct device_node *VAR_4,
  const char *VAR_5, const char *VAR_6, int VAR_7,
  unsigned long VAR_8, unsigned int VAR_9, unsigned int VAR_10)
{
 struct clk_fixed_factor *VAR_11;
 struct clk_init_data VAR_12 = { };
 struct clk_parent_data VAR_13 = { .index = VAR_7 };
 struct clk_hw *VAR_14;
 int VAR_15;

 VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return FUNC_0(-VAR_0);


 VAR_11->mult = VAR_9;
 VAR_11->div = VAR_10;
 VAR_11->hw.init = &VAR_12;

 VAR_12.name = VAR_5;
 VAR_12.ops = &VAR_2;
 VAR_12.flags = VAR_8;
 if (VAR_6)
  VAR_12.parent_names = &VAR_6;
 else
  VAR_12.parent_data = &VAR_13;
 VAR_12.num_parents = 1;

 VAR_14 = &VAR_11->hw;
 if (VAR_3)
  VAR_15 = FUNC_1(VAR_3, VAR_14);
 else
  VAR_15 = FUNC_4(VAR_4, VAR_14);
 if (VAR_15) {
  FUNC_2(VAR_11);
  VAR_14 = FUNC_0(VAR_15);
 }

 return VAR_14;
}
