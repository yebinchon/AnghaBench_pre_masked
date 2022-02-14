
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int jstring ;
typedef int jobject ;
typedef int jint ;
struct TYPE_8__ {char* (* GetStringUTFChars ) (TYPE_1__**,int ,int *) ;} ;
typedef TYPE_1__* JNIEnv ;


 int FUNC_0 (TYPE_1__**,int ,char const*,int ,int ) ;
 int FUNC_1 (TYPE_1__**,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__**) ;
 int FUNC_3 (TYPE_1__**,int ,char const**) ;
 int FUNC_4 (char*,char const*,int) ;
 char* FUNC_5 (TYPE_1__**,int ,int *) ;

const char *FUNC_6(JNIEnv *VAR_0, jobject VAR_1, const char *VAR_2, jint VAR_3, jint VAR_4, char *VAR_5, int VAR_6)
{
    const char *VAR_7 = ((void*)0);
    const char *VAR_8 = ((void*)0);
    jstring VAR_9 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
    if (FUNC_2(VAR_0) || !VAR_9) {
        goto fail;
    }

    VAR_8 = (*VAR_0)->GetStringUTFChars(VAR_0, VAR_9, ((void*)0) );
    if (FUNC_2(VAR_0) || !VAR_8) {
        goto fail;
    }

    FUNC_4(VAR_5, VAR_8, VAR_6);
    VAR_7 = VAR_5;

fail:
    FUNC_3(VAR_0, VAR_9, &VAR_8);
    FUNC_1(VAR_0, &VAR_9);
    return VAR_7;
}
