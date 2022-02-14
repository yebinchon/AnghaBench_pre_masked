
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int rate; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_1(struct clk *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = (VAR_3 & 0x0300) >> 8;

 VAR_2->rate *= VAR_1[VAR_4];
}
