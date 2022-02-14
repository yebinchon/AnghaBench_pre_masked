
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int jobject ;
struct TYPE_5__ {TYPE_1__* ffplayer; } ;
struct TYPE_4__ {int pipeline; int vout; } ;
typedef int JNIEnv ;
typedef TYPE_2__ IjkMediaPlayer ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;

void FUNC_2(JNIEnv *VAR_0, IjkMediaPlayer *VAR_1, jobject VAR_2)
{
    if (!VAR_1 || !VAR_1->ffplayer || !VAR_1->ffplayer->vout)
        return;

    FUNC_0(VAR_0, VAR_1->ffplayer->vout, VAR_2);
    FUNC_1(VAR_0, VAR_1->ffplayer->pipeline, VAR_2);
}
