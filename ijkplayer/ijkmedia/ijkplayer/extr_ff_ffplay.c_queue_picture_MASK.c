
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_16__ ;


typedef int uint8_t ;
typedef scalar_t__ int64_t ;
struct TYPE_23__ {int first_frame_decoded; int first_frame_decoded_time; } ;
struct TYPE_21__ {scalar_t__ abort_request; } ;
struct TYPE_24__ {int video_accurate_seek_req; scalar_t__ seek_pos; double accurate_seek_vframe_pts; scalar_t__ accurate_seek_start_time; scalar_t__ audio_stream; scalar_t__ accurate_seek_aframe_pts; TYPE_3__ viddec; int pictq; TYPE_1__ videoq; int accurate_seek_mutex; int video_accurate_seek_cond; int abort_request; scalar_t__ audio_accurate_seek_req; int audio_accurate_seek_cond; int drop_vframe_count; int seek_req; } ;
typedef TYPE_4__ VideoState ;
struct TYPE_22__ {int den; int num; } ;
struct TYPE_27__ {scalar_t__ width; scalar_t__ height; scalar_t__ format; TYPE_2__ sample_aspect_ratio; int linesize; scalar_t__ data; int pict_type; } ;
struct TYPE_26__ {scalar_t__ accurate_seek_timeout; scalar_t__ enable_accurate_seek; TYPE_4__* is; } ;
struct TYPE_25__ {scalar_t__ width; scalar_t__ height; scalar_t__ format; double pts; double duration; int serial; int frame; TYPE_2__ sar; TYPE_16__* bmp; scalar_t__ pos; scalar_t__ allocated; scalar_t__ uploaded; } ;
struct TYPE_20__ {int sar_den; int sar_num; } ;
typedef TYPE_5__ Frame ;
typedef TYPE_6__ FFPlayer ;
typedef TYPE_7__ AVFrame ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_16__*,TYPE_7__*) ;
 int FUNC_7 (TYPE_16__*) ;
 int FUNC_8 (TYPE_16__*) ;
 int FUNC_9 (TYPE_6__*,scalar_t__) ;
 int FUNC_10 (int ,TYPE_7__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int ,int const**,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_14 (int *,int ,char*,...) ;
 int FUNC_15 (int) ;
 int VAR_7 ;
 int FUNC_16 (int) ;
 int FUNC_17 (TYPE_6__*,int ) ;
 int FUNC_18 (TYPE_6__*,int ,int) ;
 int FUNC_19 (TYPE_6__*,int ,scalar_t__,scalar_t__) ;
 TYPE_5__* FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (double) ;
 int VAR_8 ;
 scalar_t__ FUNC_23 (scalar_t__) ;
 int FUNC_24 (char*,int,double) ;

__attribute__((used)) static int FUNC_25(FFPlayer *VAR_9, AVFrame *VAR_10, double VAR_11, double VAR_12, int64_t VAR_13, int VAR_14)
{
    VideoState *VAR_15 = VAR_9->is;
    Frame *VAR_16;
    int VAR_17 = 0;
    int64_t VAR_18 = 0;
    int64_t VAR_19 = 0;
    int64_t VAR_20 = 0;

    int64_t VAR_21 = 0;
    int64_t VAR_22 = 0;

    if (VAR_9->enable_accurate_seek && VAR_15->video_accurate_seek_req && !VAR_15->seek_req) {
        if (!FUNC_22(VAR_11)) {
            VAR_18 = VAR_15->seek_pos;
            VAR_15->accurate_seek_vframe_pts = VAR_11 * 1000 * 1000;
            VAR_20 = FUNC_23((int64_t)(VAR_11 * 1000 * 1000) - VAR_15->seek_pos);
            if ((VAR_11 * 1000 * 1000 < VAR_15->seek_pos) || VAR_20 > VAR_6) {
                VAR_19 = FUNC_12() / 1000;
                if (VAR_15->drop_vframe_count == 0) {
                    FUNC_4(VAR_15->accurate_seek_mutex);
                    if (VAR_15->accurate_seek_start_time <= 0 && (VAR_15->audio_stream < 0 || VAR_15->audio_accurate_seek_req)) {
                        VAR_15->accurate_seek_start_time = VAR_19;
                    }
                    FUNC_5(VAR_15->accurate_seek_mutex);
                    FUNC_14(((void*)0), VAR_1, "video accurate_seek start, is->seek_pos=%lld, pts=%lf, is->accurate_seek_time = %lld\n", VAR_15->seek_pos, VAR_11, VAR_15->accurate_seek_start_time);
                }
                VAR_15->drop_vframe_count++;

                while (VAR_15->audio_accurate_seek_req && !VAR_15->abort_request) {
                    int64_t VAR_23 = VAR_15->accurate_seek_aframe_pts ;
                    VAR_21 = VAR_23 - VAR_11 * 1000 * 1000;
                    VAR_22 = VAR_23 - VAR_15->seek_pos;

                    if (VAR_21 > -100 * 1000 && VAR_22 < 0) {
                        break;
                    } else {
                        FUNC_15(20 * 1000);
                    }
                    VAR_19 = FUNC_12() / 1000;
                    if ((VAR_19 - VAR_15->accurate_seek_start_time) > VAR_9->accurate_seek_timeout) {
                        break;
                    }
                }

                if ((VAR_19 - VAR_15->accurate_seek_start_time) <= VAR_9->accurate_seek_timeout) {
                    return 1;
                } else {
                    FUNC_14(((void*)0), VAR_2, "video accurate_seek is error, is->drop_vframe_count=%d, now = %lld, pts = %lf\n", VAR_15->drop_vframe_count, VAR_19, VAR_11);
                    VAR_17 = 1;
                }
            } else {
                FUNC_14(((void*)0), VAR_1, "video accurate_seek is ok, is->drop_vframe_count =%d, is->seek_pos=%lld, pts=%lf\n", VAR_15->drop_vframe_count, VAR_15->seek_pos, VAR_11);
                if (VAR_18 == VAR_15->seek_pos) {
                    VAR_15->drop_vframe_count = 0;
                    FUNC_4(VAR_15->accurate_seek_mutex);
                    VAR_15->video_accurate_seek_req = 0;
                    FUNC_1(VAR_15->audio_accurate_seek_cond);
                    if (VAR_18 == VAR_15->seek_pos && VAR_15->audio_accurate_seek_req && !VAR_15->abort_request) {
                        FUNC_2(VAR_15->video_accurate_seek_cond, VAR_15->accurate_seek_mutex, VAR_9->accurate_seek_timeout);
                    } else {
                        FUNC_18(VAR_9, VAR_3, (int)(VAR_11 * 1000));
                    }
                    if (VAR_18 != VAR_15->seek_pos && !VAR_15->abort_request) {
                        VAR_15->video_accurate_seek_req = 1;
                        FUNC_5(VAR_15->accurate_seek_mutex);
                        return 1;
                    }

                    FUNC_5(VAR_15->accurate_seek_mutex);
                }
            }
        } else {
            VAR_17 = 1;
        }

        if (VAR_17) {
            VAR_15->drop_vframe_count = 0;
            FUNC_4(VAR_15->accurate_seek_mutex);
            VAR_15->video_accurate_seek_req = 0;
            FUNC_1(VAR_15->audio_accurate_seek_cond);
            if (VAR_15->audio_accurate_seek_req && !VAR_15->abort_request) {
                FUNC_2(VAR_15->video_accurate_seek_cond, VAR_15->accurate_seek_mutex, VAR_9->accurate_seek_timeout);
            } else {
                if (!FUNC_22(VAR_11)) {
                    FUNC_18(VAR_9, VAR_3, (int)(VAR_11 * 1000));
                } else {
                    FUNC_18(VAR_9, VAR_3, 0);
                }
            }
            FUNC_5(VAR_15->accurate_seek_mutex);
        }
        VAR_15->accurate_seek_start_time = 0;
        VAR_17 = 0;
        VAR_15->accurate_seek_vframe_pts = 0;
    }






    if (!(VAR_16 = FUNC_20(&VAR_15->pictq)))
        return -1;

    VAR_16->sar = VAR_10->sample_aspect_ratio;





    if (!VAR_16->bmp || !VAR_16->allocated ||
        VAR_16->width != VAR_10->width ||
        VAR_16->height != VAR_10->height ||
        VAR_16->format != VAR_10->format) {

        if (VAR_16->width != VAR_10->width || VAR_16->height != VAR_10->height)
            FUNC_19(VAR_9, VAR_5, VAR_10->width, VAR_10->height);

        VAR_16->allocated = 0;
        VAR_16->width = VAR_10->width;
        VAR_16->height = VAR_10->height;
        VAR_16->format = VAR_10->format;



        FUNC_9(VAR_9, VAR_10->format);

        if (VAR_15->videoq.abort_request)
            return -1;
    }


    if (VAR_16->bmp) {

        FUNC_7(VAR_16->bmp);
        if (FUNC_6(VAR_16->bmp, VAR_10) < 0) {
            FUNC_14(((void*)0), VAR_0, "Cannot initialize the conversion context\n");
            FUNC_16(1);
        }

        FUNC_8(VAR_16->bmp);

        VAR_16->pts = VAR_11;
        VAR_16->duration = VAR_12;
        VAR_16->pos = VAR_13;
        VAR_16->serial = VAR_14;
        VAR_16->sar = VAR_10->sample_aspect_ratio;
        VAR_16->bmp->sar_num = VAR_16->sar.num;
        VAR_16->bmp->sar_den = VAR_16->sar.den;




        FUNC_21(&VAR_15->pictq);
        if (!VAR_15->viddec.first_frame_decoded) {
            FUNC_0("Video: first frame decoded\n");
            FUNC_17(VAR_9, VAR_4);
            VAR_15->viddec.first_frame_decoded_time = FUNC_3();
            VAR_15->viddec.first_frame_decoded = 1;
        }
    }
    return 0;
}
