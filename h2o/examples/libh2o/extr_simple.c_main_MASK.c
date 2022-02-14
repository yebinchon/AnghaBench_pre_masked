
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uv_loop_t ;
typedef int h2o_pathconf_t ;
typedef int h2o_hostconf_t ;
typedef int h2o_access_log_filehandle_t ;
struct TYPE_10__ {int hosts; TYPE_1__* ctx; } ;
struct TYPE_9__ {int hosts; } ;
struct TYPE_8__ {int loop; int queue; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_7__ VAR_7 ;
 int VAR_8 ;
 TYPE_2__ VAR_9 ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,char*,char*) ;
 int * FUNC_3 (char*,int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int * FUNC_6 (TYPE_2__*,int ,int) ;
 int * FUNC_7 (int *,char*,int ) ;
 int FUNC_8 (TYPE_1__*,int *,TYPE_2__*) ;
 int * FUNC_9 () ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int *,char*,int *,int *,int ) ;
 int FUNC_12 (int ) ;
 int VAR_12 ;
 int FUNC_13 (int ,int *,int ) ;
 int FUNC_14 (int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int * FUNC_15 (int *,char*,int ) ;
 int VAR_15 ;
 scalar_t__ FUNC_16 (char*,char*,char*) ;
 int FUNC_17 (int ,int ) ;
 int VAR_16 ;
 char* FUNC_18 (int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,int ) ;

int FUNC_21(int VAR_17, char **VAR_18)
{
    h2o_hostconf_t *VAR_19;
    h2o_access_log_filehandle_t *VAR_20 = FUNC_3("/dev/stdout", ((void*)0), VAR_0);
    h2o_pathconf_t *VAR_21;

    FUNC_17(VAR_2, VAR_3);

    FUNC_5(&VAR_9);
    VAR_19 = FUNC_6(&VAR_9, FUNC_12(FUNC_0("default")), 65535);

    VAR_21 = FUNC_15(VAR_19, "/post-test", VAR_14);
    if (VAR_20 != ((void*)0))
        FUNC_4(VAR_21, VAR_20);

    VAR_21 = FUNC_15(VAR_19, "/chunked-test", VAR_8);
    if (VAR_20 != ((void*)0))
        FUNC_4(VAR_21, VAR_20);

    VAR_21 = FUNC_15(VAR_19, "/reproxy-test", VAR_15);
    FUNC_14(VAR_21);
    if (VAR_20 != ((void*)0))
        FUNC_4(VAR_21, VAR_20);

    VAR_21 = FUNC_7(VAR_19, "/", 0);
    FUNC_11(VAR_21, "examples/doc_root", ((void*)0), ((void*)0), 0);
    if (VAR_20 != ((void*)0))
        FUNC_4(VAR_21, VAR_20);






    FUNC_8(&VAR_10, FUNC_9(), &VAR_9);

    if (VAR_5)
        FUNC_13(VAR_10.queue, &VAR_13, VAR_12);

    if (VAR_4 && FUNC_16("examples/h2o/server.crt", "examples/h2o/server.key",
                               "DEFAULT:!MD5:!DSS:!DES:!RC4:!RC2:!SEED:!IDEA:!NULL:!ADH:!EXP:!SRP:!PSK") != 0)
        goto Error;

    VAR_7.ctx = &VAR_10;
    VAR_7.hosts = VAR_9.hosts;

    if (FUNC_1() != 0) {
        FUNC_2(VAR_16, "failed to listen to 127.0.0.1:7890:%s\n", FUNC_18(VAR_11));
        goto Error;
    }




    while (FUNC_10(VAR_10.loop, VAR_1) == 0)
        ;


Error:
    return 1;
}
