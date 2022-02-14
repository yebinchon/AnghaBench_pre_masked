
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int jobject ;
typedef int jint ;
struct TYPE_6__ {int field_offset; } ;
struct TYPE_5__ {int (* GetIntField ) (TYPE_1__**,int ,int ) ;} ;
typedef TYPE_1__* JNIEnv ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (TYPE_1__**,int ,int ) ;

jint FUNC_1(JNIEnv *VAR_1, jobject VAR_2)
{
    return (*VAR_1)->GetIntField(VAR_1, VAR_2, VAR_0.field_offset);
}
