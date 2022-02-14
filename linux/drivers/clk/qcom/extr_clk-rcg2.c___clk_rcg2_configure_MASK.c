
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct freq_tbl {int n; int m; int pre_div; int src; } ;
struct clk_hw {int dummy; } ;
struct TYPE_3__ {int regmap; struct clk_hw hw; } ;
struct clk_rcg2 {TYPE_1__ clkr; scalar_t__ mnd_width; TYPE_2__* parent_map; scalar_t__ hid_width; } ;
struct TYPE_4__ {int cfg; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct clk_rcg2*) ;
 int FUNC_2 (struct clk_rcg2*) ;
 int FUNC_3 (struct clk_rcg2*) ;
 int FUNC_4 (struct clk_rcg2*) ;
 int FUNC_5 (struct clk_hw*,TYPE_2__*,int ) ;
 int FUNC_6 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_7(struct clk_rcg2 *VAR_6, const struct freq_tbl *VAR_7)
{
 u32 VAR_8, VAR_9;
 struct clk_hw *VAR_10 = &VAR_6->clkr.hw;
 int VAR_11, VAR_12 = FUNC_5(VAR_10, VAR_6->parent_map, VAR_7->src);

 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_6->mnd_width && VAR_7->n) {
  VAR_9 = FUNC_0(VAR_6->mnd_width) - 1;
  VAR_11 = FUNC_6(VAR_6->clkr.regmap,
    FUNC_3(VAR_6), VAR_9, VAR_7->m);
  if (VAR_11)
   return VAR_11;

  VAR_11 = FUNC_6(VAR_6->clkr.regmap,
    FUNC_4(VAR_6), VAR_9, ~(VAR_7->n - VAR_7->m));
  if (VAR_11)
   return VAR_11;

  VAR_11 = FUNC_6(VAR_6->clkr.regmap,
    FUNC_2(VAR_6), VAR_9, ~VAR_7->n);
  if (VAR_11)
   return VAR_11;
 }

 VAR_9 = FUNC_0(VAR_6->hid_width) - 1;
 VAR_9 |= VAR_4 | VAR_2 | VAR_0;
 VAR_8 = VAR_7->pre_div << VAR_3;
 VAR_8 |= VAR_6->parent_map[VAR_12].cfg << VAR_5;
 if (VAR_6->mnd_width && VAR_7->n && (VAR_7->m != VAR_7->n))
  VAR_8 |= VAR_1;
 return FUNC_6(VAR_6->clkr.regmap, FUNC_1(VAR_6),
     VAR_9, VAR_8);
}
