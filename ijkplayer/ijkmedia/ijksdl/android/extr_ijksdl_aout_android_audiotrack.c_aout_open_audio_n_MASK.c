
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* opaque; } ;
struct TYPE_11__ {scalar_t__ channels; scalar_t__ format; } ;
struct TYPE_12__ {scalar_t__ buffer_size; int pause_on; int * atrack; int audio_tid; int _audio_tid; scalar_t__ abort_request; int audio_session_id; int buffer; TYPE_1__ spec; } ;
typedef TYPE_1__ SDL_AudioSpec ;
typedef TYPE_2__ SDL_Aout_Opaque ;
typedef TYPE_3__ SDL_Aout ;
typedef int JNIEnv ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int * FUNC_7 (int *,TYPE_1__ const*) ;
 int FUNC_8 (int *,int ,TYPE_3__*,char*) ;
 int VAR_0 ;
 int FUNC_9 (TYPE_1__ const*) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static int FUNC_11(JNIEnv *VAR_1, SDL_Aout *VAR_2, const SDL_AudioSpec *VAR_3, SDL_AudioSpec *VAR_4)
{
    FUNC_9(VAR_3);
    SDL_Aout_Opaque *VAR_5 = VAR_2->opaque;

    VAR_5->spec = *VAR_3;
    VAR_5->atrack = FUNC_7(VAR_1, VAR_3);
    if (!VAR_5->atrack) {
        FUNC_0("aout_open_audio_n: failed to new AudioTrcak()");
        return -1;
    }

    VAR_5->buffer_size = FUNC_5(VAR_5->atrack);
    if (VAR_5->buffer_size <= 0) {
        FUNC_0("aout_open_audio_n: failed to getMinBufferSize()");
        FUNC_3(VAR_1, VAR_5->atrack);
        VAR_5->atrack = ((void*)0);
        return -1;
    }

    VAR_5->buffer = FUNC_10(VAR_5->buffer_size);
    if (!VAR_5->buffer) {
        FUNC_0("aout_open_audio_n: failed to allocate buffer");
        FUNC_3(VAR_1, VAR_5->atrack);
        VAR_5->atrack = ((void*)0);
        return -1;
    }

    if (VAR_4) {
        FUNC_6(VAR_5->atrack, VAR_4);
        FUNC_2("audio target format fmt:0x%x, channel:0x%x", (int)VAR_4->format, (int)VAR_4->channels);
    }

    VAR_5->audio_session_id = FUNC_4(VAR_1, VAR_5->atrack);
    FUNC_1("audio_session_id = %d\n", VAR_5->audio_session_id);

    VAR_5->pause_on = 1;
    VAR_5->abort_request = 0;
    VAR_5->audio_tid = FUNC_8(&VAR_5->_audio_tid, VAR_0, VAR_2, "ff_aout_android");
    if (!VAR_5->audio_tid) {
        FUNC_0("aout_open_audio_n: failed to create audio thread");
        FUNC_3(VAR_1, VAR_5->atrack);
        VAR_5->atrack = ((void*)0);
        return -1;
    }

    return 0;
}
