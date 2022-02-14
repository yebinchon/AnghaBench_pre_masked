
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_15__ ;
typedef struct TYPE_18__ TYPE_13__ ;


struct TYPE_21__ {scalar_t__ nb_packets; } ;
struct TYPE_20__ {scalar_t__ serial; } ;
struct TYPE_18__ {scalar_t__ pkt_serial; } ;
struct TYPE_23__ {double frame_last_filter_delay; scalar_t__ continuous_frame_drops_early; int frame_drops_early; TYPE_2__ videoq; TYPE_1__ vidclk; TYPE_13__ viddec; TYPE_15__* video_st; int ic; } ;
typedef TYPE_4__ VideoState ;
struct TYPE_25__ {double pts; int sample_aspect_ratio; } ;
struct TYPE_22__ {float drop_frame_rate; scalar_t__ decode_frame_count; scalar_t__ drop_frame_count; } ;
struct TYPE_24__ {scalar_t__ framedrop; TYPE_3__ stat; TYPE_4__* is; } ;
struct TYPE_19__ {int time_base; } ;
typedef TYPE_5__ FFPlayer ;
typedef TYPE_6__ AVFrame ;


 double VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 double VAR_3 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int ,TYPE_15__*,TYPE_6__*) ;
 double FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*,TYPE_13__*,TYPE_6__*,int *) ;
 scalar_t__ FUNC_4 (double) ;
 int FUNC_5 (TYPE_5__*) ;
 double FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (double) ;

__attribute__((used)) static int FUNC_9(FFPlayer *VAR_4, AVFrame *VAR_5)
{
    VideoState *VAR_6 = VAR_4->is;
    int VAR_7;

    FUNC_5(VAR_4);
    if ((VAR_7 = FUNC_3(VAR_4, &VAR_6->viddec, VAR_5, ((void*)0))) < 0)
        return -1;

    if (VAR_7) {
        double VAR_8 = VAR_3;

        if (VAR_5->pts != VAR_0)
            VAR_8 = FUNC_2(VAR_6->video_st->time_base) * VAR_5->pts;

        VAR_5->sample_aspect_ratio = FUNC_1(VAR_6->ic, VAR_6->video_st, VAR_5);

        if (VAR_4->framedrop>0 || (VAR_4->framedrop && FUNC_7(VAR_6) != VAR_2)) {
            VAR_4->stat.decode_frame_count++;
            if (VAR_5->pts != VAR_0) {
                double VAR_9 = VAR_8 - FUNC_6(VAR_6);
                if (!FUNC_8(VAR_9) && FUNC_4(VAR_9) < VAR_1 &&
                    VAR_9 - VAR_6->frame_last_filter_delay < 0 &&
                    VAR_6->viddec.pkt_serial == VAR_6->vidclk.serial &&
                    VAR_6->videoq.nb_packets) {
                    VAR_6->frame_drops_early++;
                    VAR_6->continuous_frame_drops_early++;
                    if (VAR_6->continuous_frame_drops_early > VAR_4->framedrop) {
                        VAR_6->continuous_frame_drops_early = 0;
                    } else {
                        VAR_4->stat.drop_frame_count++;
                        VAR_4->stat.drop_frame_rate = (float)(VAR_4->stat.drop_frame_count) / (float)(VAR_4->stat.decode_frame_count);
                        FUNC_0(VAR_5);
                        VAR_7 = 0;
                    }
                }
            }
        }
    }

    return VAR_7;
}
