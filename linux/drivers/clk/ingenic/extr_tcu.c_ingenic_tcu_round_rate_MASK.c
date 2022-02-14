
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_hw {int dummy; } ;


 long VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static long FUNC_1(struct clk_hw *VAR_1, unsigned long VAR_2,
  unsigned long *VAR_3)
{
 unsigned long VAR_4 = *VAR_3;
 u8 VAR_5;

 if (VAR_2 > VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_4, VAR_2);

 return VAR_4 >> (VAR_5 * 2);
}
