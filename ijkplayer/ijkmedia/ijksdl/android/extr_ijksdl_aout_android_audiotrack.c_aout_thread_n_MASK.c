
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {TYPE_2__* opaque; } ;
struct TYPE_5__ {void* userdata; int (* callback ) (void*,int *,int) ;} ;
struct TYPE_6__ {int need_flush; int wakeup_mutex; int speed; scalar_t__ speed_changed; int right_volume; int left_volume; scalar_t__ need_set_volume; scalar_t__ pause_on; int abort_request; int wakeup_cond; int * buffer; TYPE_1__ spec; int * atrack; } ;
typedef int (* SDL_AudioCallback ) (void*,int *,int) ;
typedef TYPE_2__ SDL_Aout_Opaque ;
typedef TYPE_3__ SDL_Aout ;
typedef int SDL_Android_AudioTrack ;
typedef int JNIEnv ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int *,int ,int ) ;
 int FUNC_7 (int *,int *,int *,int) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_0 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(JNIEnv *VAR_1, SDL_Aout *VAR_2)
{
    SDL_Aout_Opaque *VAR_3 = VAR_2->opaque;
    SDL_Android_AudioTrack *VAR_4 = VAR_3->atrack;
    SDL_AudioCallback VAR_5 = VAR_3->spec.callback;
    void *VAR_6 = VAR_3->spec.userdata;
    uint8_t *VAR_7 = VAR_3->buffer;
    int VAR_8 = 256;

    FUNC_12(VAR_4);
    FUNC_12(VAR_7);

    FUNC_10(VAR_0);

    if (!VAR_3->abort_request && !VAR_3->pause_on)
        FUNC_4(VAR_1, VAR_4);

    while (!VAR_3->abort_request) {
        FUNC_9(VAR_3->wakeup_mutex);
        if (!VAR_3->abort_request && VAR_3->pause_on) {
            FUNC_3(VAR_1, VAR_4);
            while (!VAR_3->abort_request && VAR_3->pause_on) {
                FUNC_8(VAR_3->wakeup_cond, VAR_3->wakeup_mutex, 1000);
            }
            if (!VAR_3->abort_request && !VAR_3->pause_on) {
                if (VAR_3->need_flush) {
                    VAR_3->need_flush = 0;
                    FUNC_1(VAR_1, VAR_4);
                }
                FUNC_4(VAR_1, VAR_4);
            }
        }
        if (VAR_3->need_flush) {
            VAR_3->need_flush = 0;
            FUNC_1(VAR_1, VAR_4);
        }
        if (VAR_3->need_set_volume) {
            VAR_3->need_set_volume = 0;
            FUNC_6(VAR_1, VAR_4, VAR_3->left_volume, VAR_3->right_volume);
        }
        if (VAR_3->speed_changed) {
            VAR_3->speed_changed = 0;
            FUNC_5(VAR_1, VAR_4, VAR_3->speed);
        }
        FUNC_11(VAR_3->wakeup_mutex);

        VAR_5(VAR_6, VAR_7, VAR_8);
        if (VAR_3->need_flush) {
            FUNC_1(VAR_1, VAR_4);
            VAR_3->need_flush = 0;
        }

        if (VAR_3->need_flush) {
            VAR_3->need_flush = 0;
            FUNC_1(VAR_1, VAR_4);
        } else {
            int VAR_9 = FUNC_7(VAR_1, VAR_4, VAR_7, VAR_8);
            if (VAR_9 != VAR_8) {
                FUNC_0("AudioTrack: not all data copied %d/%d", (int)VAR_9, (int)VAR_8);
            }
        }


    }

    FUNC_2(VAR_1, VAR_4);
    return 0;
}
