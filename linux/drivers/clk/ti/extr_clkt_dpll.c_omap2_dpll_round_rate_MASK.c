
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpll_data {unsigned long max_rate; unsigned long max_multiplier; unsigned long last_rounded_rate; int min_divider; int max_divider; int last_rounded_m; int last_rounded_n; int clk_ref; } ;
struct clk_hw_omap {struct dpll_data* dpll_data; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 int FUNC_0 (struct clk_hw_omap*,int) ;
 int FUNC_1 (int*,int,unsigned long*,unsigned long,unsigned long) ;
 char* FUNC_2 (struct clk_hw*) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (char*,char const*,unsigned long,...) ;
 struct clk_hw_omap* FUNC_5 (struct clk_hw*) ;

long FUNC_6(struct clk_hw *VAR_6, unsigned long VAR_7,
      unsigned long *VAR_8)
{
 struct clk_hw_omap *VAR_9 = FUNC_5(VAR_6);
 int VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14 = VAR_4, VAR_15 = VAR_4;
 unsigned long VAR_16;
 unsigned long VAR_17 = 0;
 struct dpll_data *VAR_18;
 unsigned long VAR_19;
 long VAR_20;
 long VAR_21 = VAR_5;
 const char *VAR_22;

 if (!VAR_9 || !VAR_9->dpll_data)
  return ~0;

 VAR_18 = VAR_9->dpll_data;

 if (VAR_18->max_rate && VAR_7 > VAR_18->max_rate)
  VAR_7 = VAR_18->max_rate;

 VAR_19 = FUNC_3(VAR_18->clk_ref);
 VAR_22 = FUNC_2(VAR_6);
 FUNC_4("clock: %s: starting DPLL round_rate, target rate %lu\n",
   VAR_22, VAR_7);

 VAR_16 = VAR_7 / (VAR_19 / VAR_3);
 VAR_13 = VAR_18->max_multiplier * VAR_3;

 VAR_18->last_rounded_rate = 0;

 for (VAR_11 = VAR_18->min_divider; VAR_11 <= VAR_18->max_divider; VAR_11++) {

  VAR_12 = FUNC_0(VAR_9, VAR_11);
  if (VAR_12 == VAR_1)
   break;
  else if (VAR_12 == VAR_0)
   continue;


  VAR_10 = VAR_16 * VAR_11;







  if (VAR_10 > VAR_13)
   break;

  VAR_12 = FUNC_1(&VAR_10, VAR_11, &VAR_17, VAR_7,
        VAR_19);


  if (VAR_12 == VAR_2)
   continue;


  VAR_20 = VAR_7 - VAR_17;
  if (VAR_20 < 0)
   continue;

  if (VAR_20 < VAR_21) {
   VAR_21 = VAR_20;
   VAR_14 = VAR_10;
   VAR_15 = VAR_11;
  }

  FUNC_4("clock: %s: m = %d: n = %d: new_rate = %lu\n",
    VAR_22, VAR_10, VAR_11, VAR_17);

  if (VAR_20 == 0)
   break;
 }

 if (VAR_21 == VAR_5) {
  FUNC_4("clock: %s: cannot round to rate %lu\n",
    VAR_22, VAR_7);
  return ~0;
 }

 VAR_18->last_rounded_m = VAR_14;
 VAR_18->last_rounded_n = VAR_15;
 VAR_18->last_rounded_rate = VAR_7 - VAR_21;

 return VAR_18->last_rounded_rate;
}
