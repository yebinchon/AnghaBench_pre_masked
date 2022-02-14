
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int status; } ;
struct TYPE_10__ {int personality; TYPE_2__* mm; } ;
struct TYPE_9__ {int orig_ax; } ;
struct TYPE_7__ {scalar_t__ ia32_compat; } ;
struct TYPE_8__ {TYPE_1__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 TYPE_4__* VAR_6 ;
 TYPE_5__* FUNC_1 () ;
 TYPE_3__* FUNC_2 (TYPE_4__*) ;

void FUNC_3(void)
{



 FUNC_0(VAR_2);
 FUNC_0(VAR_1);
 FUNC_0(VAR_3);

 FUNC_2(VAR_6)->orig_ax = VAR_5;
 FUNC_1()->status &= ~VAR_4;


 if (VAR_6->mm)
  VAR_6->mm->context.ia32_compat = 0;





 VAR_6->personality &= ~VAR_0;
}
