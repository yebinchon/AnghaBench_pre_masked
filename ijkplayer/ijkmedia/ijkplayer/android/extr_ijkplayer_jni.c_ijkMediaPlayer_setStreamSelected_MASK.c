
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jobject ;
typedef int jint ;
typedef int jboolean ;
typedef int JNIEnv ;
typedef int IjkMediaPlayer ;


 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (int *,int *,int *,char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int *,int ,int ) ;
 int * FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(JNIEnv *VAR_1, jobject VAR_2, jint VAR_3, jboolean VAR_4)
{
    IjkMediaPlayer *VAR_5 = FUNC_4(VAR_1, VAR_2);
    int VAR_6 = 0;
    FUNC_1(VAR_5, VAR_1, ((void*)0), "mpjni: setStreamSelected: null mp", VAR_0);

    VAR_6 = FUNC_3(VAR_5, VAR_3, VAR_4);
    if (VAR_6 < 0) {
        FUNC_0("failed to %s %d", VAR_4 ? "select" : "deselect", VAR_3);
        goto LABEL_RETURN;
    }

LABEL_RETURN:
    FUNC_2(&VAR_5);
    return;
}
