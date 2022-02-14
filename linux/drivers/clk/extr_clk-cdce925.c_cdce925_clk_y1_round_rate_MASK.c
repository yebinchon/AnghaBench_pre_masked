
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static long FUNC_1(struct clk_hw *VAR_0, unsigned long VAR_1,
  unsigned long *VAR_2)
{
 unsigned long VAR_3 = *VAR_2;
 u16 VAR_4 = FUNC_0(VAR_1, VAR_3);

 if (VAR_4)
  return (long)(VAR_3 / VAR_4);
 return 0;
}
