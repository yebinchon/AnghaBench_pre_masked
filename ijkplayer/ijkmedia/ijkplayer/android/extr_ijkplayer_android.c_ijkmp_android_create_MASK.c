
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int vout; int pipeline; } ;
struct TYPE_6__ {TYPE_5__* ffplayer; } ;
typedef TYPE_1__ IjkMediaPlayer ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__* FUNC_3 (int (*) (void*)) ;
 int FUNC_4 (TYPE_1__**) ;

IjkMediaPlayer *FUNC_5(int(*VAR_0)(void*))
{
    IjkMediaPlayer *VAR_1 = FUNC_3(VAR_0);
    if (!VAR_1)
        goto fail;

    VAR_1->ffplayer->vout = FUNC_0();
    if (!VAR_1->ffplayer->vout)
        goto fail;

    VAR_1->ffplayer->pipeline = FUNC_1(VAR_1->ffplayer);
    if (!VAR_1->ffplayer->pipeline)
        goto fail;

    FUNC_2(VAR_1->ffplayer->pipeline, VAR_1->ffplayer->vout);

    return VAR_1;

fail:
    FUNC_4(&VAR_1);
    return ((void*)0);
}
