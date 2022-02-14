
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timer_ker {int dppre_shift; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 struct timer_ker* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_3,
  unsigned long VAR_4)
{
 struct timer_ker *VAR_5 = FUNC_1(VAR_3);
 u32 VAR_6;
 u32 VAR_7 = VAR_5->dppre_shift;
 u32 VAR_8;
 u32 VAR_9;

 VAR_6 = (FUNC_0(VAR_2 + VAR_0) >> 15) & 0x01;

 VAR_8 = (FUNC_0(VAR_2 + VAR_1) >> VAR_7) & 0x03;

 VAR_9 = 2;

 if (VAR_8 < 4)
  VAR_9 = 1;

 else if (VAR_6 && VAR_8 > 4)
  VAR_9 = 4;

 return VAR_4 * VAR_9;
}
