
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {scalar_t__ ijkio_manager_ctx; void* ijkio_inject_opaque; } ;
typedef TYPE_1__ FFPlayer ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__*,TYPE_1__*) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__,int ) ;

void *FUNC_4(FFPlayer *VAR_2, void *VAR_3)
{
    if (!VAR_2)
        return ((void*)0);
    void *VAR_4 = VAR_2->ijkio_inject_opaque;
    VAR_2->ijkio_inject_opaque = VAR_3;

    FUNC_2(&VAR_2->ijkio_manager_ctx);
    FUNC_1(&VAR_2->ijkio_manager_ctx, VAR_2);
    FUNC_3(VAR_2->ijkio_manager_ctx, VAR_1);
    FUNC_0(VAR_2, VAR_0, "ijkiomanager", (int64_t)(intptr_t)VAR_2->ijkio_manager_ctx);

    return VAR_4;
}
