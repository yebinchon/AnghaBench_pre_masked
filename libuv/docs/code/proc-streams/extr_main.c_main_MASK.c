
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; } ;
struct TYPE_6__ {TYPE_1__ data; void* flags; } ;
typedef TYPE_2__ uv_stdio_container_t ;
struct TYPE_7__ {int stdio_count; char* file; char** args; int exit_cb; TYPE_2__* stdio; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,size_t*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *,TYPE_3__*) ;
 char* FUNC_7 (int) ;

int FUNC_8() {
    VAR_4 = FUNC_3();

    size_t VAR_8 = 500;
    char VAR_9[VAR_8];
    FUNC_4(VAR_9, &VAR_8);
    FUNC_1(VAR_9 + (FUNC_2(VAR_9) - FUNC_2("proc-streams")), "test");

    char* VAR_10[2];
    VAR_10[0] = VAR_9;
    VAR_10[1] = ((void*)0);



    VAR_6.stdio_count = 3;
    uv_stdio_container_t VAR_11[3];
    VAR_11[0].flags = VAR_0;
    VAR_11[1].flags = VAR_0;
    VAR_11[2].flags = VAR_1;
    VAR_11[2].data.fd = 2;
    VAR_6.stdio = VAR_11;

    VAR_6.exit_cb = VAR_5;
    VAR_6.file = VAR_10[0];
    VAR_6.args = VAR_10;

    int VAR_12;
    if ((VAR_12 = FUNC_6(VAR_4, &VAR_3, &VAR_6))) {
        FUNC_0(VAR_7, "%s\n", FUNC_7(VAR_12));
        return 1;
    }

    return FUNC_5(VAR_4, VAR_2);
}
