
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef scalar_t__ int64_t ;
struct TYPE_19__ {scalar_t__ num; scalar_t__ den; } ;
struct TYPE_25__ {scalar_t__ profile; scalar_t__ level; scalar_t__ format; int codec_type; scalar_t__ width; scalar_t__ height; scalar_t__ sample_rate; scalar_t__ channel_layout; TYPE_3__ sample_aspect_ratio; int codec_id; } ;
struct TYPE_24__ {char const* value; } ;
struct TYPE_23__ {scalar_t__ duration; scalar_t__ start_time; scalar_t__ bit_rate; int nb_streams; TYPE_6__** streams; TYPE_1__* iformat; } ;
struct TYPE_21__ {scalar_t__ num; scalar_t__ den; } ;
struct TYPE_20__ {int den; int num; } ;
struct TYPE_18__ {int den; int num; } ;
struct TYPE_22__ {int metadata; TYPE_5__ avg_frame_rate; TYPE_4__ r_frame_rate; TYPE_2__ sample_aspect_ratio; TYPE_9__* codecpar; } ;
struct TYPE_17__ {char const* name; } ;
struct TYPE_16__ {char const* long_name; } ;
typedef int IjkMediaMeta ;
typedef TYPE_6__ AVStream ;
typedef TYPE_7__ AVFormatContext ;
typedef TYPE_8__ AVDictionaryEntry ;
typedef TYPE_9__ AVCodecParameters ;
typedef TYPE_10__ AVCodec ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 char const* VAR_25 ;
 char const* VAR_26 ;
 char const* VAR_27 ;
 char const* VAR_28 ;
 TYPE_8__* FUNC_0 (int ,char*,int *,int ) ;
 char const* FUNC_1 (scalar_t__) ;
 char* FUNC_2 (TYPE_10__ const*,scalar_t__) ;
 TYPE_10__* FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (int *,int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int **) ;
 int FUNC_9 (int *,int ,scalar_t__) ;
 int FUNC_10 (int *,int ,char const*) ;

void FUNC_11(IjkMediaMeta *VAR_29, AVFormatContext *VAR_30)
{
    if (!VAR_29 || !VAR_30)
        return;

    if (VAR_30->iformat && VAR_30->iformat->name)
        FUNC_10(VAR_29, VAR_12, VAR_30->iformat->name);

    if (VAR_30->duration != VAR_0)
        FUNC_9(VAR_29, VAR_11, VAR_30->duration);

    if (VAR_30->start_time != VAR_0)
        FUNC_9(VAR_29, VAR_20, VAR_30->start_time);

    if (VAR_30->bit_rate)
        FUNC_9(VAR_29, VAR_3, VAR_30->bit_rate);

    IjkMediaMeta *VAR_31 = ((void*)0);
    for (int VAR_32 = 0; VAR_32 < VAR_30->nb_streams; VAR_32++) {
        if (!VAR_31)
            FUNC_8(&VAR_31);

        AVStream *VAR_33 = VAR_30->streams[VAR_32];
        if (!VAR_33 || !VAR_33->codecpar)
            continue;

        VAR_31 = FUNC_7();
        if (!VAR_31)
            continue;

        AVCodecParameters *VAR_34 = VAR_33->codecpar;
        const char *VAR_35 = FUNC_4(VAR_34->codec_id);
        if (VAR_35)
            FUNC_10(VAR_31, VAR_7, VAR_35);
        if (VAR_34->profile != VAR_2) {
            const AVCodec *VAR_36 = FUNC_3(VAR_34->codec_id);
            if (VAR_36) {
                FUNC_9(VAR_31, VAR_10, VAR_34->profile);
                const char *VAR_37 = FUNC_2(VAR_36, VAR_34->profile);
                if (VAR_37)
                    FUNC_10(VAR_31, VAR_9, VAR_37);
                if (VAR_36->long_name)
                    FUNC_10(VAR_31, VAR_6, VAR_36->long_name);
                FUNC_9(VAR_31, VAR_5, VAR_34->level);
                if (VAR_34->format != VAR_1)
                    FUNC_10(VAR_31, VAR_8, FUNC_1(VAR_34->format));
            }
        }

        int64_t VAR_38 = FUNC_5(VAR_34);
        if (VAR_38 > 0) {
            FUNC_9(VAR_31, VAR_3, VAR_38);
        }

        switch (VAR_34->codec_type) {
            case 128: {
                FUNC_10(VAR_31, VAR_23, VAR_28);

                if (VAR_34->width > 0)
                    FUNC_9(VAR_31, VAR_24, VAR_34->width);
                if (VAR_34->height > 0)
                    FUNC_9(VAR_31, VAR_15, VAR_34->height);
                if (VAR_33->sample_aspect_ratio.num > 0 && VAR_33->sample_aspect_ratio.den > 0) {
                    FUNC_9(VAR_31, VAR_19, VAR_34->sample_aspect_ratio.num);
                    FUNC_9(VAR_31, VAR_18, VAR_34->sample_aspect_ratio.den);
                }

                if (VAR_33->avg_frame_rate.num > 0 && VAR_33->avg_frame_rate.den > 0) {
                    FUNC_9(VAR_31, VAR_14, VAR_33->avg_frame_rate.num);
                    FUNC_9(VAR_31, VAR_13, VAR_33->avg_frame_rate.den);
                }
                if (VAR_33->r_frame_rate.num > 0 && VAR_33->r_frame_rate.den > 0) {
                    FUNC_9(VAR_31, VAR_22, VAR_33->avg_frame_rate.num);
                    FUNC_9(VAR_31, VAR_21, VAR_33->avg_frame_rate.den);
                }
                break;
            }
            case 130: {
                FUNC_10(VAR_31, VAR_23, VAR_25);

                if (VAR_34->sample_rate)
                    FUNC_9(VAR_31, VAR_17, VAR_34->sample_rate);
                if (VAR_34->channel_layout)
                    FUNC_9(VAR_31, VAR_4, VAR_34->channel_layout);
                break;
            }
            case 129: {
                FUNC_10(VAR_31, VAR_23, VAR_26);
                break;
            }
            default: {
                FUNC_10(VAR_31, VAR_23, VAR_27);
                break;
            }
        }

        AVDictionaryEntry *VAR_39 = FUNC_0(VAR_33->metadata, "language", ((void*)0), 0);
        if (VAR_39 && VAR_39->value)
            FUNC_10(VAR_31, VAR_16, VAR_39->value);

        FUNC_6(VAR_29, VAR_31);
        VAR_31 = ((void*)0);
    }

    if (!VAR_31)
        FUNC_8(&VAR_31);
}
