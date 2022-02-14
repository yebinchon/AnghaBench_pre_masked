
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;

void
FUNC_1 (void)
{

 VAR_2->thread.flags &= ~(VAR_1 | VAR_0);
 FUNC_0(VAR_2);
}
