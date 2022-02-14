
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int video_stream; int audio_stream; int subtitle_stream; TYPE_4__* ic; } ;
typedef TYPE_2__ VideoState ;
struct TYPE_14__ {int codec_type; } ;
struct TYPE_13__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_12__ {TYPE_2__* is; } ;
struct TYPE_10__ {TYPE_5__* codecpar; } ;
typedef TYPE_3__ FFPlayer ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVCodecParameters ;





 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int,int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int) ;

int FUNC_3(FFPlayer *VAR_1, int VAR_2, int VAR_3)
{
    VideoState *VAR_4 = VAR_1->is;
    AVFormatContext *VAR_5 = ((void*)0);
    AVCodecParameters *VAR_6 = ((void*)0);
    if (!VAR_4)
        return -1;
    VAR_5 = VAR_4->ic;
    if (!VAR_5)
        return -1;

    if (VAR_2 < 0 || VAR_2 >= VAR_5->nb_streams) {
        FUNC_0(VAR_1, VAR_0, "invalid stream index %d >= stream number (%d)\n", VAR_2, VAR_5->nb_streams);
        return -1;
    }

    VAR_6 = VAR_5->streams[VAR_2]->codecpar;

    if (VAR_3) {
        switch (VAR_6->codec_type) {
            case 128:
                if (VAR_2 != VAR_4->video_stream && VAR_4->video_stream >= 0)
                    FUNC_1(VAR_1, VAR_4->video_stream);
                break;
            case 130:
                if (VAR_2 != VAR_4->audio_stream && VAR_4->audio_stream >= 0)
                    FUNC_1(VAR_1, VAR_4->audio_stream);
                break;
            case 129:
                if (VAR_2 != VAR_4->subtitle_stream && VAR_4->subtitle_stream >= 0)
                    FUNC_1(VAR_1, VAR_4->subtitle_stream);
                break;
            default:
                FUNC_0(VAR_1, VAR_0, "select invalid stream %d of video type %d\n", VAR_2, VAR_6->codec_type);
                return -1;
        }
        return FUNC_2(VAR_1, VAR_2);
    } else {
        switch (VAR_6->codec_type) {
            case 128:
                if (VAR_2 == VAR_4->video_stream)
                    FUNC_1(VAR_1, VAR_4->video_stream);
                break;
            case 130:
                if (VAR_2 == VAR_4->audio_stream)
                    FUNC_1(VAR_1, VAR_4->audio_stream);
                break;
            case 129:
                if (VAR_2 == VAR_4->subtitle_stream)
                    FUNC_1(VAR_1, VAR_4->subtitle_stream);
                break;
            default:
                FUNC_0(VAR_1, VAR_0, "select invalid stream %d of audio type %d\n", VAR_2, VAR_6->codec_type);
                return -1;
        }
        return 0;
    }
}
