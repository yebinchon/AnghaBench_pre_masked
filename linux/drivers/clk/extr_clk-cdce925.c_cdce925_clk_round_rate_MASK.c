
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u16 ;
struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (struct clk_hw*,unsigned long) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_0, unsigned long VAR_1,
  unsigned long *VAR_2)
{
 unsigned long VAR_3 = *VAR_2;
 u16 VAR_4 = FUNC_0(VAR_1, VAR_3);

 if (VAR_3 / VAR_4 != VAR_1) {
  VAR_3 = FUNC_1(VAR_0, VAR_1);
  VAR_4 = FUNC_0(VAR_1, VAR_3);
  *VAR_2 = VAR_3;
 }

 if (VAR_4)
  return (long)(VAR_3 / VAR_4);
 return 0;
}
