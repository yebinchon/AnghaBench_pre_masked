
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_fixed_factor {unsigned long mult; unsigned long div; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct clk_hw*) ;
 unsigned long FUNC_2 (int ,unsigned long) ;
 struct clk_fixed_factor* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_4(struct clk_hw *VAR_1, unsigned long VAR_2,
    unsigned long *VAR_3)
{
 struct clk_fixed_factor *VAR_4 = FUNC_3(VAR_1);

 if (FUNC_0(VAR_1) & VAR_0) {
  unsigned long VAR_5;

  VAR_5 = (VAR_2 / VAR_4->mult) * VAR_4->div;
  *VAR_3 = FUNC_2(FUNC_1(VAR_1), VAR_5);
 }

 return (*VAR_3 / VAR_4->div) * VAR_4->mult;
}
