
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk_hw *VAR_2,
       unsigned long VAR_3)
{
 u32 VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_0);
 VAR_5 = ((VAR_4 >> 8) & 0xff) + ((VAR_4 >> 16) & 0xff);
 VAR_5 *= VAR_1;
 VAR_5 >>= 2;

 return VAR_5;
}
