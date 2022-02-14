
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uv_tcp_t ;
typedef int uv_stream_t ;
struct TYPE_7__ {int * stream; } ;
struct TYPE_8__ {void* flags; TYPE_1__ data; } ;
typedef TYPE_2__ uv_stdio_container_t ;
struct TYPE_10__ {int stdio_count; char* file; char** args; int exit_cb; TYPE_2__* stdio; } ;
struct TYPE_9__ {void* data; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_4 ;
 TYPE_4__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,size_t*) ;
 int FUNC_4 (int ,TYPE_3__*,TYPE_4__*) ;
 char* FUNC_5 (int) ;

void FUNC_6(uv_tcp_t *VAR_7) {
    size_t VAR_8 = 500;
    char VAR_9[VAR_8];
    FUNC_3(VAR_9, &VAR_8);
    FUNC_1(VAR_9 + (FUNC_2(VAR_9) - FUNC_2("cgi")), "tick");

    char* VAR_10[2];
    VAR_10[0] = VAR_9;
    VAR_10[1] = ((void*)0);



    VAR_5.stdio_count = 3;
    uv_stdio_container_t VAR_11[3];
    VAR_11[0].flags = VAR_0;
    VAR_11[1].flags = VAR_1;
    VAR_11[1].data.stream = (uv_stream_t*) VAR_7;
    VAR_11[2].flags = VAR_0;
    VAR_5.stdio = VAR_11;

    VAR_5.exit_cb = VAR_3;
    VAR_5.file = VAR_10[0];
    VAR_5.args = VAR_10;


    VAR_2.data = (void*) VAR_7;
    int VAR_12;
    if ((VAR_12 = FUNC_4(VAR_4, &VAR_2, &VAR_5))) {
        FUNC_0(VAR_6, "%s\n", FUNC_5(VAR_12));
        return;
    }
}
