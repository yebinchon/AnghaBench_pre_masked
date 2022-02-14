
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jobject ;
typedef int jlong ;
typedef int JNIEnv ;
typedef int IjkMediaPlayer ;


 int FUNC_0 (int *,int *,int *,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ) ;

__attribute__((used)) static jlong
FUNC_4(JNIEnv *VAR_1, jobject VAR_2)
{
    jlong VAR_3 = 0;
    IjkMediaPlayer *VAR_4 = FUNC_3(VAR_1, VAR_2);
    FUNC_0(VAR_4, VAR_1, ((void*)0), "mpjni: getCurrentPosition: null mp", VAR_0);

    VAR_3 = FUNC_2(VAR_4);

LABEL_RETURN:
    FUNC_1(&VAR_4);
    return VAR_3;
}
