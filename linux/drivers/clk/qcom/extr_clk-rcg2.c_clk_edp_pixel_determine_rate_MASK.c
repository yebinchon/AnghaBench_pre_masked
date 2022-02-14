
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct freq_tbl {int src; } ;
struct frac_entry {int den; scalar_t__ num; } ;
struct TYPE_2__ {int regmap; } ;
struct clk_rcg2 {scalar_t__ cmd_rcgr; TYPE_1__ clkr; int parent_map; int hid_width; struct freq_tbl* freq_tbl; } ;
struct clk_rate_request {int best_parent_rate; int rate; int best_parent_hw; } ;
struct clk_hw {int dummy; } ;
typedef int s64 ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,scalar_t__,int,int,int) ;
 int FUNC_2 (struct clk_hw*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,scalar_t__) ;
 struct frac_entry* VAR_3 ;
 struct frac_entry* VAR_4 ;
 int FUNC_5 (struct clk_hw*,int ,int ) ;
 int FUNC_6 (int ,scalar_t__,int*) ;
 struct clk_rcg2* FUNC_7 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_5,
     struct clk_rate_request *VAR_6)
{
 struct clk_rcg2 *VAR_7 = FUNC_7(VAR_5);
 const struct freq_tbl *VAR_8 = VAR_7->freq_tbl;
 const struct frac_entry *VAR_9;
 int VAR_10 = 100000;
 s64 VAR_11;
 u32 VAR_12 = FUNC_0(VAR_7->hid_width) - 1;
 u32 VAR_13;
 int VAR_14 = FUNC_5(VAR_5, VAR_7->parent_map, VAR_8->src);


 VAR_6->best_parent_hw = FUNC_2(VAR_5, VAR_14);
 VAR_6->best_parent_rate = FUNC_3(VAR_6->best_parent_hw);

 if (VAR_6->best_parent_rate == 810000000)
  VAR_9 = VAR_4;
 else
  VAR_9 = VAR_3;

 for (; VAR_9->num; VAR_9++) {
  VAR_11 = VAR_6->rate;
  VAR_11 *= VAR_9->den;
  VAR_11 = FUNC_4(VAR_11, VAR_9->num);
  if ((VAR_6->best_parent_rate < (VAR_11 - VAR_10)) ||
      (VAR_6->best_parent_rate > (VAR_11 + VAR_10)))
   continue;

  FUNC_6(VAR_7->clkr.regmap, VAR_7->cmd_rcgr + VAR_0,
    &VAR_13);
  VAR_13 >>= VAR_1;
  VAR_13 &= VAR_12;

  VAR_6->rate = FUNC_1(VAR_6->best_parent_rate,
          VAR_9->num, VAR_9->den,
          !!VAR_9->den, VAR_13);
  return 0;
 }

 return -VAR_2;
}
