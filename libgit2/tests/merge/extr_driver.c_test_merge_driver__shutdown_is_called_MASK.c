
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int initialized; int shutdown; } ;
struct TYPE_3__ {scalar_t__ shutdown; scalar_t__ initialized; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void FUNC_5(void)
{
    VAR_0.initialized = 0;
    VAR_0.shutdown = 0;
    VAR_1.initialized = 0;
    VAR_1.shutdown = 0;


    FUNC_2("custom");
    FUNC_1();


 FUNC_4();





 FUNC_0(VAR_0.initialized);
 FUNC_0(VAR_0.shutdown);
 FUNC_0(!VAR_1.initialized);
 FUNC_0(!VAR_1.shutdown);

 FUNC_3();
}
