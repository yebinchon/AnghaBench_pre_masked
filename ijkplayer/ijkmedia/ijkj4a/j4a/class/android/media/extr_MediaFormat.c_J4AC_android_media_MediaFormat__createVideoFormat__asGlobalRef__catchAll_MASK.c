
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jstring ;
typedef int * jobject ;
typedef int jint ;
typedef int JNIEnv ;


 int * FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *,int **) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;

jobject FUNC_4(JNIEnv *VAR_0, jstring VAR_1, jint VAR_2, jint VAR_3)
{
    jobject VAR_4 = ((void*)0);
    jobject VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
    if (FUNC_2(VAR_0) || !VAR_5) {
        VAR_4 = ((void*)0);
        goto fail;
    }

    VAR_4 = FUNC_3(VAR_0, VAR_5);
    if (!VAR_4) {
        VAR_4 = ((void*)0);
        goto fail;
    }

fail:
    FUNC_1(VAR_0, &VAR_5);
    return VAR_4;
}
