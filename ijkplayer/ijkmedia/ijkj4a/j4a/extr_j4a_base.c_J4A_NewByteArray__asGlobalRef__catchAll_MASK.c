
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int jsize ;
typedef int * jbyteArray ;
struct TYPE_7__ {int * (* NewGlobalRef ) (TYPE_1__**,int *) ;int * (* NewByteArray ) (TYPE_1__**,int ) ;} ;
typedef TYPE_1__* JNIEnv ;


 int FUNC_0 (TYPE_1__**,int **) ;
 scalar_t__ FUNC_1 (TYPE_1__**) ;
 int * FUNC_2 (TYPE_1__**,int ) ;
 int * FUNC_3 (TYPE_1__**,int *) ;

jbyteArray FUNC_4(JNIEnv *VAR_0, jsize VAR_1)
{
    jbyteArray VAR_2 = (*VAR_0)->NewByteArray(VAR_0, VAR_1);
    if (FUNC_1(VAR_0) || !VAR_2)
        return ((void*)0);

    jbyteArray VAR_3 = (*VAR_0)->NewGlobalRef(VAR_0, VAR_2);
    FUNC_0(VAR_0, &VAR_2);
    return VAR_3;
}
