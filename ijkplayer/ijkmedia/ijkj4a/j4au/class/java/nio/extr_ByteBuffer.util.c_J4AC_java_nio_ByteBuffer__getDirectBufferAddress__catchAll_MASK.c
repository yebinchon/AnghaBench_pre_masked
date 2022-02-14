
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int jobject ;
struct TYPE_5__ {void* (* GetDirectBufferAddress ) (TYPE_1__**,int ) ;} ;
typedef TYPE_1__* JNIEnv ;


 scalar_t__ FUNC_0 (TYPE_1__**) ;
 void* FUNC_1 (TYPE_1__**,int ) ;

void *FUNC_2(JNIEnv *VAR_0, jobject VAR_1)
{
    void *VAR_2 = (*VAR_0)->GetDirectBufferAddress(VAR_0, VAR_1);
    if (FUNC_0(VAR_0) || !VAR_2)
        return ((void*)0);

    return VAR_2;
}
