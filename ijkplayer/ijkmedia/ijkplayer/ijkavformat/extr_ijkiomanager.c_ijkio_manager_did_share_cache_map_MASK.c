
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* ijkio_app_ctx; } ;
struct TYPE_4__ {int mutex; scalar_t__ shared; } ;
typedef TYPE_2__ IjkIOManagerContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(IjkIOManagerContext *VAR_1) {
    FUNC_0(((void*)0), VAR_0, "did share cache\n");
    if (!VAR_1 || !VAR_1->ijkio_app_ctx) {
        return;
    }
    FUNC_1(&VAR_1->ijkio_app_ctx->mutex);
    VAR_1->ijkio_app_ctx->shared = 0;
    FUNC_2(&VAR_1->ijkio_app_ctx->mutex);
}
