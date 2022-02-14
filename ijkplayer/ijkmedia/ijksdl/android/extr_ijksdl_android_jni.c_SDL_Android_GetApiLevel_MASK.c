
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int JNIEnv ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int **) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ,int) ;

int FUNC_7()
{
    static int VAR_2 = 0;
    if (VAR_2 > 0)
        return VAR_2;

    JNIEnv *VAR_3 = ((void*)0);
    if (VAR_0 != FUNC_3(&VAR_3)) {
        FUNC_0("SDL_Android_GetApiLevel: SetupThreadEnv failed");
        return 0;
    }

    VAR_2 = FUNC_2(VAR_3);
    FUNC_1("API-Level: %d\n", VAR_2);
    return VAR_2;







}
