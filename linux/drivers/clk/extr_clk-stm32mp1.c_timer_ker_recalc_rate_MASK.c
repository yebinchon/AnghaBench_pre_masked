
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timer_cker {int timpre; int apbdiv; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct timer_cker* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_2,
        unsigned long VAR_3)
{
 struct timer_cker *VAR_4 = FUNC_1(VAR_2);
 u32 VAR_5, VAR_6;
 u32 VAR_7;

 VAR_5 = FUNC_0(VAR_4->apbdiv) & VAR_0;

 VAR_6 = FUNC_0(VAR_4->timpre) & VAR_1;

 if (!VAR_5)
  return VAR_3;

 VAR_7 = (VAR_6 + 1) * 2;

 return VAR_3 * VAR_7;
}
