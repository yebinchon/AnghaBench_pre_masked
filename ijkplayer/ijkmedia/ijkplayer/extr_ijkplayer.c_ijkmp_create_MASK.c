
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* msg_loop ) (void*) ;int mutex; int ffplayer; } ;
typedef TYPE_1__ IjkMediaPlayer ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int *) ;

IjkMediaPlayer *FUNC_5(int (*VAR_0)(void*))
{
    IjkMediaPlayer *VAR_1 = (IjkMediaPlayer *) FUNC_3(sizeof(IjkMediaPlayer));
    if (!VAR_1)
        goto fail;

    VAR_1->ffplayer = FUNC_0();
    if (!VAR_1->ffplayer)
        goto fail;

    VAR_1->msg_loop = VAR_0;

    FUNC_2(VAR_1);
    FUNC_4(&VAR_1->mutex, ((void*)0));

    return VAR_1;

    fail:
    FUNC_1(&VAR_1);
    return ((void*)0);
}
