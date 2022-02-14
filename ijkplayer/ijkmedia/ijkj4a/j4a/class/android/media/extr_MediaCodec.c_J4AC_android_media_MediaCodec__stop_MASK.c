
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int jobject ;
struct TYPE_6__ {int method_stop; } ;
struct TYPE_5__ {int (* CallVoidMethod ) (TYPE_1__**,int ,int ) ;} ;
typedef TYPE_1__* JNIEnv ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (TYPE_1__**,int ,int ) ;

void FUNC_1(JNIEnv *VAR_1, jobject VAR_2)
{
    (*VAR_1)->CallVoidMethod(VAR_1, VAR_2, VAR_0.method_stop);
}
