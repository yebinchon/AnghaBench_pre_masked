
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float pf_playback_volume; int pf_playback_volume_changed; } ;
typedef TYPE_1__ FFPlayer ;



void FUNC_0(FFPlayer *VAR_0, float VAR_1)
{
    if (!VAR_0)
        return;
    VAR_0->pf_playback_volume = VAR_1;
    VAR_0->pf_playback_volume_changed = 1;
}
