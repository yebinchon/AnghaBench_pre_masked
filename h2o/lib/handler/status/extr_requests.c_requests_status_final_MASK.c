
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {struct st_requests_status_ctx_t* base; } ;
struct st_requests_status_ctx_t {int mutex; TYPE_6__ req_data; int * logconf; } ;
struct TYPE_7__ {int pool; } ;
typedef TYPE_1__ h2o_req_t ;
struct TYPE_8__ {int * member_0; } ;
typedef TYPE_2__ h2o_iovec_t ;
typedef int h2o_globalconf_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct st_requests_status_ctx_t*) ;
 TYPE_2__ FUNC_2 (int *,int ,TYPE_6__,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static h2o_iovec_t FUNC_6(void *VAR_0, h2o_globalconf_t *VAR_1, h2o_req_t *VAR_2)
{
    h2o_iovec_t VAR_3 = {((void*)0)};
    struct st_requests_status_ctx_t *VAR_4 = VAR_0;

    if (VAR_4->logconf != ((void*)0)) {
        VAR_3 = FUNC_2(&VAR_2->pool, FUNC_3(FUNC_0(",\n \"requests\": [")), VAR_4->req_data,
                         FUNC_3(FUNC_0("\n ]")));
        FUNC_4(VAR_4->logconf);
    }
    FUNC_1(VAR_4->req_data.base);
    FUNC_5(&VAR_4->mutex);

    FUNC_1(VAR_4);
    return VAR_3;
}
