
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (unsigned long,unsigned long,int*,int*) ;

__attribute__((used)) static long FUNC_1(struct clk_hw *VAR_0, unsigned long VAR_1,
          unsigned long *VAR_2)
{
 u32 VAR_3, VAR_4;
 unsigned long VAR_5 = *VAR_2;

 FUNC_0(VAR_1, VAR_5, &VAR_3, &VAR_4);

 return (VAR_5 * (VAR_4 + 1)) / (1 << VAR_3);
}
