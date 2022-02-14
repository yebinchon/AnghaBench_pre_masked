
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int meta; int * av_class; void* vf_mutex; void* af_mutex; int msg_queue; } ;
typedef TYPE_1__ FFPlayer ;


 int VAR_0 ;
 void* FUNC_0 () ;
 int FUNC_1 (int *,int ,char*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;

FFPlayer *FUNC_9()
{
    FUNC_1(((void*)0), VAR_0, "av_version_info: %s\n", FUNC_4());
    FUNC_1(((void*)0), VAR_0, "ijk_version_info: %s\n", FUNC_6());

    FFPlayer* VAR_2 = (FFPlayer*) FUNC_2(sizeof(FFPlayer));
    if (!VAR_2)
        return ((void*)0);

    FUNC_8(&VAR_2->msg_queue);
    VAR_2->af_mutex = FUNC_0();
    VAR_2->vf_mutex = FUNC_0();

    FUNC_5(VAR_2);
    VAR_2->av_class = &VAR_1;
    VAR_2->meta = FUNC_7();

    FUNC_3(VAR_2);

    return VAR_2;
}
