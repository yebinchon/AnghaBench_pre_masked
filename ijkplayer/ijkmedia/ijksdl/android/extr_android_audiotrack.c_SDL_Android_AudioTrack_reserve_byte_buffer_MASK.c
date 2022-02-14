
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int byte_buffer_capacity; int byte_buffer; int min_buffer_size; } ;
typedef TYPE_1__ SDL_Android_AudioTrack ;
typedef int JNIEnv ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int) ;

int FUNC_3(JNIEnv *VAR_0, SDL_Android_AudioTrack *VAR_1, int VAR_2)
{
    if (VAR_1->byte_buffer && VAR_2 <= VAR_1->byte_buffer_capacity)
        return VAR_2;

    FUNC_1(VAR_0, &VAR_1->byte_buffer);
    VAR_1->byte_buffer_capacity = 0;

    int VAR_3 = FUNC_0(VAR_2, VAR_1->min_buffer_size);
    VAR_1->byte_buffer = FUNC_2(VAR_0, VAR_3);
    if (!VAR_1->byte_buffer)
        return -1;

    VAR_1->byte_buffer_capacity = VAR_3;
    return VAR_3;
}
