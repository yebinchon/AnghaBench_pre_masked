
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int jobject ;
typedef int jclass ;
struct TYPE_5__ {int (* NewGlobalRef ) (TYPE_1__**,int ) ;} ;
typedef TYPE_1__* JNIEnv ;


 scalar_t__ FUNC_0 (TYPE_1__**) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__**,int ) ;

jclass FUNC_3(JNIEnv *VAR_0, jobject VAR_1)
{
    jclass VAR_2 = (*VAR_0)->NewGlobalRef(VAR_0, VAR_1);
    if (FUNC_0(VAR_0) || !(VAR_2)) {
        FUNC_1();
        goto fail;
    }

fail:
    return VAR_2;
}
