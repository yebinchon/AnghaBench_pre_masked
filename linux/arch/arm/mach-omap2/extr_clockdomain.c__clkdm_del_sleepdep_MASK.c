
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clockdomain {int name; int sleepdep_srcs; } ;
struct clkdm_dep {scalar_t__ sleepdep_usecount; } ;
struct TYPE_2__ {int (* clkdm_del_sleepdep ) (struct clockdomain*,struct clockdomain*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clkdm_dep*) ;
 int FUNC_1 (struct clkdm_dep*) ;
 struct clkdm_dep* FUNC_2 (struct clockdomain*,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct clockdomain*,struct clockdomain*) ;

__attribute__((used)) static int FUNC_5(struct clockdomain *VAR_2,
          struct clockdomain *VAR_3)
{
 struct clkdm_dep *VAR_4;
 int VAR_5 = 0;

 if (!VAR_2 || !VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_3, VAR_2->sleepdep_srcs);
 if (FUNC_0(VAR_4))
  VAR_5 = FUNC_1(VAR_4);

 if (!VAR_1 || !VAR_1->clkdm_del_sleepdep)
  VAR_5 = -VAR_0;

 if (VAR_5) {
  FUNC_3("clockdomain: hardware cannot set/clear sleep dependency affecting %s from %s\n",
    VAR_2->name, VAR_3->name);
  return VAR_5;
 }

 VAR_4->sleepdep_usecount--;
 if (VAR_4->sleepdep_usecount == 0) {
  FUNC_3("clockdomain: will no longer prevent %s from sleeping if %s is active\n",
    VAR_2->name, VAR_3->name);

  VAR_5 = VAR_1->clkdm_del_sleepdep(VAR_2, VAR_3);
 }

 return VAR_5;
}
