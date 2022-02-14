
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_hw {struct clk_init_data* init; } ;
struct timer_ker {struct clk_hw hw; int dppre_shift; int * lock; } ;
struct device {int dummy; } ;
struct clk_init_data {char const* name; unsigned long flags; char const** parent_names; int num_parents; int * ops; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 struct clk_hw* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct device*,struct clk_hw*) ;
 int FUNC_2 (struct timer_ker*) ;
 struct timer_ker* FUNC_3 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct clk_hw *FUNC_4(struct device *VAR_3,
  const char *VAR_4, const char *VAR_5,
  unsigned long VAR_6,
  u8 VAR_7,
  spinlock_t *VAR_8)
{
 struct timer_ker *VAR_9;
 struct clk_init_data VAR_10;
 struct clk_hw *VAR_11;
 int VAR_12;

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_10.name = VAR_4;
 VAR_10.ops = &VAR_2;
 VAR_10.flags = VAR_6;
 VAR_10.parent_names = &VAR_5;
 VAR_10.num_parents = 1;

 VAR_9->hw.init = &VAR_10;
 VAR_9->lock = VAR_8;
 VAR_9->dppre_shift = VAR_7;

 VAR_11 = &VAR_9->hw;
 VAR_12 = FUNC_1(VAR_3, VAR_11);

 if (VAR_12) {
  FUNC_2(VAR_9);
  return FUNC_0(VAR_12);
 }

 return VAR_11;
}
