
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_core {scalar_t__ protect_count; struct clk_core* parent; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct clk_core *VAR_1)
{
 FUNC_0(&VAR_0);

 if (!VAR_1)
  return;

 if (VAR_1->protect_count == 0)
  FUNC_1(VAR_1->parent);

 VAR_1->protect_count++;
}
