
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uv_loop_t ;
typedef int h2o_pathconf_t ;
typedef int h2o_hostconf_t ;
typedef int h2o_handler_t ;
struct TYPE_12__ {int hosts; TYPE_2__* ctx; } ;
struct TYPE_11__ {int hosts; } ;
struct TYPE_10__ {int loop; } ;
struct TYPE_9__ {int on_req; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 scalar_t__ FUNC_1 () ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (TYPE_3__*) ;
 int * FUNC_4 (TYPE_3__*,int ,int) ;
 int * FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (TYPE_2__*,int *,TYPE_3__*) ;
 TYPE_1__* FUNC_7 (int *,int) ;
 int * FUNC_8 () ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ) ;

int FUNC_14(int VAR_8, char **VAR_9)
{
    h2o_hostconf_t *VAR_10;
    h2o_pathconf_t *VAR_11;

    FUNC_3(&VAR_3);
    VAR_10 = FUNC_4(&VAR_3, FUNC_10(FUNC_0("default")), 65535);
    VAR_11 = FUNC_5(VAR_10, "/", 0);
    FUNC_7(VAR_11, sizeof(h2o_handler_t))->on_req = VAR_6;






    FUNC_6(&VAR_4, FUNC_8(), &VAR_3);
    VAR_2.ctx = &VAR_4;
    VAR_2.hosts = VAR_3.hosts;

    if (FUNC_1() != 0) {
        FUNC_2(VAR_7, "failed to listen to 127.0.0.1:7890:%s\n", FUNC_11(VAR_5));
        goto Error;
    }




    while (FUNC_9(VAR_4.loop, VAR_0) == 0)
        ;


Error:
    return 1;
}
