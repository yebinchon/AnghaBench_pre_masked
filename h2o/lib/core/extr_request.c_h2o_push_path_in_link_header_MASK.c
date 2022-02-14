
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int authority; int scheme; } ;
struct TYPE_10__ {TYPE_2__* hostconf; int authority; scalar_t__ res_is_delegated; int * scheme; TYPE_3__ input; int path_normalized; int pool; } ;
typedef TYPE_4__ h2o_req_t ;
typedef int h2o_iovec_t ;
struct TYPE_7__ {int allow_cross_origin_push; } ;
struct TYPE_8__ {TYPE_1__ http2; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,size_t,int ,int ,int ,int *,int *,int ,TYPE_4__*,int *,int ) ;
 int FUNC_1 (char const*,size_t) ;

h2o_iovec_t FUNC_2(h2o_req_t *VAR_1, const char *VAR_2, size_t VAR_3)
{
    h2o_iovec_t VAR_4 = FUNC_1(VAR_2, VAR_3);

    FUNC_0(&VAR_1->pool, VAR_2, VAR_3, VAR_1->path_normalized, VAR_1->input.scheme,
                                           VAR_1->input.authority, VAR_1->res_is_delegated ? VAR_1->scheme : ((void*)0),
                                           VAR_1->res_is_delegated ? &VAR_1->authority : ((void*)0), VAR_0, VAR_1, &VAR_4,
                                           VAR_1->hostconf->http2.allow_cross_origin_push);

    return VAR_4;
}
