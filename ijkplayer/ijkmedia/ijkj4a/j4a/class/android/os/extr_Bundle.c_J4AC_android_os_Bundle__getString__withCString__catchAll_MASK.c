
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int * jstring ;
typedef int jobject ;
struct TYPE_7__ {int * (* NewStringUTF ) (TYPE_1__**,char const*) ;} ;
typedef TYPE_1__* JNIEnv ;


 int * FUNC_0 (TYPE_1__**,int ,int *) ;
 int FUNC_1 (TYPE_1__**,int **) ;
 scalar_t__ FUNC_2 (TYPE_1__**) ;
 int * FUNC_3 (TYPE_1__**,char const*) ;

jstring FUNC_4(JNIEnv *VAR_0, jobject VAR_1, const char *VAR_2)
{
    jstring VAR_3 = ((void*)0);
    jstring VAR_4 = ((void*)0);

    VAR_4 = (*VAR_0)->NewStringUTF(VAR_0, VAR_2);
    if (FUNC_2(VAR_0) || !VAR_4)
        goto fail;

    VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_4);
    if (FUNC_2(VAR_0) || !VAR_3) {
        VAR_3 = ((void*)0);
        goto fail;
    }

fail:
    FUNC_1(VAR_0, &VAR_4);
    return VAR_3;
}
