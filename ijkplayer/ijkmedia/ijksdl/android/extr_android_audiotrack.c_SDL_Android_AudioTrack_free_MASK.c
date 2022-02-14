
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ thiz; scalar_t__ byte_buffer_capacity; scalar_t__ byte_buffer; } ;
typedef TYPE_1__ SDL_Android_AudioTrack ;
typedef int JNIEnv ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(JNIEnv *VAR_0, SDL_Android_AudioTrack* VAR_1)
{
    FUNC_1(VAR_0, &VAR_1->byte_buffer);
    VAR_1->byte_buffer_capacity = 0;

    if (VAR_1->thiz) {
        FUNC_0(VAR_0, VAR_1->thiz);
        FUNC_1(VAR_0, &VAR_1->thiz);
    }

    FUNC_2(VAR_1);
}
