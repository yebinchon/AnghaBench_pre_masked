
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_2__ {scalar_t__ md_saved_msr; } ;
struct thread {TYPE_1__ td_md; } ;
typedef int sbintime_t ;


 int FUNC_0 (int ,char*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_2 ;
 struct thread* VAR_3 ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int ) ;

void
FUNC_9(int VAR_4)
{
 sbintime_t VAR_5 = -1;
 FUNC_0(VAR_0, "cpu_idle(%d) at %d",
     VAR_4, VAR_2);

 if (&FUNC_2 != ((void*)0)) {
  if (!VAR_4) {
   FUNC_4();
   VAR_5 = FUNC_3();
  }
  FUNC_2(VAR_5);
  if (!VAR_4) {
   FUNC_1();
   FUNC_5();
  }
 }

 FUNC_0(VAR_0, "cpu_idle(%d) at %d done",
     VAR_4, VAR_2);
}
