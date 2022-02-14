
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct freq_tbl {unsigned long freq; int pre_div; unsigned long n; int m; int src; } ;
struct clk_rcg2 {int parent_map; } ;
struct clk_rate_request {unsigned long rate; unsigned long best_parent_rate; struct clk_hw* best_parent_hw; } ;
struct clk_hw {int dummy; } ;
typedef enum freq_policy { ____Placeholder_freq_policy } freq_policy ;



 unsigned long VAR_0 ;
 int VAR_1 ;

 unsigned long FUNC_0 (struct clk_hw*) ;
 struct clk_hw* FUNC_1 (struct clk_hw*,int) ;
 unsigned long FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (unsigned long,int ) ;
 struct freq_tbl* FUNC_4 (struct freq_tbl const*,unsigned long) ;
 struct freq_tbl* FUNC_5 (struct freq_tbl const*,unsigned long) ;
 int FUNC_6 (struct clk_hw*,int ,int ) ;
 struct clk_rcg2* FUNC_7 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_2, const struct freq_tbl *VAR_3,
        struct clk_rate_request *VAR_4,
        enum freq_policy VAR_5)
{
 unsigned long VAR_6, VAR_7 = VAR_4->rate;
 struct clk_hw *VAR_8;
 struct clk_rcg2 *VAR_9 = FUNC_7(VAR_2);
 int VAR_10;

 switch (VAR_5) {
 case 128:
  VAR_3 = FUNC_5(VAR_3, VAR_7);
  break;
 case 129:
  VAR_3 = FUNC_4(VAR_3, VAR_7);
  break;
 default:
  return -VAR_1;
 };

 if (!VAR_3)
  return -VAR_1;

 VAR_10 = FUNC_6(VAR_2, VAR_9->parent_map, VAR_3->src);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_6 = FUNC_0(VAR_2);
 VAR_8 = FUNC_1(VAR_2, VAR_10);
 if (VAR_6 & VAR_0) {
  VAR_7 = VAR_3->freq;
  if (VAR_3->pre_div) {
   VAR_7 /= 2;
   VAR_7 *= VAR_3->pre_div + 1;
  }

  if (VAR_3->n) {
   u64 VAR_11 = VAR_7;
   VAR_11 = VAR_11 * VAR_3->n;
   FUNC_3(VAR_11, VAR_3->m);
   VAR_7 = VAR_11;
  }
 } else {
  VAR_7 = FUNC_2(VAR_8);
 }
 VAR_4->best_parent_hw = VAR_8;
 VAR_4->best_parent_rate = VAR_7;
 VAR_4->rate = VAR_3->freq;

 return 0;
}
