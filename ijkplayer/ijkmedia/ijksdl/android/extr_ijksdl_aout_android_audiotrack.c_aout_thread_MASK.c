
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SDL_Aout ;
typedef int JNIEnv ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int **) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(void *VAR_1)
{
    SDL_Aout *VAR_2 = VAR_1;

    JNIEnv *VAR_3 = ((void*)0);

    if (VAR_0 != FUNC_1(&VAR_3)) {
        FUNC_0("aout_thread: SDL_AndroidJni_SetupEnv: failed");
        return -1;
    }

    return FUNC_2(VAR_3, VAR_2);
}
