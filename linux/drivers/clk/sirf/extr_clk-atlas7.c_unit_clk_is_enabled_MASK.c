
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct clk_unit {int bit; scalar_t__ regofs; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 struct clk_unit* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_2)
{
 struct clk_unit *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4;

 VAR_4 = VAR_3->regofs + VAR_1 - VAR_0;

 return !!(FUNC_1(VAR_4) & FUNC_0(VAR_3->bit));
}
