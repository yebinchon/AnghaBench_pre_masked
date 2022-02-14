
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int FUNC_1 (unsigned long,unsigned long) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_1, unsigned long VAR_2,
 unsigned long *VAR_3)
{
 unsigned long VAR_4, VAR_5, VAR_6, VAR_7;
 u64 VAR_8;





 VAR_2 = VAR_2 - VAR_2 % VAR_0;

 VAR_5 = VAR_2 / VAR_0;
 if (VAR_5 > FUNC_0(13))
  VAR_5 = FUNC_0(13);
 if (VAR_5 < 1)
  VAR_5 = 1;

 VAR_4 = *VAR_3;

 VAR_6 = VAR_4 / VAR_0;
 if (VAR_6 > FUNC_0(6))
  VAR_6 = FUNC_0(6);
 VAR_7 = 1;

 VAR_8 = (u64)VAR_4 * VAR_5;
 FUNC_1(VAR_8, VAR_6 * VAR_7);

 return (long)VAR_8;
}
