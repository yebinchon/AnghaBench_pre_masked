
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * jstring ;
typedef int jobject ;
typedef int JNIEnv ;


 int * FUNC_0 (int *,int ,int *) ;
 scalar_t__ FUNC_1 (int *) ;

jstring FUNC_2(JNIEnv *VAR_0, jobject VAR_1, jstring VAR_2)
{
    jstring VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
    if (FUNC_1(VAR_0) || !VAR_3) {
        return ((void*)0);
    }

    return VAR_3;
}
