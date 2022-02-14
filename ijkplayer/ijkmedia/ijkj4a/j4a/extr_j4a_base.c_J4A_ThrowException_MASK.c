
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * jclass ;
typedef int JNIEnv ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int **) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 int * FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *,int *,char const*) ;

int FUNC_6(JNIEnv* VAR_0, const char* VAR_1, const char* VAR_2)
{
    int VAR_3 = -1;

    if (FUNC_2(VAR_0)) {
        FUNC_0("pending exception throwed.\n");
    }

    jclass VAR_4 = FUNC_4(VAR_0, VAR_1);
    if (VAR_4 == ((void*)0)) {
        FUNC_3();
        VAR_3 = -1;
        goto fail;
    }

    VAR_3 = FUNC_5(VAR_0, VAR_4, VAR_2);
    if (VAR_3) {
        FUNC_3();
        goto fail;
    }

    VAR_3 = 0;
fail:
    FUNC_1(VAR_0, &VAR_4);
    return VAR_3;
}
