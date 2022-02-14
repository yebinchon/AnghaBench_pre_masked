
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct clk_sccg_pll_setup {scalar_t__ fout; } ;
struct clk_sccg_pll {struct clk_sccg_pll_setup setup; } ;
struct clk_rate_request {scalar_t__ rate; scalar_t__ min_rate; scalar_t__ max_rate; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct clk_hw*,struct clk_rate_request*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 struct clk_sccg_pll* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_10,
           struct clk_rate_request *VAR_11)
{
 struct clk_sccg_pll *VAR_12 = FUNC_1(VAR_10);
 struct clk_sccg_pll_setup *VAR_13 = &VAR_12->setup;
 uint64_t VAR_14 = VAR_11->rate;
 uint64_t VAR_15 = VAR_11->min_rate;
 uint64_t VAR_16 = VAR_11->max_rate;
 int VAR_17 = -VAR_0;

 if (VAR_14 < VAR_5 || VAR_14 > VAR_4)
  return VAR_17;

 VAR_17 = FUNC_0(VAR_10, VAR_11, VAR_11->rate, VAR_11->rate,
      VAR_14, VAR_2);
 if (!VAR_17)
  return VAR_17;

 VAR_17 = FUNC_0(VAR_10, VAR_11, VAR_9,
      VAR_8, VAR_14,
      VAR_1);
 if (!VAR_17)
  return VAR_17;

 VAR_17 = FUNC_0(VAR_10, VAR_11, VAR_7,
      VAR_6, VAR_14,
      VAR_3);
 if (!VAR_17)
  return VAR_17;

 if (VAR_13->fout >= VAR_15 && VAR_13->fout <= VAR_16)
  VAR_17 = 0;

 return VAR_17;
}
