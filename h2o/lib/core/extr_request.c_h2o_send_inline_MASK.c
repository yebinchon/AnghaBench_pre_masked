
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int len; int base; } ;
struct TYPE_9__ {TYPE_2__ method; } ;
struct TYPE_11__ {TYPE_1__ input; int pool; } ;
typedef TYPE_3__ h2o_req_t ;
typedef int h2o_iovec_t ;
struct TYPE_12__ {int * member_1; int * member_0; } ;
typedef TYPE_4__ h2o_generator_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_3__*,int *,int,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_4 (int *,char const*,size_t) ;

void FUNC_5(h2o_req_t *VAR_1, const char *VAR_2, size_t VAR_3)
{
    static h2o_generator_t VAR_4 = {((void*)0), ((void*)0)};

    h2o_iovec_t VAR_5 = FUNC_4(&VAR_1->pool, VAR_2, VAR_3);



    FUNC_3(VAR_1, &VAR_4);

    if (FUNC_1(VAR_1->input.method.base, VAR_1->input.method.len, FUNC_0("HEAD")))
        FUNC_2(VAR_1, ((void*)0), 0, VAR_0);
    else
        FUNC_2(VAR_1, &VAR_5, 1, VAR_0);
}
