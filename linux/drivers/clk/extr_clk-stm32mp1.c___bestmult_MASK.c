
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timer_cker {int apbdiv; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct timer_cker* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_1, unsigned long VAR_2,
    unsigned long VAR_3)
{
 struct timer_cker *VAR_4 = FUNC_1(VAR_1);
 u32 VAR_5;
 unsigned int VAR_6 = 0;

 VAR_5 = FUNC_0(VAR_4->apbdiv) & VAR_0;
 if (VAR_5 < 2)
  return 1;

 VAR_6 = 2;

 if (VAR_2 / VAR_3 >= 4)
  VAR_6 = 4;

 return VAR_6;
}
