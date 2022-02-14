
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jobject ;
typedef int jlong ;
typedef int jint ;
typedef int JNIEnv ;
typedef int IjkMediaPlayer ;


 int FUNC_0 (int *,int *,int *,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 (int *,int ) ;

__attribute__((used)) static jlong
FUNC_4(JNIEnv *VAR_1, jobject VAR_2, jint VAR_3, jlong VAR_4)
{
    jlong VAR_5 = VAR_4;
    IjkMediaPlayer *VAR_6 = FUNC_3(VAR_1, VAR_2);
    FUNC_0(VAR_6, VAR_1, ((void*)0), "mpjni: getPropertyLong: null mp", VAR_0);

    VAR_5 = FUNC_2(VAR_6, VAR_3, VAR_4);

LABEL_RETURN:
    FUNC_1(&VAR_6);
    return VAR_5;
}
