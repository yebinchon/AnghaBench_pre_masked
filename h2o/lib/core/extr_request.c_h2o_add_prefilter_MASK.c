
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* prefilters; int pool; } ;
typedef TYPE_1__ h2o_req_t ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_2__ h2o_req_prefilter_t ;


 TYPE_2__* FUNC_0 (int *,size_t,size_t) ;

h2o_req_prefilter_t *FUNC_1(h2o_req_t *VAR_0, size_t VAR_1, size_t VAR_2)
{
    h2o_req_prefilter_t *VAR_3 = FUNC_0(&VAR_0->pool, VAR_1, VAR_2);
    VAR_3->next = VAR_0->prefilters;
    VAR_0->prefilters = VAR_3;
    return VAR_3;
}
