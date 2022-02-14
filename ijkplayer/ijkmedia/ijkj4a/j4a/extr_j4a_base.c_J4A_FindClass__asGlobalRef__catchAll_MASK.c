
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * jclass ;
typedef int JNIEnv ;


 int FUNC_0 (int *,int **) ;
 int FUNC_1 (char const*) ;
 int * FUNC_2 (int *,char const*) ;
 int * FUNC_3 (int *,int *) ;

jclass FUNC_4(JNIEnv *VAR_0, const char *VAR_1)
{
    jclass VAR_2 = ((void*)0);
    jclass VAR_3 = FUNC_2(VAR_0, VAR_1);
    if (!VAR_3) {
        FUNC_1(VAR_1);
        goto fail;
    }

    VAR_2 = FUNC_3(VAR_0, VAR_3);
    if (!VAR_2) {
        FUNC_1(VAR_1);
        goto fail;
    }

fail:
    FUNC_0(VAR_0, &VAR_3);
    return VAR_2;
}
