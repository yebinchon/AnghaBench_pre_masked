
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* ijkio_app_ctx; int cache_map_path; } ;
struct TYPE_4__ {int shared; scalar_t__ fd; int mutex; int cache_info_map; } ;
typedef TYPE_2__ IjkIOManagerContext ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int *,int ) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

void FUNC_8(IjkIOManagerContext *VAR_2) {
    FUNC_0(((void*)0), VAR_0, "will share cache\n");
    if (!VAR_2 || !VAR_2->ijkio_app_ctx || !FUNC_7(VAR_2->cache_map_path)) {
        return;
    }

    FUNC_5(&VAR_2->ijkio_app_ctx->mutex);
    FILE *VAR_3 = FUNC_2(VAR_2->cache_map_path, "w");
    if (!VAR_3) {
        FUNC_6(&VAR_2->ijkio_app_ctx->mutex);
        return;
    }
    VAR_2->ijkio_app_ctx->shared = 1;
    FUNC_4(VAR_2->ijkio_app_ctx->cache_info_map, VAR_3, VAR_1);
    FUNC_1(VAR_3);
    if (VAR_2->ijkio_app_ctx->fd >= 0) {
        FUNC_3(VAR_2->ijkio_app_ctx->fd);
    }
    FUNC_6(&VAR_2->ijkio_app_ctx->mutex);
}
