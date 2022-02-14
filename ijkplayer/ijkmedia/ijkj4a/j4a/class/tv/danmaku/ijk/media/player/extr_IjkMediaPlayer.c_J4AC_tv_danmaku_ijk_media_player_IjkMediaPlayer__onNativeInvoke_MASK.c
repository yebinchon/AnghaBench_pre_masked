
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int jobject ;
typedef int jint ;
typedef int jboolean ;
struct TYPE_6__ {int method_onNativeInvoke; int id; } ;
struct TYPE_5__ {int (* CallStaticBooleanMethod ) (TYPE_1__**,int ,int ,int ,int ,int ) ;} ;
typedef TYPE_1__* JNIEnv ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (TYPE_1__**,int ,int ,int ,int ,int ) ;

jboolean FUNC_1(JNIEnv *VAR_1, jobject VAR_2, jint VAR_3, jobject VAR_4)
{
    return (*VAR_1)->CallStaticBooleanMethod(VAR_1, VAR_0.id, VAR_0.method_onNativeInvoke, VAR_2, VAR_3, VAR_4);
}
