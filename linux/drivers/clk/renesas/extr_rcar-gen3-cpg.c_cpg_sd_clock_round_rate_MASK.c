
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd_clock {int dummy; } ;
struct clk_hw {int dummy; } ;


 long FUNC_0 (unsigned long,unsigned int) ;
 unsigned int FUNC_1 (struct sd_clock*,unsigned long,unsigned long) ;
 struct sd_clock* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_3(struct clk_hw *VAR_0, unsigned long VAR_1,
          unsigned long *VAR_2)
{
 struct sd_clock *VAR_3 = FUNC_2(VAR_0);
 unsigned int VAR_4 = FUNC_1(VAR_3, VAR_1, *VAR_2);

 return FUNC_0(*VAR_2, VAR_4);
}
