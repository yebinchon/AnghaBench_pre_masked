
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int rate; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_1(struct clk *VAR_2)
{
 int VAR_3 = (FUNC_0(VAR_0 + 0x00) >> 6) & 0x0007;
 VAR_2->rate *= VAR_1[VAR_3];
}
