
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_2,
       unsigned long VAR_3)
{
 u32 VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_0);
 VAR_5 = 12 + (VAR_4 & FUNC_0(5, 0));
 VAR_5 *= VAR_1;
 VAR_5 >>= 1;

 return VAR_5;
}
