
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int clazz; } ;
struct TYPE_6__ {int (* RegisterNatives ) (TYPE_1__**,int ,int ,int ) ;} ;
typedef TYPE_1__* JNIEnv ;


 int FUNC_0 (TYPE_1__**,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__**,int ,int ,int ) ;

int FUNC_3(JNIEnv *VAR_3)
{
    int VAR_4 = 0;

    FUNC_0(VAR_3, VAR_1.clazz, VAR_0);
    (*VAR_3)->RegisterNatives(VAR_3, VAR_1.clazz, VAR_2, FUNC_1(VAR_2));

    return VAR_4;
}
