
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jobject ;
typedef int JNIEnv ;
typedef int IjkMediaPlayer ;


 int FUNC_0 (int *,int *,char*,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(JNIEnv *VAR_1, jobject VAR_2)
{
    IjkMediaPlayer *VAR_3 = FUNC_3(VAR_1, VAR_2);
    FUNC_0(VAR_3, VAR_1, "java/lang/IllegalStateException", "mpjni: pause: null mp", VAR_0);

    FUNC_2(VAR_3);

LABEL_RETURN:
    FUNC_1(&VAR_3);
}
