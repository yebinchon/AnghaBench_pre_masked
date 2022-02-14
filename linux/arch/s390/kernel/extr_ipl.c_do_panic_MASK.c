
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* action; } ;
struct TYPE_5__ {int (* fn ) (TYPE_2__*) ;} ;


 int FUNC_0 () ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(void)
{
 FUNC_0();
 VAR_0.action->fn(&VAR_0);
 FUNC_1(&VAR_0);
}
