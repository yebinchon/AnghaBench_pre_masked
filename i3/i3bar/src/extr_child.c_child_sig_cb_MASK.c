
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ev_loop {int dummy; } ;
struct TYPE_4__ {int rstatus; } ;
typedef TYPE_1__ ev_child ;
struct TYPE_5__ {int pid; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ) ;
 TYPE_3__ VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static void FUNC_5(struct ev_loop *VAR_1, ev_child *VAR_2, int VAR_3) {
    int VAR_4 = FUNC_1(VAR_2->rstatus);

    FUNC_0("Child (pid: %d) unexpectedly exited with status %d\n",
         VAR_0.pid,
         VAR_4);



    if (VAR_4 == 126)
        FUNC_4("status_command is not executable (exit %d)", VAR_4);
    else if (VAR_4 == 127)
        FUNC_4("status_command not found or is missing a library dependency (exit %d)", VAR_4);
    else
        FUNC_4("status_command process exited unexpectedly (exit %d)", VAR_4);

    FUNC_2();
    FUNC_3(0);
}
