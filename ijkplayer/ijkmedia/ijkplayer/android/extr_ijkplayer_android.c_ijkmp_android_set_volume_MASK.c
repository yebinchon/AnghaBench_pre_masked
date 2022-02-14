
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mutex; TYPE_1__* ffplayer; } ;
struct TYPE_4__ {scalar_t__ pipeline; } ;
typedef int JNIEnv ;
typedef TYPE_2__ IjkMediaPlayer ;


 int FUNC_0 (char*,float,float) ;
 int FUNC_1 (scalar_t__,float,float) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(JNIEnv *VAR_0, IjkMediaPlayer *VAR_1, float VAR_2, float VAR_3)
{
    if (!VAR_1)
        return;

    FUNC_0("ijkmp_android_set_volume(%f, %f)", VAR_2, VAR_3);
    FUNC_2(&VAR_1->mutex);

    if (VAR_1 && VAR_1->ffplayer && VAR_1->ffplayer->pipeline) {
        FUNC_1(VAR_1->ffplayer->pipeline, VAR_2, VAR_3);
    }

    FUNC_3(&VAR_1->mutex);
    FUNC_0("ijkmp_android_set_volume(%f, %f)=void", VAR_2, VAR_3);
}
