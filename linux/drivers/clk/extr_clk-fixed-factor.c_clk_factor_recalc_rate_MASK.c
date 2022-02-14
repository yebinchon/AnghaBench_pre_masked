
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_fixed_factor {unsigned long long mult; int div; } ;


 int FUNC_0 (unsigned long long,int ) ;
 struct clk_fixed_factor* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
  unsigned long VAR_1)
{
 struct clk_fixed_factor *VAR_2 = FUNC_1(VAR_0);
 unsigned long long int VAR_3;

 VAR_3 = (unsigned long long int)VAR_1 * VAR_2->mult;
 FUNC_0(VAR_3, VAR_2->div);
 return (unsigned long)VAR_3;
}
