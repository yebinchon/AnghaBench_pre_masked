
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static u8 FUNC_1(struct clk_hw *VAR_7)
{
 unsigned int VAR_8, VAR_9;
 unsigned long VAR_10 = FUNC_0(VAR_0);
 unsigned long VAR_11 = FUNC_0(VAR_3);

 VAR_8 = VAR_11 & (1 << VAR_2);
 VAR_9 = VAR_10 & (1 << VAR_1);
 if (VAR_8)
  return VAR_4;
 if (VAR_9)
  return VAR_6;
 else
  return VAR_5;
}
