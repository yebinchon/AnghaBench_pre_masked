
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* prefilters; } ;
typedef TYPE_1__ h2o_req_t ;
struct TYPE_5__ {scalar_t__ on_setup_ostream; struct TYPE_5__* next; } ;
typedef TYPE_2__ h2o_req_prefilter_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(h2o_req_t *VAR_1)
{
    h2o_req_prefilter_t *VAR_2;
    for (VAR_2 = VAR_1->prefilters; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
        if (VAR_2->on_setup_ostream == VAR_0)
            return 1;
    return 0;
}
