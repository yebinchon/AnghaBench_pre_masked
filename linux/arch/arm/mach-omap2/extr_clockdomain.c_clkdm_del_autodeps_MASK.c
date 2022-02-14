
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct clockdomain {int flags; int name; } ;
struct TYPE_5__ {TYPE_2__* ptr; } ;
struct clkdm_autodep {TYPE_1__ clkdm; } ;
struct TYPE_6__ {int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct clockdomain*,TYPE_2__*) ;
 int FUNC_2 (struct clockdomain*,TYPE_2__*) ;
 struct clkdm_autodep* VAR_1 ;
 int FUNC_3 (char*,int ,int ) ;

void FUNC_4(struct clockdomain *VAR_2)
{
 struct clkdm_autodep *VAR_3;

 if (!VAR_1 || VAR_2->flags & VAR_0)
  return;

 for (VAR_3 = VAR_1; VAR_3->clkdm.ptr; VAR_3++) {
  if (FUNC_0(VAR_3->clkdm.ptr))
   continue;

  FUNC_3("clockdomain: %s: removing %s sleepdep/wkdep\n",
    VAR_2->name, VAR_3->clkdm.ptr->name);

  FUNC_1(VAR_2, VAR_3->clkdm.ptr);
  FUNC_2(VAR_2, VAR_3->clkdm.ptr);
 }
}
