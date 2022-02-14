
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int status; char* reason; int headers; } ;
struct TYPE_14__ {TYPE_1__ res; int pool; int path_normalized; } ;
typedef TYPE_2__ h2o_req_t ;
typedef int h2o_iovec_t ;
struct TYPE_15__ {int * member_1; int * member_0; } ;
typedef TYPE_3__ h2o_generator_t ;
struct TYPE_16__ {int size; int bytes; } ;
typedef TYPE_4__ h2o_buffer_t ;
typedef int DIR ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ,int *,int ) ;
 int FUNC_4 (TYPE_4__*,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_2__*,int *,int,int ) ;
 int FUNC_7 (TYPE_2__*,char*,char*,int ) ;
 int FUNC_8 (TYPE_2__*,int *,int ) ;
 int FUNC_9 (TYPE_2__*,TYPE_3__*) ;
 int * FUNC_10 (char const*) ;

__attribute__((used)) static int FUNC_11(h2o_req_t *VAR_2, const char *VAR_3, size_t VAR_4, int VAR_5)
{
    static h2o_generator_t VAR_6 = {((void*)0), ((void*)0)};
    DIR *VAR_7;
    h2o_buffer_t *VAR_8;
    h2o_iovec_t VAR_9;


    if ((VAR_7 = FUNC_10(VAR_3)) == ((void*)0))
        return -1;
    VAR_8 = FUNC_1(&VAR_2->pool, VAR_2->path_normalized, VAR_7);
    FUNC_2(VAR_7);

    if (VAR_8 == ((void*)0)) {
        FUNC_7(VAR_2, "Service Unavailable", "please try again later", 0);
        return 0;
    }

    VAR_9 = FUNC_5(VAR_8->bytes, VAR_8->size);
    FUNC_4(VAR_8, &VAR_2->pool);


    VAR_2->res.status = 200;
    VAR_2->res.reason = "OK";
    FUNC_3(&VAR_2->pool, &VAR_2->res.headers, VAR_1, ((void*)0), FUNC_0("text/html; charset=utf-8"));


    if (!VAR_5) {
        FUNC_8(VAR_2, ((void*)0), 0);
        return 0;
    }


    FUNC_9(VAR_2, &VAR_6);
    FUNC_6(VAR_2, &VAR_9, 1, VAR_0);
    return 0;
}
