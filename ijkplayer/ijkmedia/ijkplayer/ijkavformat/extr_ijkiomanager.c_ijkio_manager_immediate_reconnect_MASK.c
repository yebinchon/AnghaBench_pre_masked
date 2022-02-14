
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* ijkio_app_ctx; } ;
struct TYPE_4__ {int active_reconnect; } ;
typedef TYPE_2__ IjkIOManagerContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;

void FUNC_1(IjkIOManagerContext *VAR_1) {
    FUNC_0(((void*)0), VAR_0, "ijkio manager immediate reconnect\n");
    if (!VAR_1 || !VAR_1->ijkio_app_ctx) {
        return;
    }
    VAR_1->ijkio_app_ctx->active_reconnect = 1;
}
