
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dss_clk {int * clk; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct dss_clk *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = VAR_1 - 1; VAR_2 >= 0; VAR_2--) {
  if (VAR_0[VAR_2].clk)
   FUNC_0(VAR_0[VAR_2].clk);
  VAR_0[VAR_2].clk = ((void*)0);
 }
}
