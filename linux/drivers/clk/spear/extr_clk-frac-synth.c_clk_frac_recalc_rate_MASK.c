
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_frac {scalar_t__ lock; int reg; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,unsigned long) ;
 int FUNC_2 (scalar_t__,unsigned long) ;
 struct clk_frac* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_1,
  unsigned long VAR_2)
{
 struct clk_frac *VAR_3 = FUNC_3(VAR_1);
 unsigned long VAR_4 = 0;
 unsigned int VAR_5 = 1, VAR_6;

 if (VAR_3->lock)
  FUNC_1(VAR_3->lock, VAR_4);

 VAR_6 = FUNC_0(VAR_3->reg);

 if (VAR_3->lock)
  FUNC_2(VAR_3->lock, VAR_4);

 VAR_5 = VAR_6 & VAR_0;

 if (!VAR_5)
  return 0;

 VAR_2 = VAR_2 / 10000;

 VAR_2 = (VAR_2 << 14) / (2 * VAR_5);
 return VAR_2 * 10000;
}
