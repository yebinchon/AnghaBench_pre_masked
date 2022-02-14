
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_core {int protect_count; } ;


 int FUNC_0 (struct clk_core*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct clk_core *VAR_1, int VAR_2)
{
 FUNC_1(&VAR_0);

 if (!VAR_1)
  return;

 if (VAR_2 == 0)
  return;

 FUNC_0(VAR_1);
 VAR_1->protect_count = VAR_2;
}
