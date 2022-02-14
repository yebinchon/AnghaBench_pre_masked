
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int abort_request; scalar_t__ audio_stream; scalar_t__ video_stream; scalar_t__ subtitle_stream; struct TYPE_7__* filename; int * handle; scalar_t__ sub_convert_ctx; scalar_t__ img_convert_ctx; int play_mutex; int accurate_seek_mutex; int continue_read_thread; int video_accurate_seek_cond; int audio_accurate_seek_cond; int subpq; int sampq; int pictq; int subtitleq; int audioq; int videoq; int video_refresh_tid; int ic; int read_tid; } ;
typedef TYPE_1__ VideoState ;
struct TYPE_9__ {struct TYPE_9__* img_path; scalar_t__ frame_img_codec_ctx; scalar_t__ frame_img_convert_ctx; } ;
struct TYPE_8__ {TYPE_1__* is; TYPE_5__* get_img_info; scalar_t__ soundtouch_enable; } ;
typedef TYPE_2__ FFPlayer ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_5__**) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (scalar_t__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_2__*,scalar_t__) ;
 int FUNC_13 (scalar_t__) ;

__attribute__((used)) static void FUNC_14(FFPlayer *VAR_1)
{
    VideoState *VAR_2 = VAR_1->is;

    VAR_2->abort_request = 1;
    FUNC_10(&VAR_2->videoq);
    FUNC_10(&VAR_2->audioq);
    FUNC_5(((void*)0), VAR_0, "wait for read_tid\n");
    FUNC_2(VAR_2->read_tid, ((void*)0));


    if (VAR_2->audio_stream >= 0)
        FUNC_12(VAR_1, VAR_2->audio_stream);
    if (VAR_2->video_stream >= 0)
        FUNC_12(VAR_1, VAR_2->video_stream);
    if (VAR_2->subtitle_stream >= 0)
        FUNC_12(VAR_1, VAR_2->subtitle_stream);

    FUNC_7(&VAR_2->ic);

    FUNC_5(((void*)0), VAR_0, "wait for video_refresh_tid\n");
    FUNC_2(VAR_2->video_refresh_tid, ((void*)0));

    FUNC_11(&VAR_2->videoq);
    FUNC_11(&VAR_2->audioq);
    FUNC_11(&VAR_2->subtitleq);


    FUNC_8(&VAR_2->pictq);
    FUNC_8(&VAR_2->sampq);
    FUNC_8(&VAR_2->subpq);
    FUNC_0(VAR_2->audio_accurate_seek_cond);
    FUNC_0(VAR_2->video_accurate_seek_cond);
    FUNC_0(VAR_2->continue_read_thread);
    FUNC_1(VAR_2->accurate_seek_mutex);
    FUNC_1(VAR_2->play_mutex);

    FUNC_13(VAR_2->img_convert_ctx);
    if (VAR_1->get_img_info) {
        if (VAR_1->get_img_info->frame_img_convert_ctx) {
            FUNC_13(VAR_1->get_img_info->frame_img_convert_ctx);
        }
        if (VAR_1->get_img_info->frame_img_codec_ctx) {
            FUNC_6(&VAR_1->get_img_info->frame_img_codec_ctx);
        }
        FUNC_4(&VAR_1->get_img_info->img_path);
        FUNC_4(&VAR_1->get_img_info);
    }
    FUNC_3(VAR_2->filename);
    FUNC_3(VAR_2);
    VAR_1->is = ((void*)0);
}
