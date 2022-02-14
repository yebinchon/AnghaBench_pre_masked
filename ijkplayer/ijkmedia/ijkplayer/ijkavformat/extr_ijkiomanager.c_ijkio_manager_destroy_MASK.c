
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ fd; int mutex; int cache_file_path; scalar_t__ threadpool_ctx; int * cache_info_map; } ;
struct TYPE_5__ {int * ijk_ctx_map; TYPE_3__* ijkio_app_ctx; int cache_map_path; scalar_t__ auto_save_map; } ;
typedef TYPE_1__ IjkIOManagerContext ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (TYPE_3__**) ;
 int VAR_1 ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_2 ;

void FUNC_10(IjkIOManagerContext *VAR_3)
{
    FILE *VAR_4 = ((void*)0);

    if (VAR_3->ijkio_app_ctx) {
        if (VAR_3->auto_save_map) {
            VAR_4 = FUNC_2(VAR_3->cache_map_path, "w");
            if (VAR_4) {
                FUNC_5(VAR_3->ijkio_app_ctx->cache_info_map, VAR_4, VAR_1);
                FUNC_1(VAR_4);
            }
        }

        FUNC_5(VAR_3->ijkio_app_ctx->cache_info_map, ((void*)0), VAR_2);
        FUNC_4(VAR_3->ijkio_app_ctx->cache_info_map);
        VAR_3->ijkio_app_ctx->cache_info_map = ((void*)0);

        if (VAR_3->ijkio_app_ctx->threadpool_ctx) {
            FUNC_6(VAR_3->ijkio_app_ctx->threadpool_ctx, VAR_0);
        }

        if (0 != FUNC_9(VAR_3->ijkio_app_ctx->cache_file_path)) {
            if (VAR_3->ijkio_app_ctx->fd >= 0) {
                FUNC_0(VAR_3->ijkio_app_ctx->fd);
            }
        }
        FUNC_8(&VAR_3->ijkio_app_ctx->mutex);

        FUNC_7(&VAR_3->ijkio_app_ctx);
    }

    FUNC_4(VAR_3->ijk_ctx_map);
    VAR_3->ijk_ctx_map = ((void*)0);

    FUNC_3(VAR_3);
}
