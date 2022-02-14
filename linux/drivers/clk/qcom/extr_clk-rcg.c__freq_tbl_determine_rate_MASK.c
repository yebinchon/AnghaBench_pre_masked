
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct parent_map {int dummy; } ;
struct freq_tbl {unsigned long pre_div; unsigned long n; unsigned long freq; int m; int src; } ;
struct clk_rate_request {unsigned long rate; unsigned long best_parent_rate; struct clk_hw* best_parent_hw; } ;
struct clk_hw {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (struct clk_hw*) ;
 struct clk_hw* FUNC_1 (struct clk_hw*,int) ;
 unsigned long FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (unsigned long,int ) ;
 struct freq_tbl* FUNC_4 (struct freq_tbl const*,unsigned long) ;
 int FUNC_5 (struct clk_hw*,struct parent_map const*,int ) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_2, const struct freq_tbl *VAR_3,
  struct clk_rate_request *VAR_4,
  const struct parent_map *VAR_5)
{
 unsigned long VAR_6, VAR_7 = VAR_4->rate;
 struct clk_hw *VAR_8;
 int VAR_9;

 VAR_3 = FUNC_4(VAR_3, VAR_7);
 if (!VAR_3)
  return -VAR_1;

 VAR_9 = FUNC_5(VAR_2, VAR_5, VAR_3->src);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_6 = FUNC_0(VAR_2);
 VAR_8 = FUNC_1(VAR_2, VAR_9);
 if (VAR_6 & VAR_0) {
  VAR_7 = VAR_7 * VAR_3->pre_div;
  if (VAR_3->n) {
   u64 VAR_10 = VAR_7;
   VAR_10 = VAR_10 * VAR_3->n;
   FUNC_3(VAR_10, VAR_3->m);
   VAR_7 = VAR_10;
  }
 } else {
  VAR_7 = FUNC_2(VAR_8);
 }
 VAR_4->best_parent_hw = VAR_8;
 VAR_4->best_parent_rate = VAR_7;
 VAR_4->rate = VAR_3->freq;

 return 0;
}
