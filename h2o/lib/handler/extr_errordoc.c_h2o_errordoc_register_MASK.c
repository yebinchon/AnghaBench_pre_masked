
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t size; TYPE_2__* entries; } ;
struct TYPE_6__ {int on_setup_ostream; } ;
struct st_errordoc_filter_t {TYPE_3__ errordocs; TYPE_1__ super; } ;
typedef int h2o_pathconf_t ;
struct TYPE_9__ {int len; int base; } ;
struct TYPE_7__ {TYPE_4__ url; int status; } ;
typedef TYPE_2__ h2o_errordoc_t ;


 scalar_t__ FUNC_0 (int *,int) ;
 TYPE_4__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,TYPE_3__*,size_t) ;
 int VAR_0 ;

void FUNC_3(h2o_pathconf_t *VAR_1, h2o_errordoc_t *VAR_2, size_t VAR_3)
{
    struct st_errordoc_filter_t *VAR_4 = (void *)FUNC_0(VAR_1, sizeof(*VAR_4));
    size_t VAR_5;

    VAR_4->super.on_setup_ostream = VAR_0;
    FUNC_2(((void*)0), &VAR_4->errordocs, VAR_3);
    VAR_4->errordocs.size = VAR_3;
    for (VAR_5 = 0; VAR_5 != VAR_3; ++VAR_5) {
        const h2o_errordoc_t *VAR_6 = VAR_2 + VAR_5;
        h2o_errordoc_t *VAR_7 = VAR_4->errordocs.entries + VAR_5;
        VAR_7->status = VAR_6->status;
        VAR_7->url = FUNC_1(((void*)0), VAR_6->url.base, VAR_6->url.len);
    }
}
