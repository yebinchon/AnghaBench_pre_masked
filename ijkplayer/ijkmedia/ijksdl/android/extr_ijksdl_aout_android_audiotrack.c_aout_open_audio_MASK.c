
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SDL_AudioSpec ;
typedef int SDL_Aout ;
typedef int JNIEnv ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int **) ;
 int FUNC_2 (int *,int *,int const*,int *) ;

__attribute__((used)) static int FUNC_3(SDL_Aout *VAR_1, const SDL_AudioSpec *VAR_2, SDL_AudioSpec *VAR_3)
{

    JNIEnv *VAR_4 = ((void*)0);
    if (VAR_0 != FUNC_1(&VAR_4)) {
        FUNC_0("aout_open_audio: AttachCurrentThread: failed");
        return -1;
    }

    return FUNC_2(VAR_4, VAR_1, VAR_2, VAR_3);
}
