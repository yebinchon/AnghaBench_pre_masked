
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scpi_clk {int dummy; } ;
struct clk_hw {int dummy; } ;


 long FUNC_0 (struct scpi_clk*,unsigned long) ;
 struct scpi_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_0, unsigned long VAR_1,
     unsigned long *VAR_2)
{
 struct scpi_clk *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3, VAR_1);
}
