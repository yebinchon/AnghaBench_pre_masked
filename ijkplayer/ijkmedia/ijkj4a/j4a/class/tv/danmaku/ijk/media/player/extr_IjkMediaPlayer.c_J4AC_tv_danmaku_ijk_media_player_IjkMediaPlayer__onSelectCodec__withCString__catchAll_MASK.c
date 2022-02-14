
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int * jstring ;
typedef int jobject ;
typedef int jint ;
struct TYPE_7__ {int * (* NewStringUTF ) (TYPE_1__**,char const*) ;} ;
typedef TYPE_1__* JNIEnv ;


 int * FUNC_0 (TYPE_1__**,int ,int *,int ,int ) ;
 int FUNC_1 (TYPE_1__**,int **) ;
 scalar_t__ FUNC_2 (TYPE_1__**) ;
 int * FUNC_3 (TYPE_1__**,char const*) ;

jstring FUNC_4(JNIEnv *VAR_0, jobject VAR_1, const char *VAR_2, jint VAR_3, jint VAR_4)
{
    jstring VAR_5 = ((void*)0);
    jstring VAR_6 = ((void*)0);

    VAR_6 = (*VAR_0)->NewStringUTF(VAR_0, VAR_2);
    if (FUNC_2(VAR_0) || !VAR_6)
        goto fail;

    VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_6, VAR_3, VAR_4);
    if (FUNC_2(VAR_0) || !VAR_5) {
        VAR_5 = ((void*)0);
        goto fail;
    }

fail:
    FUNC_1(VAR_0, &VAR_6);
    return VAR_5;
}
