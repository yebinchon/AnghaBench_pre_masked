
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int * jstring ;
typedef scalar_t__ jsize ;
typedef int jclass ;
typedef int jbyteArray ;
typedef int jbyte ;
struct TYPE_7__ {scalar_t__ (* GetArrayLength ) (TYPE_1__**,int ) ;int (* ReleaseByteArrayElements ) (TYPE_1__**,int ,int *,int ) ;int * (* NewStringUTF ) (TYPE_1__**,char*) ;int * (* GetByteArrayElements ) (TYPE_1__**,int ,int *) ;} ;
typedef TYPE_1__* JNIEnv ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int const*,scalar_t__) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_1__**,int ) ;
 int * FUNC_5 (TYPE_1__**,int ,int *) ;
 int * FUNC_6 (TYPE_1__**,char*) ;
 int FUNC_7 (TYPE_1__**,int ,int *,int ) ;

__attribute__((used)) static jstring
FUNC_8(JNIEnv *VAR_1, jclass VAR_2, jbyteArray VAR_3)
{
    jstring VAR_4 = ((void*)0);
    char* VAR_5 = 0;
    int VAR_6 = 0;
    jbyte* VAR_7 = 0;
    jsize VAR_8 = (*VAR_1)->GetArrayLength(VAR_1, VAR_3);
    if (VAR_8 <= 0)
        goto fail;

    VAR_7 = (*VAR_1)->GetByteArrayElements(VAR_1, VAR_3, ((void*)0));
    if (!VAR_7)
        goto fail;

    VAR_6 = FUNC_0(VAR_8);
    VAR_5 = FUNC_3(VAR_6 + 1);
    if (!VAR_5)
        goto fail;
    VAR_5[VAR_6] = 0;

    if (!FUNC_1(VAR_5, VAR_6, (const uint8_t *)VAR_7, VAR_8))
        goto fail;

    VAR_4 = (*VAR_1)->NewStringUTF(VAR_1, VAR_5);
fail:
    if (VAR_7) {
        (*VAR_1)->ReleaseByteArrayElements(VAR_1, VAR_3, VAR_7, VAR_0);
        VAR_7 = ((void*)0);
    }
    if (VAR_5) {
        FUNC_2(VAR_5);
        VAR_5 = ((void*)0);
    }
    return VAR_4;
}
