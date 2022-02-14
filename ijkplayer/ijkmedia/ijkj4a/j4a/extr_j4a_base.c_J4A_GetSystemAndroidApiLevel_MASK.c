
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JNIEnv ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int) ;

int FUNC_2(JNIEnv *VAR_0)
{
    static int VAR_1 = 0;
    if (VAR_1 > 0)
        return VAR_1;

    VAR_1 = FUNC_0(VAR_0);
    FUNC_1("API-Level: %d\n", VAR_1);
    return VAR_1;
}
