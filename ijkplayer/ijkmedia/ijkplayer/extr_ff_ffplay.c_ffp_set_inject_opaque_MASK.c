
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {int func_on_app_event; } ;
struct TYPE_7__ {TYPE_4__* app_ctx; void* inject_opaque; } ;
typedef TYPE_1__ FFPlayer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__**) ;
 int FUNC_1 (TYPE_4__**,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,char*,int ) ;

void *FUNC_3(FFPlayer *VAR_2, void *VAR_3)
{
    if (!VAR_2)
        return ((void*)0);
    void *VAR_4 = VAR_2->inject_opaque;
    VAR_2->inject_opaque = VAR_3;

    FUNC_0(&VAR_2->app_ctx);
    FUNC_1(&VAR_2->app_ctx, VAR_2);
    FUNC_2(VAR_2, VAR_0, "ijkapplication", (int64_t)(intptr_t)VAR_2->app_ctx);

    VAR_2->app_ctx->func_on_app_event = VAR_1;
    return VAR_4;
}
