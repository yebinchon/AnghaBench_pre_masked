
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;


 long VAR_0 ;
 long FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_1, unsigned long VAR_2,
    unsigned long *VAR_3)
{
 u32 VAR_4;

 if (VAR_2 * 2 > *VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_1(*VAR_3, VAR_2);
 return FUNC_0(VAR_4, *VAR_3);
}
