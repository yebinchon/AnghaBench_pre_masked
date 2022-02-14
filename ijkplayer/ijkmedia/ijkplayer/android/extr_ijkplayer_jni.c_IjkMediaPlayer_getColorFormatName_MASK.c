
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * jstring ;
typedef int jint ;
typedef int jclass ;
struct TYPE_4__ {int * (* NewStringUTF ) (TYPE_1__**,char const*) ;} ;
typedef TYPE_1__* JNIEnv ;


 char* FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_1__**,char const*) ;

__attribute__((used)) static jstring
FUNC_2(JNIEnv *VAR_0, jclass VAR_1, jint VAR_2)
{
    const char *VAR_3 = FUNC_0(VAR_2);
    if (!VAR_3)
        return ((void*)0) ;

    return (*VAR_0)->NewStringUTF(VAR_0, VAR_3);
}
