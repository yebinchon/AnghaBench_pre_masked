
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_bulk_data {int clk; } ;


 int FUNC_0 (int ) ;

void FUNC_1(int VAR_0, const struct clk_bulk_data *VAR_1)
{

 while (--VAR_0 >= 0)
  FUNC_0(VAR_1[VAR_0].clk);
}
