
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ jobject ;
struct TYPE_4__ {int mutex; } ;
typedef int JNIEnv ;
typedef TYPE_1__ IjkMediaPlayer ;


 int FUNC_0 (char*,void*) ;
 int FUNC_1 (int *,TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(JNIEnv *VAR_0, IjkMediaPlayer *VAR_1, jobject VAR_2)
{
    if (!VAR_1)
        return;

    FUNC_0("ijkmp_set_android_surface(surface=%p)", (void*)VAR_2);
    FUNC_2(&VAR_1->mutex);
    FUNC_1(VAR_0, VAR_1, VAR_2);
    FUNC_3(&VAR_1->mutex);
    FUNC_0("ijkmp_set_android_surface(surface=%p)=void", (void*)VAR_2);
}
