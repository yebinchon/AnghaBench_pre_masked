
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int jobject ;
struct TYPE_2__ {int mutex; } ;
typedef int JNIEnv ;
typedef int IjkMediaPlayer ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,intptr_t) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static IjkMediaPlayer *FUNC_6(JNIEnv* VAR_1, jobject VAR_2, IjkMediaPlayer *VAR_3)
{
    FUNC_4(&VAR_0.mutex);

    IjkMediaPlayer *VAR_4 = (IjkMediaPlayer*) (intptr_t) FUNC_0(VAR_1, VAR_2);
    if (VAR_3) {
        FUNC_3(VAR_3);
    }
    FUNC_1(VAR_1, VAR_2, (intptr_t) VAR_3);

    FUNC_5(&VAR_0.mutex);


    if (VAR_4 != ((void*)0) ) {
        FUNC_2(&VAR_4);
    }

    return VAR_4;
}
