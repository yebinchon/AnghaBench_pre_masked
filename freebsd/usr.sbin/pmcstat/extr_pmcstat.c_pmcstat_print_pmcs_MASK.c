
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pa_printfile; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void
FUNC_3(void)
{
 static int VAR_2 = 0;


 if (++VAR_2 > VAR_1) {
  (void) FUNC_0(VAR_0.pa_printfile, "\n");
  VAR_2 = 1;
 }
 if (VAR_2 == 1)
  FUNC_2();
 (void) FUNC_0(VAR_0.pa_printfile, "\n");

 FUNC_1();

 return;
}
