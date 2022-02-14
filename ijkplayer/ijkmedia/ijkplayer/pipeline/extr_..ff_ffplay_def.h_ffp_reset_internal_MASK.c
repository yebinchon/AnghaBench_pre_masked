
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int seek_by_bytes; int fast; int decoder_reorder_pts; int loop; int infinite_buffer; double rdftspeed; int autorotate; int find_stream_info; int start_on_prepared; int sync_av_start; int packet_buffering; int max_fps; float pf_playback_rate; float pf_playback_volume; int dcc; int stat; int * ijkio_inject_opaque; int * inject_opaque; int msg_queue; int ijkio_manager_ctx; int app_ctx; scalar_t__ pf_playback_volume_changed; scalar_t__ pf_playback_rate_changed; scalar_t__ af_changed; scalar_t__ vf_changed; int vdps_sampler; int vfps_sampler; int meta; scalar_t__ render_wait_start; scalar_t__ ijkmeta_delay_init; int * mediacodec_default_name; int * video_mime_type; scalar_t__ async_init_decoder; scalar_t__ no_time_adjust; int * iformat_name; scalar_t__ soundtouch_enable; scalar_t__ opensles; scalar_t__ mediacodec_auto_rotate; scalar_t__ mediacodec_handle_resolution_change; scalar_t__ mediacodec_mpeg2; scalar_t__ mediacodec_hevc; scalar_t__ mediacodec_avc; scalar_t__ mediacodec_all_videos; scalar_t__ vtb_wait_async; scalar_t__ vtb_handle_resolution_change; scalar_t__ vtb_async; scalar_t__ vtb_max_frame_width; scalar_t__ videotoolbox; int pictq_size; scalar_t__ playable_duration_ms; int accurate_seek_timeout; scalar_t__ enable_accurate_seek; scalar_t__ first_video_frame_rendered; scalar_t__ error_count; scalar_t__ error; scalar_t__ auto_resume; scalar_t__ prepared; scalar_t__ last_error; int overlay_format; int subtitle_codec_info; int audio_codec_info; int video_codec_info; scalar_t__ sar_den; scalar_t__ sar_num; int * node_vdec; int * pipeline; int * vout; int * aout; scalar_t__ audio_callback_time; int sws_flags; int * vfilter0; int * afilters; scalar_t__ nb_vfilters; int vfilters_list; int video_codec_name; int audio_codec_name; int show_mode; scalar_t__ seek_at_start; scalar_t__ framedrop; scalar_t__ autoexit; scalar_t__ lowres; scalar_t__ genpts; void* duration; void* start_time; int av_sync_type; scalar_t__ show_status; scalar_t__ display_disable; int wanted_stream_spec; scalar_t__ video_disable; scalar_t__ audio_disable; int input_filename; int swr_preset_opts; int swr_opts; int player_opts; int sws_dict; int codec_opts; int format_opts; } ;
typedef TYPE_1__ FFPlayer ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) inline static void FUNC_11(FFPlayer *VAR_7)
{

    FUNC_4(VAR_7);


    FUNC_2(&VAR_7->format_opts);
    FUNC_2(&VAR_7->codec_opts);
    FUNC_2(&VAR_7->sws_dict);
    FUNC_2(&VAR_7->player_opts);
    FUNC_2(&VAR_7->swr_opts);
    FUNC_2(&VAR_7->swr_preset_opts);


    FUNC_3(&VAR_7->input_filename);
    VAR_7->audio_disable = 0;
    VAR_7->video_disable = 0;
    FUNC_9(VAR_7->wanted_stream_spec, 0, sizeof(VAR_7->wanted_stream_spec));
    VAR_7->seek_by_bytes = -1;
    VAR_7->display_disable = 0;
    VAR_7->show_status = 0;
    VAR_7->av_sync_type = VAR_1;
    VAR_7->start_time = VAR_0;
    VAR_7->duration = VAR_0;
    VAR_7->fast = 1;
    VAR_7->genpts = 0;
    VAR_7->lowres = 0;
    VAR_7->decoder_reorder_pts = -1;
    VAR_7->autoexit = 0;
    VAR_7->loop = 1;
    VAR_7->framedrop = 0;
    VAR_7->seek_at_start = 0;
    VAR_7->infinite_buffer = -1;
    VAR_7->show_mode = VAR_4;
    FUNC_3(&VAR_7->audio_codec_name);
    FUNC_3(&VAR_7->video_codec_name);
    VAR_7->rdftspeed = 0.02;






    VAR_7->autorotate = 1;
    VAR_7->find_stream_info = 1;

    VAR_7->sws_flags = VAR_5;


    VAR_7->audio_callback_time = 0;


    VAR_7->aout = ((void*)0);
    VAR_7->vout = ((void*)0);
    VAR_7->pipeline = ((void*)0);
    VAR_7->node_vdec = ((void*)0);
    VAR_7->sar_num = 0;
    VAR_7->sar_den = 0;

    FUNC_3(&VAR_7->video_codec_info);
    FUNC_3(&VAR_7->audio_codec_info);
    FUNC_3(&VAR_7->subtitle_codec_info);
    VAR_7->overlay_format = VAR_3;

    VAR_7->last_error = 0;
    VAR_7->prepared = 0;
    VAR_7->auto_resume = 0;
    VAR_7->error = 0;
    VAR_7->error_count = 0;
    VAR_7->start_on_prepared = 1;
    VAR_7->first_video_frame_rendered = 0;
    VAR_7->sync_av_start = 1;
    VAR_7->enable_accurate_seek = 0;
    VAR_7->accurate_seek_timeout = VAR_2;

    VAR_7->playable_duration_ms = 0;

    VAR_7->packet_buffering = 1;
    VAR_7->pictq_size = VAR_6;
    VAR_7->max_fps = 31;

    VAR_7->videotoolbox = 0;
    VAR_7->vtb_max_frame_width = 0;
    VAR_7->vtb_async = 0;
    VAR_7->vtb_handle_resolution_change = 0;
    VAR_7->vtb_wait_async = 0;

    VAR_7->mediacodec_all_videos = 0;
    VAR_7->mediacodec_avc = 0;
    VAR_7->mediacodec_hevc = 0;
    VAR_7->mediacodec_mpeg2 = 0;
    VAR_7->mediacodec_handle_resolution_change = 0;
    VAR_7->mediacodec_auto_rotate = 0;

    VAR_7->opensles = 0;
    VAR_7->soundtouch_enable = 0;

    VAR_7->iformat_name = ((void*)0);

    VAR_7->no_time_adjust = 0;
    VAR_7->async_init_decoder = 0;
    VAR_7->video_mime_type = ((void*)0);
    VAR_7->mediacodec_default_name = ((void*)0);
    VAR_7->ijkmeta_delay_init = 0;
    VAR_7->render_wait_start = 0;

    FUNC_8(VAR_7->meta);

    FUNC_0(&VAR_7->vfps_sampler);
    FUNC_0(&VAR_7->vdps_sampler);


    VAR_7->vf_changed = 0;
    VAR_7->af_changed = 0;
    VAR_7->pf_playback_rate = 1.0f;
    VAR_7->pf_playback_rate_changed = 0;
    VAR_7->pf_playback_volume = 1.0f;
    VAR_7->pf_playback_volume_changed = 0;

    FUNC_1(&VAR_7->app_ctx);
    FUNC_7(&VAR_7->ijkio_manager_ctx);

    FUNC_10(&VAR_7->msg_queue);

    VAR_7->inject_opaque = ((void*)0);
    VAR_7->ijkio_inject_opaque = ((void*)0);
    FUNC_6(&VAR_7->stat);
    FUNC_5(&VAR_7->dcc);
}
