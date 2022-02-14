
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int pid_t ;
struct TYPE_7__ {int* data; } ;
typedef TYPE_1__ ev_cleanup ;
struct TYPE_8__ {int* data; } ;
typedef TYPE_2__ ev_child ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_2__*,int *,int,int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (char*,char**) ;
 int FUNC_6 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_7 (int) ;
 int FUNC_8 (char*) ;

void FUNC_9(pid_t *VAR_3, char *VAR_4[]) {
    if (*VAR_3 != -1) {
        FUNC_0("i3-nagbar already running (PID %d), not starting again.\n", *VAR_3);
        return;
    }

    *VAR_3 = FUNC_6();
    if (*VAR_3 == -1) {
        FUNC_8("Could not fork()");
        return;
    }


    if (*VAR_3 == 0)
        FUNC_5("i3-nagbar", VAR_4);

    FUNC_0("Starting i3-nagbar with PID %d\n", *VAR_3);



    ev_child *VAR_5 = FUNC_7(sizeof(ev_child));
    FUNC_1(VAR_5, &VAR_2, *VAR_3, 0);
    VAR_5->data = VAR_3;
    FUNC_2(VAR_0, VAR_5);



    ev_cleanup *VAR_6 = FUNC_7(sizeof(ev_cleanup));
    FUNC_3(VAR_6, VAR_1);
    VAR_6->data = VAR_3;
    FUNC_4(VAR_0, VAR_6);
}
