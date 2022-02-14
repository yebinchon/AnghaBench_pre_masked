
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_5)
{
 u32 VAR_6 = FUNC_1(VAR_4 + VAR_1);
 VAR_6 &= ~(VAR_3 | VAR_0);
 FUNC_2(VAR_6, VAR_4 + VAR_1);
 while (!(FUNC_1(VAR_4 + VAR_1) &
   VAR_2))
  FUNC_0();

 return 0;
}
