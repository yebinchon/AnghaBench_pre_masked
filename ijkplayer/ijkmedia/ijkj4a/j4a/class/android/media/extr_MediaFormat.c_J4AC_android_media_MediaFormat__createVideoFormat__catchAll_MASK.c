
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jstring ;
typedef int * jobject ;
typedef int jint ;
typedef int JNIEnv ;


 int * FUNC_0 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;

jobject FUNC_2(JNIEnv *VAR_0, jstring VAR_1, jint VAR_2, jint VAR_3)
{
    jobject VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
    if (FUNC_1(VAR_0) || !VAR_4) {
        return ((void*)0);
    }

    return VAR_4;
}
