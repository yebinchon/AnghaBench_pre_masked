
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int jstring ;
typedef int jobject ;
typedef int jlong ;
struct TYPE_6__ {int method_putLong; } ;
struct TYPE_5__ {int (* CallVoidMethod ) (TYPE_1__**,int ,int ,int ,int ) ;} ;
typedef TYPE_1__* JNIEnv ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (TYPE_1__**,int ,int ,int ,int ) ;

void FUNC_1(JNIEnv *VAR_1, jobject VAR_2, jstring VAR_3, jlong VAR_4)
{
    (*VAR_1)->CallVoidMethod(VAR_1, VAR_2, VAR_0.method_putLong, VAR_3, VAR_4);
}
