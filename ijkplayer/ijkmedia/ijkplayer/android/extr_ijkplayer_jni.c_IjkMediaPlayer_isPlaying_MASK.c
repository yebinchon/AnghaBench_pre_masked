
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jobject ;
typedef int jboolean ;
typedef int JNIEnv ;
typedef int IjkMediaPlayer ;


 int FUNC_0 (int *,int *,int *,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int **) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ) ;

__attribute__((used)) static jboolean
FUNC_4(JNIEnv *VAR_3, jobject VAR_4)
{
    jboolean VAR_5 = VAR_0;
    IjkMediaPlayer *VAR_6 = FUNC_3(VAR_3, VAR_4);
    FUNC_0(VAR_6, VAR_3, ((void*)0), "mpjni: isPlaying: null mp", VAR_2);

    VAR_5 = FUNC_2(VAR_6) ? VAR_1 : VAR_0;

LABEL_RETURN:
    FUNC_1(&VAR_6);
    return VAR_5;
}
