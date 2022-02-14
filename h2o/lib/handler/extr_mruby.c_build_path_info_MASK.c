
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mrb_value ;
typedef int mrb_state ;
struct TYPE_5__ {size_t len; scalar_t__ base; } ;
struct TYPE_6__ {size_t len; } ;
struct TYPE_7__ {size_t query_at; int* norm_indexes; TYPE_1__ path; TYPE_2__ path_normalized; } ;
typedef TYPE_3__ h2o_req_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__,size_t) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static mrb_value FUNC_3(mrb_state *VAR_1, h2o_req_t *VAR_2, size_t VAR_3)
{
    if (VAR_2->path_normalized.len == VAR_3)
        return FUNC_2(VAR_1, "");

    FUNC_0(VAR_2->path_normalized.len > VAR_3);

    size_t VAR_4, VAR_5 = VAR_2->query_at != VAR_0 ? VAR_2->query_at : VAR_2->path.len;

    if (VAR_2->norm_indexes == ((void*)0)) {
        VAR_4 = VAR_3;
    } else if (VAR_2->norm_indexes[0] == 0 && VAR_3 == 0) {

        VAR_4 = 0;
    } else {
        VAR_4 = VAR_2->norm_indexes[VAR_3] - 1;
    }

    return FUNC_1(VAR_1, VAR_2->path.base + VAR_4, VAR_5 - VAR_4);
}
