
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ptr; } ;
struct clockdomain {int flags; TYPE_1__ pwrdm; int _flags; int name; } ;
struct TYPE_4__ {int (* clkdm_wakeup ) (struct clockdomain*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct clockdomain*) ;

int FUNC_3(struct clockdomain *VAR_4)
{
 int VAR_5;

 if (!VAR_4)
  return -VAR_1;

 if (!(VAR_4->flags & VAR_0)) {
  FUNC_0("clockdomain: %s does not support forcing wakeup via software\n",
    VAR_4->name);
  return -VAR_1;
 }

 if (!VAR_3 || !VAR_3->clkdm_wakeup)
  return -VAR_1;

 FUNC_0("clockdomain: forcing wakeup on %s\n", VAR_4->name);

 VAR_4->_flags &= ~VAR_2;
 VAR_5 = VAR_3->clkdm_wakeup(VAR_4);
 VAR_5 |= FUNC_1(VAR_4->pwrdm.ptr);

 return VAR_5;
}
