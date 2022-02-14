
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct clk_rcg_dfs_data {struct clk_init_data* init; struct clk_rcg2* rcg; } ;
struct clk_rcg2 {int * freq_tbl; scalar_t__ cmd_rcgr; } ;
struct clk_init_data {int * ops; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct regmap*,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_1(const struct clk_rcg_dfs_data *VAR_5,
          struct regmap *VAR_6)
{
 struct clk_rcg2 *VAR_7 = VAR_5->rcg;
 struct clk_init_data *VAR_8 = VAR_5->init;
 u32 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_6, VAR_7->cmd_rcgr + VAR_2, &VAR_9);
 if (VAR_10)
  return -VAR_1;

 if (!(VAR_9 & VAR_3))
  return 0;





 VAR_8->flags |= VAR_0;
 VAR_8->ops = &VAR_4;

 VAR_7->freq_tbl = ((void*)0);

 return 0;
}
