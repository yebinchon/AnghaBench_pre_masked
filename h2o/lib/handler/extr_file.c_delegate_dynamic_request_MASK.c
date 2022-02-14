
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;


struct TYPE_20__ {TYPE_7__* filereq; int hostconf; int pool; } ;
typedef TYPE_4__ h2o_req_t ;
struct TYPE_17__ {int size; TYPE_6__** entries; } ;
struct TYPE_16__ {TYPE_1__ handlers; } ;
struct TYPE_18__ {TYPE_11__ pathconf; } ;
struct TYPE_19__ {TYPE_2__ dynamic; } ;
struct TYPE_21__ {TYPE_3__ data; } ;
typedef TYPE_5__ h2o_mimemap_type_t ;
typedef void* h2o_iovec_t ;
struct TYPE_22__ {int (* on_req ) (TYPE_6__*,TYPE_4__*) ;} ;
typedef TYPE_6__ h2o_handler_t ;
struct TYPE_23__ {int local_path; void* path_info; void* script_name; } ;
typedef TYPE_7__ h2o_filereq_t ;


 int FUNC_0 (int) ;
 TYPE_7__* FUNC_1 (int *,TYPE_7__,int) ;
 int FUNC_2 (TYPE_4__*,int ,TYPE_11__*) ;
 int FUNC_3 (int *,char const*,size_t) ;
 int FUNC_4 (TYPE_6__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_5(h2o_req_t *VAR_0, h2o_iovec_t VAR_1, h2o_iovec_t VAR_2, const char *VAR_3,
                                    size_t VAR_4, h2o_mimemap_type_t *VAR_5)
{
    h2o_filereq_t *VAR_6;
    h2o_handler_t *VAR_7;

    FUNC_0(VAR_5->data.dynamic.pathconf.handlers.size == 1);

    VAR_6 = FUNC_1(&VAR_0->pool, *VAR_6, 1);
    VAR_6->script_name = VAR_1;
    VAR_6->path_info = VAR_2;
    VAR_6->local_path = FUNC_3(&VAR_0->pool, VAR_3, VAR_4);

    FUNC_2(VAR_0, VAR_0->hostconf, &VAR_5->data.dynamic.pathconf);
    VAR_0->filereq = VAR_6;

    VAR_7 = VAR_5->data.dynamic.pathconf.handlers.entries[0];
    return VAR_7->on_req(VAR_7, VAR_0);
}
