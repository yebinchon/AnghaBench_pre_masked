
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* mm; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_1__ context; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2(void)
{
 VAR_1->mm->context.flags = FUNC_0() ? VAR_0 : 0;

 FUNC_1(VAR_1);
}
