
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
 u64 VAR_3 = *VAR_2;
 u8 VAR_4;

 VAR_3 = VAR_3 * 18 + VAR_1 / 2;
 FUNC_0(VAR_3, VAR_1);
 VAR_4 = VAR_3;

 if (VAR_4 < 12)
  VAR_4 = 12;
 else if (VAR_4 > 35)
  VAR_4 = 35;

 VAR_3 = *VAR_2;
 VAR_3 *= 18;
 FUNC_0(VAR_3, VAR_4);

 return VAR_3;
}
