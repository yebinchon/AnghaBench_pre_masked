
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frac_entry {int num; unsigned long den; } ;
struct clk_rate_request {unsigned long rate; unsigned long best_parent_rate; int best_parent_hw; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ,unsigned long) ;
 struct frac_entry* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct clk_hw *VAR_2,
        struct clk_rate_request *VAR_3)
{
 unsigned long VAR_4, VAR_5;
 int VAR_6 = 100000;
 const struct frac_entry *VAR_7 = VAR_1;

 for (; VAR_7->num; VAR_7++) {
  VAR_4 = (VAR_3->rate * VAR_7->den) / VAR_7->num;

  VAR_5 = FUNC_0(VAR_3->best_parent_hw, VAR_4);
  if ((VAR_5 < (VAR_4 - VAR_6)) ||
   (VAR_5 > (VAR_4 + VAR_6)))
   continue;

  VAR_3->best_parent_rate = VAR_5;
  VAR_3->rate = (VAR_5 * VAR_7->num) / VAR_7->den;
  return 0;
 }

 return -VAR_0;
}
