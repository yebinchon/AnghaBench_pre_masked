
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * jobject ;
struct TYPE_4__ {int (* DeleteLocalRef ) (TYPE_1__**,int *) ;} ;
typedef TYPE_1__* JNIEnv ;


 int FUNC_0 (TYPE_1__**,int *) ;

void FUNC_1(JNIEnv *VAR_0, jobject *VAR_1)
{
    if (!VAR_1 || !*VAR_1)
        return;

    (*VAR_0)->DeleteLocalRef(VAR_0, *VAR_1);
    *VAR_1 = ((void*)0);
}
