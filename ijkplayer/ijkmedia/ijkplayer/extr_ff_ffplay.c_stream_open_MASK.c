
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int serial; } ;
struct TYPE_17__ {int serial; } ;
struct TYPE_14__ {int audio_clock_serial; int audio_volume; int pause_req; int initialized_decoder; int abort_request; void* video_refresh_tid; void* continue_read_thread; TYPE_6__ videoq; int viddec; void* read_tid; int _read_tid; int _video_refresh_tid; void* accurate_seek_mutex; void* play_mutex; int av_sync_type; scalar_t__ muted; TYPE_7__ extclk; TYPE_6__ audioq; TYPE_7__ audclk; TYPE_7__ vidclk; void* audio_accurate_seek_cond; void* video_accurate_seek_cond; TYPE_6__ subtitleq; int sampq; int subpq; int pictq; int handle; scalar_t__ xleft; scalar_t__ ytop; int * iformat; int filename; } ;
typedef TYPE_1__ VideoState ;
struct TYPE_15__ {int startup_volume; int pipeline; int node_vdec; scalar_t__ mediacodec_mpeg2; scalar_t__ mediacodec_hevc; scalar_t__ mediacodec_avc; scalar_t__ mediacodec_all_videos; scalar_t__ mediacodec_default_name; scalar_t__ video_mime_type; int video_disable; scalar_t__ async_init_decoder; TYPE_1__* is; int start_on_prepared; int av_sync_type; scalar_t__ enable_accurate_seek; int pictq_size; scalar_t__ soundtouch_enable; } ;
typedef TYPE_2__ FFPlayer ;
typedef int AVInputFormat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 () ;
 void* FUNC_1 () ;
 void* FUNC_2 (int *,int ,TYPE_2__*,char*) ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (void*,int *) ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 void* FUNC_6 (int,int ,int) ;
 int FUNC_7 (TYPE_1__**) ;
 int FUNC_8 (int *,int ,char*,int) ;
 TYPE_1__* FUNC_9 (int) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int *,int *,TYPE_6__*,void*) ;
 int FUNC_12 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_13 (int *,TYPE_6__*,int ,int) ;
 int FUNC_14 () ;
 int FUNC_15 (TYPE_7__*,int *) ;
 scalar_t__ FUNC_16 (TYPE_6__*) ;
 int VAR_5 ;
 int FUNC_17 (TYPE_2__*) ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 int VAR_6 ;

__attribute__((used)) static VideoState *FUNC_19(FFPlayer *VAR_7, const char *VAR_8, AVInputFormat *VAR_9)
{
    FUNC_5(!VAR_7->is);
    VideoState *VAR_10;

    VAR_10 = FUNC_9(sizeof(VideoState));
    if (!VAR_10)
        return ((void*)0);
    VAR_10->filename = FUNC_10(VAR_8);
    if (!VAR_10->filename)
        goto fail;
    VAR_10->iformat = VAR_9;
    VAR_10->ytop = 0;
    VAR_10->xleft = 0;







    if (FUNC_13(&VAR_10->pictq, &VAR_10->videoq, VAR_7->pictq_size, 1) < 0)
        goto fail;
    if (FUNC_13(&VAR_10->subpq, &VAR_10->subtitleq, VAR_4, 0) < 0)
        goto fail;
    if (FUNC_13(&VAR_10->sampq, &VAR_10->audioq, VAR_2, 1) < 0)
        goto fail;

    if (FUNC_16(&VAR_10->videoq) < 0 ||
        FUNC_16(&VAR_10->audioq) < 0 ||
        FUNC_16(&VAR_10->subtitleq) < 0)
        goto fail;

    if (!(VAR_10->continue_read_thread = FUNC_0())) {
        FUNC_8(((void*)0), VAR_0, "SDL_CreateCond(): %s\n", FUNC_3());
        goto fail;
    }

    if (!(VAR_10->video_accurate_seek_cond = FUNC_0())) {
        FUNC_8(((void*)0), VAR_0, "SDL_CreateCond(): %s\n", FUNC_3());
        VAR_7->enable_accurate_seek = 0;
    }

    if (!(VAR_10->audio_accurate_seek_cond = FUNC_0())) {
        FUNC_8(((void*)0), VAR_0, "SDL_CreateCond(): %s\n", FUNC_3());
        VAR_7->enable_accurate_seek = 0;
    }

    FUNC_15(&VAR_10->vidclk, &VAR_10->videoq.serial);
    FUNC_15(&VAR_10->audclk, &VAR_10->audioq.serial);
    FUNC_15(&VAR_10->extclk, &VAR_10->extclk.serial);
    VAR_10->audio_clock_serial = -1;
    if (VAR_7->startup_volume < 0)
        FUNC_8(((void*)0), VAR_1, "-volume=%d < 0, setting to 0\n", VAR_7->startup_volume);
    if (VAR_7->startup_volume > 100)
        FUNC_8(((void*)0), VAR_1, "-volume=%d > 100, setting to 100\n", VAR_7->startup_volume);
    VAR_7->startup_volume = FUNC_6(VAR_7->startup_volume, 0, 100);
    VAR_7->startup_volume = FUNC_6(VAR_3 * VAR_7->startup_volume / 100, 0, VAR_3);
    VAR_10->audio_volume = VAR_7->startup_volume;
    VAR_10->muted = 0;
    VAR_10->av_sync_type = VAR_7->av_sync_type;

    VAR_10->play_mutex = FUNC_1();
    VAR_10->accurate_seek_mutex = FUNC_1();
    VAR_7->is = VAR_10;
    VAR_10->pause_req = !VAR_7->start_on_prepared;

    VAR_10->video_refresh_tid = FUNC_2(&VAR_10->_video_refresh_tid, VAR_6, VAR_7, "ff_vout");
    if (!VAR_10->video_refresh_tid) {
        FUNC_7(&VAR_7->is);
        return ((void*)0);
    }

    VAR_10->initialized_decoder = 0;
    VAR_10->read_tid = FUNC_2(&VAR_10->_read_tid, VAR_5, VAR_7, "ff_read");
    if (!VAR_10->read_tid) {
        FUNC_8(((void*)0), VAR_0, "SDL_CreateThread(): %s\n", FUNC_3());
        goto fail;
    }

    if (VAR_7->async_init_decoder && !VAR_7->video_disable && VAR_7->video_mime_type && FUNC_18(VAR_7->video_mime_type) > 0
                    && VAR_7->mediacodec_default_name && FUNC_18(VAR_7->mediacodec_default_name) > 0) {
        if (VAR_7->mediacodec_all_videos || VAR_7->mediacodec_avc || VAR_7->mediacodec_hevc || VAR_7->mediacodec_mpeg2) {
            FUNC_11(&VAR_10->viddec, ((void*)0), &VAR_10->videoq, VAR_10->continue_read_thread);
            VAR_7->node_vdec = FUNC_12(VAR_7->pipeline, VAR_7);
        }
    }
    VAR_10->initialized_decoder = 1;

    return VAR_10;
fail:
    VAR_10->initialized_decoder = 1;
    VAR_10->abort_request = 1;
    if (VAR_10->video_refresh_tid)
        FUNC_4(VAR_10->video_refresh_tid, ((void*)0));
    FUNC_17(VAR_7);
    return ((void*)0);
}
