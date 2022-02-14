
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ptr; } ;
struct clockdomain {int flags; TYPE_1__ pwrdm; int _flags; int name; int usecount; scalar_t__ forcewake_count; } ;
struct TYPE_4__ {int (* clkdm_allow_idle ) (struct clockdomain*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (struct clockdomain*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct clockdomain*) ;

void FUNC_5(struct clockdomain *VAR_5)
{
 if (!VAR_5)
  return;

 if (!FUNC_0(!VAR_5->forcewake_count))
  VAR_5->forcewake_count--;

 if (VAR_5->forcewake_count)
  return;

 if (!VAR_5->usecount && (VAR_5->flags & VAR_1))
  FUNC_1(VAR_5);

 if (!(VAR_5->flags & VAR_0))
  return;

 if (VAR_5->flags & VAR_2)
  return;

 if (!VAR_4 || !VAR_4->clkdm_allow_idle)
  return;

 FUNC_2("clockdomain: enabling automatic idle transitions for %s\n",
   VAR_5->name);

 VAR_5->_flags |= VAR_3;
 VAR_4->clkdm_allow_idle(VAR_5);
 FUNC_3(VAR_5->pwrdm.ptr);
}
