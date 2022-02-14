
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct freq_tbl {int pre_div; int m; int n; int freq; int src; } ;
struct TYPE_4__ {int regmap; int hw; } ;
struct clk_rcg2 {scalar_t__ cmd_rcgr; TYPE_2__ clkr; int mnd_width; TYPE_1__* parent_map; int hid_width; } ;
struct clk_hw {int dummy; } ;
struct TYPE_3__ {int cfg; int src; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned long,int,int,int,int) ;
 int FUNC_5 (struct clk_hw*) ;
 struct clk_hw* FUNC_6 (int *,int) ;
 unsigned long FUNC_7 (struct clk_hw*) ;
 int FUNC_8 (int ,scalar_t__,int*) ;
 struct clk_rcg2* FUNC_9 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_10(struct clk_hw *VAR_4, unsigned int VAR_5,
           struct freq_tbl *VAR_6)
{
 struct clk_rcg2 *VAR_7 = FUNC_9(VAR_4);
 struct clk_hw *VAR_8;
 unsigned long VAR_9 = 0;
 u32 VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15;

 FUNC_8(VAR_7->clkr.regmap, VAR_7->cmd_rcgr + FUNC_1(VAR_5), &VAR_12);

 VAR_11 = FUNC_0(VAR_7->hid_width) - 1;
 VAR_6->pre_div = 1;
 if (VAR_12 & VAR_11)
  VAR_6->pre_div = VAR_12 & VAR_11;

 VAR_12 &= VAR_2;
 VAR_12 >>= VAR_3;

 VAR_15 = FUNC_5(VAR_4);
 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
  if (VAR_12 == VAR_7->parent_map[VAR_14].cfg) {
   VAR_6->src = VAR_7->parent_map[VAR_14].src;
   VAR_8 = FUNC_6(&VAR_7->clkr.hw, VAR_14);
   VAR_9 = FUNC_7(VAR_8);
  }
 }

 VAR_13 = VAR_12 & VAR_0;
 VAR_13 >>= VAR_1;
 if (VAR_13) {
  VAR_11 = FUNC_0(VAR_7->mnd_width) - 1;
  FUNC_8(VAR_7->clkr.regmap, VAR_7->cmd_rcgr + FUNC_2(VAR_5),
       &VAR_10);
  VAR_10 &= VAR_11;
  VAR_6->m = VAR_10;

  FUNC_8(VAR_7->clkr.regmap, VAR_7->cmd_rcgr + FUNC_3(VAR_5),
       &VAR_10);
  VAR_10 = ~VAR_10;
  VAR_10 &= VAR_11;
  VAR_10 += VAR_6->m;
  VAR_6->n = VAR_10;
 }

 VAR_6->freq = FUNC_4(VAR_9, VAR_6->m, VAR_6->n, VAR_13, VAR_6->pre_div);
}
