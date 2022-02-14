
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int (* SetPlayState ) (TYPE_5__**,int ) ;} ;
struct TYPE_10__ {int (* Clear ) (TYPE_4__**) ;} ;
struct TYPE_9__ {int (* Destroy ) (TYPE_3__**) ;} ;
struct TYPE_8__ {TYPE_1__* opaque; } ;
struct TYPE_7__ {int abort_request; int buffer; TYPE_3__** slPlayerObject; TYPE_5__** slPlayItf; int * slVolumeItf; TYPE_4__** slBufferQueueItf; int * audio_tid; int wakeup_mutex; int wakeup_cond; } ;
typedef TYPE_1__ SDL_Aout_Opaque ;
typedef TYPE_2__ SDL_Aout ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_0 ;
 int FUNC_5 (void**) ;
 int FUNC_6 (TYPE_5__**,int ) ;
 int FUNC_7 (TYPE_4__**) ;
 int FUNC_8 (TYPE_3__**) ;

__attribute__((used)) static void FUNC_9(SDL_Aout *VAR_1)
{
    FUNC_0("aout_close_audio()\n");
    SDL_Aout_Opaque *VAR_2 = VAR_1->opaque;
    if (!VAR_2)
        return;

    FUNC_2(VAR_2->wakeup_mutex);
    VAR_2->abort_request = 1;
    FUNC_1(VAR_2->wakeup_cond);
    FUNC_3(VAR_2->wakeup_mutex);

    FUNC_4(VAR_2->audio_tid, ((void*)0));
    VAR_2->audio_tid = ((void*)0);

    if (VAR_2->slPlayItf)
        (*VAR_2->slPlayItf)->SetPlayState(VAR_2->slPlayItf, VAR_0);
    if (VAR_2->slBufferQueueItf)
        (*VAR_2->slBufferQueueItf)->Clear(VAR_2->slBufferQueueItf);

    if (VAR_2->slBufferQueueItf)
        VAR_2->slBufferQueueItf = ((void*)0);
    if (VAR_2->slVolumeItf)
        VAR_2->slVolumeItf = ((void*)0);
    if (VAR_2->slPlayItf)
        VAR_2->slPlayItf = ((void*)0);

    if (VAR_2->slPlayerObject) {
        (*VAR_2->slPlayerObject)->Destroy(VAR_2->slPlayerObject);
        VAR_2->slPlayerObject = ((void*)0);
    }

    FUNC_5((void **)&VAR_2->buffer);
}
