
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int len; } ;
struct TYPE_12__ {int pool; TYPE_3__* pathconf; TYPE_5__ path_normalized; int path; int query_at; } ;
typedef TYPE_2__ h2o_req_t ;
struct TYPE_11__ {int member_0; } ;
struct TYPE_13__ {TYPE_1__ member_1; int * member_0; } ;
typedef TYPE_3__ h2o_pathconf_t ;
struct TYPE_14__ {int len; int base; } ;
typedef TYPE_4__ h2o_iovec_t ;


 int FUNC_0 (char*) ;
 TYPE_4__ FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int *,TYPE_5__,TYPE_5__) ;
 int FUNC_3 (TYPE_2__*,int *,int *) ;
 TYPE_5__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;

void FUNC_8(void)
{
    h2o_pathconf_t VAR_0 = {((void*)0), FUNC_0("/abc")};
    h2o_req_t VAR_1;
    h2o_iovec_t VAR_2;

    FUNC_3(&VAR_1, ((void*)0), ((void*)0));


    VAR_1.path_normalized = FUNC_4(FUNC_0("/abc/mno\0xyz"));
    VAR_1.query_at = VAR_1.path_normalized.len;
    VAR_1.path = FUNC_2(&VAR_1.pool, VAR_1.path_normalized, FUNC_4(FUNC_0("?q")));
    VAR_1.pathconf = &VAR_0;
    VAR_2 = FUNC_1(&VAR_1, FUNC_0("/def"), 1);
    FUNC_7(FUNC_6(VAR_2.base, VAR_2.len, FUNC_0("/def/mno%00xyz?q")));
    VAR_2 = FUNC_1(&VAR_1, FUNC_0("/def/"), 1);
    FUNC_7(FUNC_6(VAR_2.base, VAR_2.len, FUNC_0("/def/mno%00xyz?q")));

    FUNC_5(&VAR_1.pool);
}
