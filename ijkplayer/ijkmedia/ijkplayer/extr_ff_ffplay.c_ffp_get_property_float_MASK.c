
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float vdps; float vfps; float avdelay; float avdiff; float drop_frame_rate; } ;
struct TYPE_5__ {float pf_playback_rate; float pf_playback_volume; TYPE_1__ stat; } ;
typedef TYPE_2__ FFPlayer ;
float FUNC_0(FFPlayer *VAR_0, int VAR_1, float VAR_2)
{
    switch (VAR_1) {
        case 129:
            return VAR_0 ? VAR_0->stat.vdps : VAR_2;
        case 128:
            return VAR_0 ? VAR_0->stat.vfps : VAR_2;
        case 131:
            return VAR_0 ? VAR_0->pf_playback_rate : VAR_2;
        case 134:
            return VAR_0 ? VAR_0->stat.avdelay : VAR_2;
        case 133:
            return VAR_0 ? VAR_0->stat.avdiff : VAR_2;
        case 130:
            return VAR_0 ? VAR_0->pf_playback_volume : VAR_2;
        case 132:
            return VAR_0 ? VAR_0->stat.drop_frame_rate : VAR_2;
        default:
            return VAR_2;
    }
}
