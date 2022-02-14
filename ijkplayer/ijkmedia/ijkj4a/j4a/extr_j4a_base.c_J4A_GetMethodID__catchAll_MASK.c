
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int * jmethodID ;
typedef int jclass ;
struct TYPE_5__ {int * (* GetMethodID ) (TYPE_1__**,int ,char const*,char const*) ;} ;
typedef TYPE_1__* JNIEnv ;


 scalar_t__ FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (char const*,char const*) ;
 int * FUNC_2 (TYPE_1__**,int ,char const*,char const*) ;

jmethodID FUNC_3(JNIEnv *VAR_0, jclass VAR_1, const char *VAR_2, const char *VAR_3)
{
    jmethodID VAR_4 = (*VAR_0)->GetMethodID(VAR_0, VAR_1, VAR_2, VAR_3);
    if (FUNC_0(VAR_0) || !VAR_4) {
        FUNC_1(VAR_2, VAR_3);
        VAR_4 = ((void*)0);
        goto fail;
    }

fail:
    return VAR_4;
}
