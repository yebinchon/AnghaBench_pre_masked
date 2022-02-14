
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_core {scalar_t__ protect_count; struct clk_core* parent; int name; } ;


 scalar_t__ FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct clk_core *VAR_1)
{
 FUNC_1(&VAR_0);

 if (!VAR_1)
  return;

 if (FUNC_0(VAR_1->protect_count == 0,
     "%s already unprotected\n", VAR_1->name))
  return;

 if (--VAR_1->protect_count > 0)
  return;

 FUNC_2(VAR_1->parent);
}
