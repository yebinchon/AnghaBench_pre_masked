
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int url_hash ;
struct TYPE_11__ {char const* base; size_t len; } ;
struct TYPE_12__ {TYPE_3__ authority; TYPE_2__* scheme; } ;
struct TYPE_13__ {TYPE_4__ input; } ;
typedef TYPE_5__ h2o_req_t ;
struct TYPE_14__ {int * push_memo; } ;
typedef TYPE_6__ h2o_http2_conn_t ;
typedef int h2o_cache_hashcode_t ;
struct TYPE_9__ {char const* base; size_t len; } ;
struct TYPE_10__ {TYPE_1__ name; } ;


 int FUNC_0 (char const*,size_t) ;
 int * FUNC_1 (int ,int,int,int *) ;
 int FUNC_2 (int *,int ,int ,int,int ) ;
 int FUNC_3 (int*,int) ;

__attribute__((used)) static int FUNC_4(h2o_http2_conn_t *VAR_0, h2o_req_t *VAR_1, const char *VAR_2, size_t VAR_3)
{

    if (VAR_0->push_memo == ((void*)0))
        VAR_0->push_memo = FUNC_1(0, 1024, 1, ((void*)0));


    h2o_cache_hashcode_t VAR_4 = FUNC_0(VAR_1->input.scheme->name.base, VAR_1->input.scheme->name.len) ^
                                    FUNC_0(VAR_1->input.authority.base, VAR_1->input.authority.len) ^
                                    FUNC_0(VAR_2, VAR_3);
    return FUNC_2(VAR_0->push_memo, 0, FUNC_3(&VAR_4, sizeof(VAR_4)), VAR_4, FUNC_3(((void*)0), 0));
}
