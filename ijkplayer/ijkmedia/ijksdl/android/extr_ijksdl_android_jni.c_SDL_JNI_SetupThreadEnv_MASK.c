
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int jint ;
struct TYPE_4__ {scalar_t__ (* AttachCurrentThread ) (TYPE_1__**,int **,int *) ;} ;
typedef TYPE_1__* JavaVM ;
typedef int JNIEnv ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__**,int **,int *) ;

jint FUNC_5(JNIEnv **VAR_5)
{
    JavaVM *VAR_6 = VAR_1;
    if (!VAR_6) {
        FUNC_0("SDL_JNI_GetJvm: AttachCurrentThread: NULL jvm");
        return -1;
    }

    FUNC_2(&VAR_2, VAR_4);

    JNIEnv *VAR_7 = (JNIEnv*) FUNC_1(VAR_3);
    if (VAR_7) {
        *VAR_5 = VAR_7;
        return 0;
    }

    if ((*VAR_6)->AttachCurrentThread(VAR_6, &VAR_7, ((void*)0)) == VAR_0) {
        FUNC_3(VAR_3, VAR_7);
        *VAR_5 = VAR_7;
        return 0;
    }

    return -1;
}
