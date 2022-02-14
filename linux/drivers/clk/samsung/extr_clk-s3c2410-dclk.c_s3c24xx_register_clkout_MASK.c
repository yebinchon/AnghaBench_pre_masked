
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct clk_hw {struct clk_init_data* init; } ;
struct s3c24xx_clkout {struct clk_hw hw; int mask; void* shift; } ;
struct device {int dummy; } ;
struct clk_init_data {char const* name; char const** parent_names; void* num_parents; scalar_t__ flags; int * ops; } ;


 int VAR_0 ;
 struct clk_hw* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct device*,struct clk_hw*) ;
 struct s3c24xx_clkout* FUNC_2 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct clk_hw *FUNC_3(struct device *VAR_3,
  const char *VAR_4, const char **VAR_5, u8 VAR_6,
  u8 VAR_7, u32 VAR_8)
{
 struct s3c24xx_clkout *VAR_9;
 struct clk_init_data VAR_10;
 int VAR_11;


 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_10.name = VAR_4;
 VAR_10.ops = &VAR_2;
 VAR_10.flags = 0;
 VAR_10.parent_names = VAR_5;
 VAR_10.num_parents = VAR_6;

 VAR_9->shift = VAR_7;
 VAR_9->mask = VAR_8;
 VAR_9->hw.init = &VAR_10;

 VAR_11 = FUNC_1(VAR_3, &VAR_9->hw);
 if (VAR_11)
  return FUNC_0(VAR_11);

 return &VAR_9->hw;
}
