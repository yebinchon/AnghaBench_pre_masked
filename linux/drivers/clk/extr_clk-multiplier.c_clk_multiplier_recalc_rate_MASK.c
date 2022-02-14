
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_multiplier {unsigned long shift; int flags; scalar_t__ width; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (scalar_t__,int ) ;
 unsigned long FUNC_1 (struct clk_multiplier*) ;
 struct clk_multiplier* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_1,
      unsigned long VAR_2)
{
 struct clk_multiplier *VAR_3 = FUNC_2(VAR_1);
 unsigned long VAR_4;

 VAR_4 = FUNC_1(VAR_3) >> VAR_3->shift;
 VAR_4 &= FUNC_0(VAR_3->width - 1, 0);

 if (!VAR_4 && VAR_3->flags & VAR_0)
  VAR_4 = 1;

 return VAR_2 * VAR_4;
}
