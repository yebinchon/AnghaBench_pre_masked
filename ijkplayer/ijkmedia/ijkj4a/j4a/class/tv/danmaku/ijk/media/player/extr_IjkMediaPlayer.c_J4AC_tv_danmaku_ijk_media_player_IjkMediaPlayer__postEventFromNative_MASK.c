
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int jobject ;
typedef int jint ;
struct TYPE_6__ {int method_postEventFromNative; int id; } ;
struct TYPE_5__ {int (* CallStaticVoidMethod ) (TYPE_1__**,int ,int ,int ,int ,int ,int ,int ) ;} ;
typedef TYPE_1__* JNIEnv ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (TYPE_1__**,int ,int ,int ,int ,int ,int ,int ) ;

void FUNC_1(JNIEnv *VAR_1, jobject VAR_2, jint VAR_3, jint VAR_4, jint VAR_5, jobject VAR_6)
{
    (*VAR_1)->CallStaticVoidMethod(VAR_1, VAR_0.id, VAR_0.method_postEventFromNative, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
