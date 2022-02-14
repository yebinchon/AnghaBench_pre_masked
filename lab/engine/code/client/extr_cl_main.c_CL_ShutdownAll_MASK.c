
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_6__ {scalar_t__ demorecording; } ;
struct TYPE_5__ {void* soundRegistered; void* rendererStarted; void* cgameStarted; void* uiStarted; } ;
struct TYPE_4__ {int (* Shutdown ) (void*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 void* VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_8 (void*) ;

void FUNC_9(qboolean VAR_4)
{
 if(FUNC_5())
  FUNC_0();

 if(VAR_0.demorecording)
  FUNC_4();





 FUNC_7();

 FUNC_1();

 FUNC_3();


 if(VAR_4)
  FUNC_2();
 else if(VAR_3.Shutdown)
  VAR_3.Shutdown(VAR_2);

 VAR_1.uiStarted = VAR_2;
 VAR_1.cgameStarted = VAR_2;
 VAR_1.rendererStarted = VAR_2;
 VAR_1.soundRegistered = VAR_2;
}
