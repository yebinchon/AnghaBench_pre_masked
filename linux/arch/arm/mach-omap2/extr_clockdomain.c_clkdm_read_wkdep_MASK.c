
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clockdomain {int name; int wkdep_srcs; } ;
struct clkdm_dep {int dummy; } ;
struct TYPE_2__ {int (* clkdm_read_wkdep ) (struct clockdomain*,struct clockdomain*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clkdm_dep*) ;
 int FUNC_1 (struct clkdm_dep*) ;
 struct clkdm_dep* FUNC_2 (struct clockdomain*,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct clockdomain*,struct clockdomain*) ;

int FUNC_5(struct clockdomain *VAR_2, struct clockdomain *VAR_3)
{
 struct clkdm_dep *VAR_4;
 int VAR_5 = 0;

 if (!VAR_2 || !VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_3, VAR_2->wkdep_srcs);
 if (FUNC_0(VAR_4))
  VAR_5 = FUNC_1(VAR_4);

 if (!VAR_1 || !VAR_1->clkdm_read_wkdep)
  VAR_5 = -VAR_0;

 if (VAR_5) {
  FUNC_3("clockdomain: hardware cannot set/clear wake up of %s when %s wakes up\n",
    VAR_2->name, VAR_3->name);
  return VAR_5;
 }


 return VAR_1->clkdm_read_wkdep(VAR_2, VAR_3);
}
