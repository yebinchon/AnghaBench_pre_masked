
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int h2o_pathconf_t ;
typedef int h2o_hostconf_t ;
struct TYPE_6__ {int server_name; } ;
typedef TYPE_1__ h2o_globalconf_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (TYPE_1__*,int ,int) ;
 int * FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_9()
{
    h2o_globalconf_t VAR_3;
    h2o_hostconf_t *VAR_4;
    h2o_pathconf_t *VAR_5;

    FUNC_2(&VAR_3);
    VAR_3.server_name = FUNC_7(FUNC_0("h2o/1.2.1-alpha1"));
    VAR_4 = FUNC_3(&VAR_3, FUNC_7(FUNC_0("default")), 65535);
    VAR_5 = FUNC_4(VAR_4, "/", 0);

    FUNC_6(&VAR_0, VAR_2, &VAR_3);

    FUNC_8("build-request", VAR_1);

    FUNC_5(&VAR_0);
    FUNC_1(&VAR_3);
}
