
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
 int VAR_4 = 100000;
 const struct frac_entry *VAR_5 = VAR_1;
 unsigned long VAR_6, VAR_7;

 for (; VAR_5->num; VAR_5++) {
  VAR_6 = (VAR_3->rate * VAR_5->den) / VAR_5->num;

  VAR_7 = FUNC_0(VAR_3->best_parent_hw, VAR_6);

  if ((VAR_7 < (VAR_6 - VAR_4)) ||
   (VAR_7 > (VAR_6 + VAR_4)))
   continue;

  VAR_3->best_parent_rate = VAR_7;
  VAR_3->rate = (VAR_7 * VAR_5->num) / VAR_5->den;
  return 0;
 }

 return -VAR_0;
}
