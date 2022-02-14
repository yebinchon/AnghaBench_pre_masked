
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int jobject ;
typedef int JNIEnv ;


 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,size_t) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,void*,size_t) ;

int FUNC_5(JNIEnv *VAR_0, jobject VAR_1, void* VAR_2, size_t VAR_3)
{
    jobject VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_3);
    if (FUNC_3(VAR_0) || !VAR_4)
        return -1;
    FUNC_2(VAR_0, &VAR_4);

    uint8_t *VAR_5 = FUNC_0(VAR_0, VAR_1);
    if (!VAR_5)
        return -1;

    FUNC_4(VAR_5, VAR_2, VAR_3);
    return 0;
}
