
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int jint ;
struct TYPE_6__ {int field_SDK_INT; int id; } ;
struct TYPE_5__ {int (* SetStaticIntField ) (TYPE_1__**,int ,int ,int ) ;} ;
typedef TYPE_1__* JNIEnv ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (TYPE_1__**,int ,int ,int ) ;

void FUNC_1(JNIEnv *VAR_1, jint VAR_2)
{
    (*VAR_1)->SetStaticIntField(VAR_1, VAR_0.id, VAR_0.field_SDK_INT, VAR_2);
}
