
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct clk_hw {int dummy; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (int,unsigned long) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_0, unsigned long VAR_1,
     unsigned long *VAR_2)
{
 unsigned long VAR_3 = *VAR_2;
 unsigned int VAR_4;

 if (!VAR_3)
  VAR_3 = 1;

 VAR_4 = FUNC_1((u64)VAR_1 * 32, VAR_3);
 VAR_4 = FUNC_0(VAR_4, 1U, 32U);

 return *VAR_2 / 32 * VAR_4;
}
