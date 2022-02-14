
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int jstring ;
struct TYPE_4__ {int (* ReleaseStringUTFChars ) (TYPE_1__**,int ,char const*) ;} ;
typedef TYPE_1__* JNIEnv ;


 int FUNC_0 (TYPE_1__**,int ,char const*) ;

void FUNC_1(JNIEnv *VAR_0, jstring VAR_1, const char *VAR_2)
{
    if (!VAR_1 || !VAR_2)
        return;
    (*VAR_0)->ReleaseStringUTFChars(VAR_0, VAR_1, VAR_2);
}
