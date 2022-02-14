
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* opaque; } ;
struct TYPE_4__ {int jsurface; int surface_mutex; } ;
typedef int JNIEnv ;
typedef TYPE_1__ IJKFF_Pipeline_Opaque ;
typedef TYPE_2__ IJKFF_Pipeline ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int **) ;

__attribute__((used)) static void FUNC_4(IJKFF_Pipeline *VAR_1)
{
    IJKFF_Pipeline_Opaque *VAR_2 = VAR_1->opaque;
    JNIEnv *VAR_3 = ((void*)0);

    FUNC_1(&VAR_2->surface_mutex);

    if (VAR_0 != FUNC_3(&VAR_3)) {
        FUNC_0("amediacodec-pipeline:destroy: SetupThreadEnv failed\n");
        goto fail;
    }

    FUNC_2(VAR_3, &VAR_2->jsurface);
fail:
    return;
}
