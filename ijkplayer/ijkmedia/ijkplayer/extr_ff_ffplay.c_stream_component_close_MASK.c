
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int audio_stream; int video_stream; int subtitle_stream; int * subtitle_st; int * video_st; int * audio_st; int subdec; int subpq; int viddec; int pictq; int rdft_bits; int * rdft; int rdft_data; int * audio_buf; int audio_buf1_size; int audio_buf1; int swr_ctx; int auddec; int sampq; TYPE_4__* ic; } ;
typedef TYPE_2__ VideoState ;
struct TYPE_11__ {int codec_type; } ;
struct TYPE_10__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_9__ {int aout; TYPE_2__* is; } ;
struct TYPE_7__ {int discard; TYPE_5__* codecpar; } ;
typedef TYPE_3__ FFPlayer ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVCodecParameters ;


 int VAR_0 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(FFPlayer *VAR_1, int VAR_2)
{
    VideoState *VAR_3 = VAR_1->is;
    AVFormatContext *VAR_4 = VAR_3->ic;
    AVCodecParameters *VAR_5;

    if (VAR_2 < 0 || VAR_2 >= VAR_4->nb_streams)
        return;
    VAR_5 = VAR_4->streams[VAR_2]->codecpar;

    switch (VAR_5->codec_type) {
    case 130:
        FUNC_3(&VAR_3->auddec, &VAR_3->sampq);
        FUNC_0(VAR_1->aout);

        FUNC_4(&VAR_3->auddec);
        FUNC_5(&VAR_3->swr_ctx);
        FUNC_1(&VAR_3->audio_buf1);
        VAR_3->audio_buf1_size = 0;
        VAR_3->audio_buf = ((void*)0);
        break;
    case 128:
        FUNC_3(&VAR_3->viddec, &VAR_3->pictq);
        FUNC_4(&VAR_3->viddec);
        break;
    case 129:
        FUNC_3(&VAR_3->subdec, &VAR_3->subpq);
        FUNC_4(&VAR_3->subdec);
        break;
    default:
        break;
    }

    VAR_4->streams[VAR_2]->discard = VAR_0;
    switch (VAR_5->codec_type) {
    case 130:
        VAR_3->audio_st = ((void*)0);
        VAR_3->audio_stream = -1;
        break;
    case 128:
        VAR_3->video_st = ((void*)0);
        VAR_3->video_stream = -1;
        break;
    case 129:
        VAR_3->subtitle_st = ((void*)0);
        VAR_3->subtitle_stream = -1;
        break;
    default:
        break;
    }
}
