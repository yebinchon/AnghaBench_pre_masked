
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float pf_playback_rate; int pf_playback_rate_changed; } ;
typedef TYPE_1__ FFPlayer ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,char*,float) ;

void FUNC_1(FFPlayer *VAR_1, float VAR_2)
{
    if (!VAR_1)
        return;

    FUNC_0(VAR_1, VAR_0, "Playback rate: %f\n", VAR_2);
    VAR_1->pf_playback_rate = VAR_2;
    VAR_1->pf_playback_rate_changed = 1;
}
