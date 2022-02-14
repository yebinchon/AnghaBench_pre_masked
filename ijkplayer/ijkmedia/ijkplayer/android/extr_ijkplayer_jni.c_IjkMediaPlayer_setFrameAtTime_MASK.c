
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef char const* jstring ;
typedef int jobject ;
typedef int jlong ;
typedef int jint ;
struct TYPE_7__ {char* (* GetStringUTFChars ) (TYPE_1__**,char const*,int *) ;int (* ReleaseStringUTFChars ) (TYPE_1__**,char const*,char const*) ;} ;
typedef TYPE_1__* JNIEnv ;
typedef char const IjkMediaPlayer ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*,TYPE_1__**,char*,char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (char const**) ;
 int FUNC_3 (char const*,char const*,int ,int ,int ,int ) ;
 char* FUNC_4 (TYPE_1__**,int ) ;
 char* FUNC_5 (TYPE_1__**,char const*,int *) ;
 int FUNC_6 (TYPE_1__**,char const*,char const*) ;

__attribute__((used)) static void
FUNC_7(JNIEnv *VAR_1, jobject VAR_2, jstring VAR_3, jlong VAR_4, jlong VAR_5, jint VAR_6, jint VAR_7) {
    IjkMediaPlayer *VAR_8 = FUNC_4(VAR_1, VAR_2);
    const char *VAR_9 = ((void*)0);
    FUNC_1(VAR_3, VAR_1, "java/lang/IllegalArgumentException", "mpjni: setFrameAtTime: null path", VAR_0);
    FUNC_1(VAR_8, VAR_1, "java/lang/IllegalStateException", "mpjni: setFrameAtTime: null mp", VAR_0);

    VAR_9 = (*VAR_1)->GetStringUTFChars(VAR_1, VAR_3, ((void*)0) );
    FUNC_1(VAR_9, VAR_1, "java/lang/OutOfMemoryError", "mpjni: setFrameAtTime: path.string oom", VAR_0);

    FUNC_0("setFrameAtTime: path %s", VAR_9);
    FUNC_3(VAR_8, VAR_9, VAR_4, VAR_5, VAR_6, VAR_7);
    (*VAR_1)->ReleaseStringUTFChars(VAR_1, VAR_3, VAR_9);

LABEL_RETURN:
    FUNC_2(&VAR_8);
    return;
}
