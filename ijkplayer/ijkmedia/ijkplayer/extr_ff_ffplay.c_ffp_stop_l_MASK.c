
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int abort_request; scalar_t__ accurate_seek_mutex; scalar_t__ video_accurate_seek_cond; scalar_t__ audio_accurate_seek_cond; scalar_t__ video_accurate_seek_req; scalar_t__ audio_accurate_seek_req; } ;
typedef TYPE_1__ VideoState ;
struct TYPE_7__ {scalar_t__ enable_accurate_seek; int msg_queue; TYPE_1__* is; } ;
typedef TYPE_2__ FFPlayer ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int) ;

int FUNC_6(FFPlayer *VAR_0)
{
    FUNC_3(VAR_0);
    VideoState *VAR_1 = VAR_0->is;
    if (VAR_1) {
        VAR_1->abort_request = 1;
        FUNC_5(VAR_0, 1);
    }

    FUNC_4(&VAR_0->msg_queue);
    if (VAR_0->enable_accurate_seek && VAR_1 && VAR_1->accurate_seek_mutex
        && VAR_1->audio_accurate_seek_cond && VAR_1->video_accurate_seek_cond) {
        FUNC_1(VAR_1->accurate_seek_mutex);
        VAR_1->audio_accurate_seek_req = 0;
        VAR_1->video_accurate_seek_req = 0;
        FUNC_0(VAR_1->audio_accurate_seek_cond);
        FUNC_0(VAR_1->video_accurate_seek_cond);
        FUNC_2(VAR_1->accurate_seek_mutex);
    }
    return 0;
}
