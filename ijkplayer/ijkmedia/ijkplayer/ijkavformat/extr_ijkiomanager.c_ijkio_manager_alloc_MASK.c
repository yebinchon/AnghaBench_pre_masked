
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int fd; void* cache_info_map; int threadpool_ctx; int mutex; } ;
struct TYPE_4__ {TYPE_3__* ijkio_app_ctx; void* ijk_ctx_map; void* opaque; } ;
typedef TYPE_1__ IjkIOManagerContext ;


 scalar_t__ FUNC_0 (int,int) ;
 void* FUNC_1 () ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (TYPE_3__**,void*) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(IjkIOManagerContext **VAR_0, void *VAR_1)
{
    IjkIOManagerContext *VAR_2 = ((void*)0);

    VAR_2 = (IjkIOManagerContext *)FUNC_0(1, sizeof(IjkIOManagerContext));
    if (!VAR_2)
        return -1;

    VAR_2->opaque = VAR_1;
    VAR_2->ijk_ctx_map = FUNC_1();

    FUNC_3(&VAR_2->ijkio_app_ctx, VAR_1);

    FUNC_4(&VAR_2->ijkio_app_ctx->mutex, ((void*)0));
    VAR_2->ijkio_app_ctx->threadpool_ctx = FUNC_2(5, 5, 0);
    VAR_2->ijkio_app_ctx->cache_info_map = FUNC_1();
    VAR_2->ijkio_app_ctx->fd = -1;
    *VAR_0 = VAR_2;
    return 0;
}
