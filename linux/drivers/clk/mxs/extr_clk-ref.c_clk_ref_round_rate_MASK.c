
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static long FUNC_1(struct clk_hw *VAR_0, unsigned long VAR_1,
          unsigned long *VAR_2)
{
 unsigned long VAR_3 = *VAR_2;
 u64 VAR_4 = VAR_3;
 u8 VAR_5;

 VAR_4 = VAR_4 * 18 + VAR_1 / 2;
 FUNC_0(VAR_4, VAR_1);
 VAR_5 = VAR_4;

 if (VAR_5 < 18)
  VAR_5 = 18;
 else if (VAR_5 > 35)
  VAR_5 = 35;

 VAR_4 = VAR_3;
 VAR_4 *= 18;
 FUNC_0(VAR_4, VAR_5);

 return VAR_4;
}
