
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dbi {int reset; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

void FUNC_3(struct mipi_dbi *VAR_0)
{
 if (!VAR_0->reset)
  return;

 FUNC_0(VAR_0->reset, 0);
 FUNC_2(20, 1000);
 FUNC_0(VAR_0->reset, 1);
 FUNC_1(120);
}
