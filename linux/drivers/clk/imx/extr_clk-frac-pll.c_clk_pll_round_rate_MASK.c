
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static long FUNC_1(struct clk_hw *VAR_1, unsigned long VAR_2,
          unsigned long *VAR_3)
{
 u64 VAR_4 = *VAR_3;
 u32 VAR_5, VAR_6;
 u64 VAR_7;

 VAR_4 *= 8;
 VAR_2 *= 2;
 VAR_7 = VAR_2;
 FUNC_0(VAR_7, VAR_4);
 VAR_6 = VAR_7;
 VAR_7 = VAR_2 - VAR_6 * VAR_4;
 VAR_7 *= VAR_0;
 FUNC_0(VAR_7, VAR_4);
 VAR_5 = VAR_7;

 VAR_7 = VAR_4;
 VAR_7 *= VAR_5;
 FUNC_0(VAR_7, VAR_0);

 VAR_2 = VAR_4 * VAR_6 + VAR_7;

 return VAR_2 / 2;
}
