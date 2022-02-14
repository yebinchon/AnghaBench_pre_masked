
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int * jthrowable ;
typedef int * jclass ;
struct TYPE_10__ {scalar_t__ (* ThrowNew ) (TYPE_1__**,int *,char const*) ;int (* DeleteLocalRef ) (TYPE_1__**,int *) ;int * (* FindClass ) (TYPE_1__**,char const*) ;int (* ExceptionClear ) (TYPE_1__**) ;int * (* ExceptionOccurred ) (TYPE_1__**) ;scalar_t__ (* ExceptionCheck ) (TYPE_1__**) ;} ;
typedef TYPE_1__* JNIEnv ;


 int FUNC_0 (char*,char const*,...) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_1__**) ;
 int * FUNC_3 (TYPE_1__**) ;
 int FUNC_4 (TYPE_1__**) ;
 int FUNC_5 (TYPE_1__**,int *) ;
 int * FUNC_6 (TYPE_1__**,char const*) ;
 scalar_t__ FUNC_7 (TYPE_1__**,int *,char const*) ;
 int FUNC_8 (TYPE_1__**,int *) ;

int FUNC_9(JNIEnv* VAR_1, const char* VAR_2, const char* VAR_3)
{
    if ((*VAR_1)->ExceptionCheck(VAR_1)) {
        jthrowable VAR_4 = (*VAR_1)->ExceptionOccurred(VAR_1);
        (*VAR_1)->ExceptionClear(VAR_1);

        if (VAR_4 != ((void*)0)) {
            FUNC_1("Discarding pending exception (%s) to throw", VAR_2);
            (*VAR_1)->DeleteLocalRef(VAR_1, VAR_4);
        }
    }

    jclass VAR_5 = (*VAR_1)->FindClass(VAR_1, VAR_2);
    if (VAR_5 == ((void*)0)) {
        FUNC_0("Unable to find exception class %s", VAR_2);

        goto fail;
    }

    if ((*VAR_1)->ThrowNew(VAR_1, VAR_5, VAR_3) != VAR_0) {
        FUNC_0("Failed throwing '%s' '%s'", VAR_2, VAR_3);

        goto fail;
    }

    return 0;
fail:
    if (VAR_5)
        (*VAR_1)->DeleteLocalRef(VAR_1, VAR_5);
    return -1;
}
