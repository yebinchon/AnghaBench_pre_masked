
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static u8 FUNC_1(struct clk_hw *VAR_4)
{
 unsigned int VAR_5;
 unsigned long VAR_6 = FUNC_0(VAR_1);

 VAR_5 = VAR_6 & (1 << VAR_0);
 if (VAR_5)
  return VAR_2;
 else
  return VAR_3;
}
