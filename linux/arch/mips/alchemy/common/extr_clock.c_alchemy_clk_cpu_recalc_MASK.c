
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_2,
         unsigned long VAR_3)
{
 unsigned long VAR_4;






 if (FUNC_3(FUNC_2()))
  VAR_4 = 396000000;
 else {
  VAR_4 = FUNC_1(VAR_1) & 0x7f;
  if (FUNC_0() < VAR_0)
   VAR_4 &= 0x3f;
  VAR_4 *= VAR_3;
 }

 return VAR_4;
}
