
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* ijkio_app_ctx; } ;
struct TYPE_4__ {void* func_ijkio_on_app_event; } ;
typedef TYPE_2__ IjkIOManagerContext ;



int FUNC_0(IjkIOManagerContext *VAR_0, void *VAR_1) {
    if (!VAR_0)
        return -1;

    VAR_0->ijkio_app_ctx->func_ijkio_on_app_event = VAR_1;

    return 0;
}
