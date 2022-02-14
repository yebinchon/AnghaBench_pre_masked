
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct clk_init_data {char const* name; unsigned long flags; char const** parent_names; int num_parents; int * ops; } ;
struct clk_hw {struct clk_init_data* init; } ;
struct aspeed_clk_gate {struct clk_hw hw; int * lock; void* flags; void* reset_idx; void* clock_idx; struct regmap* map; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 struct clk_hw* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,struct clk_hw*) ;
 int FUNC_2 (struct aspeed_clk_gate*) ;
 struct aspeed_clk_gate* FUNC_3 (int,int ) ;

__attribute__((used)) static struct clk_hw *FUNC_4(struct device *VAR_3,
  const char *VAR_4, const char *VAR_5, unsigned long VAR_6,
  struct regmap *VAR_7, u8 VAR_8, u8 VAR_9,
  u8 VAR_10, spinlock_t *VAR_11)
{
 struct aspeed_clk_gate *VAR_12;
 struct clk_init_data VAR_13;
 struct clk_hw *VAR_14;
 int VAR_15;

 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return FUNC_0(-VAR_0);

 VAR_13.name = VAR_4;
 VAR_13.ops = &VAR_2;
 VAR_13.flags = VAR_6;
 VAR_13.parent_names = VAR_5 ? &VAR_5 : ((void*)0);
 VAR_13.num_parents = VAR_5 ? 1 : 0;

 VAR_12->map = VAR_7;
 VAR_12->clock_idx = VAR_8;
 VAR_12->reset_idx = VAR_9;
 VAR_12->flags = VAR_10;
 VAR_12->lock = VAR_11;
 VAR_12->hw.init = &VAR_13;

 VAR_14 = &VAR_12->hw;
 VAR_15 = FUNC_1(VAR_3, VAR_14);
 if (VAR_15) {
  FUNC_2(VAR_12);
  VAR_14 = FUNC_0(VAR_15);
 }

 return VAR_14;
}
