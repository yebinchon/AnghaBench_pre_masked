
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static long FUNC_1(struct clk_hw *VAR_2, unsigned long VAR_3,
  unsigned long *VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_3, *VAR_4);
 if (VAR_5 < VAR_1)
  VAR_5 = VAR_1;
 else if (VAR_5 > VAR_0)
  VAR_5 = VAR_0;

 return *VAR_4 * VAR_5;
}
