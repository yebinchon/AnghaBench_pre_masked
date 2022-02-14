
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int msg_queue; int vf_mutex; int af_mutex; int meta; int pipeline; int node_vdec; int aout; int vout; int * is; } ;
typedef TYPE_1__ FFPlayer ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;

void FUNC_11(FFPlayer *VAR_1)
{
    if (!VAR_1)
        return;

    if (VAR_1->is) {
        FUNC_4(((void*)0), VAR_0, "ffp_destroy_ffplayer: force stream_close()");
        FUNC_10(VAR_1);
        VAR_1->is = ((void*)0);
    }

    FUNC_2(&VAR_1->vout);
    FUNC_0(&VAR_1->aout);
    FUNC_7(&VAR_1->node_vdec);
    FUNC_6(&VAR_1->pipeline);
    FUNC_8(&VAR_1->meta);
    FUNC_5(VAR_1);

    FUNC_1(&VAR_1->af_mutex);
    FUNC_1(&VAR_1->vf_mutex);

    FUNC_9(&VAR_1->msg_queue);


    FUNC_3(VAR_1);
}
