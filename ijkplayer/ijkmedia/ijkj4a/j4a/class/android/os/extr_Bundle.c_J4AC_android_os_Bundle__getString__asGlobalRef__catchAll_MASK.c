
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * jstring ;
typedef int jobject ;
typedef int JNIEnv ;


 int * FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int **) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;

jstring FUNC_4(JNIEnv *VAR_0, jobject VAR_1, jstring VAR_2)
{
    jstring VAR_3 = ((void*)0);
    jstring VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
    if (FUNC_2(VAR_0) || !VAR_4) {
        VAR_3 = ((void*)0);
        goto fail;
    }

    VAR_3 = FUNC_3(VAR_0, VAR_4);
    if (!VAR_3) {
        VAR_3 = ((void*)0);
        goto fail;
    }

fail:
    FUNC_1(VAR_0, &VAR_4);
    return VAR_3;
}
