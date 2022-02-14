
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct r9a06g032_clk_dualgate {int * gate; int clocks; int selector; } ;


 size_t FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static int
FUNC_2(struct r9a06g032_clk_dualgate *VAR_0, int VAR_1)
{
 u8 VAR_2 = FUNC_0(VAR_0->clocks, VAR_0->selector);


 FUNC_1(VAR_0->clocks, &VAR_0->gate[!VAR_2], 0);
 FUNC_1(VAR_0->clocks, &VAR_0->gate[VAR_2], VAR_1);

 return 0;
}
