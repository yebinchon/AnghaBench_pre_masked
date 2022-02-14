
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int overlay_format; TYPE_1__* opaque; } ;
struct TYPE_10__ {scalar_t__ w; scalar_t__ h; int format; } ;
struct TYPE_9__ {int null_native_window_warned; int egl; int * native_window; } ;
typedef TYPE_1__ SDL_Vout_Opaque ;
typedef TYPE_2__ SDL_VoutOverlay ;
typedef TYPE_3__ SDL_Vout ;
typedef int ANativeWindow ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *,TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_2__*) ;







 int VAR_0 ;
 int FUNC_5 (TYPE_2__*,int *,int) ;

__attribute__((used)) static int FUNC_6(SDL_Vout *VAR_1, SDL_VoutOverlay *VAR_2)
{
    SDL_Vout_Opaque *VAR_3 = VAR_1->opaque;
    ANativeWindow *VAR_4 = VAR_3->native_window;

    if (!VAR_4) {
        if (!VAR_3->null_native_window_warned) {
            VAR_3->null_native_window_warned = 1;
            FUNC_1("func_display_overlay_l: NULL native_window");
        }
        return -1;
    } else {
        VAR_3->null_native_window_warned = 1;
    }

    if (!VAR_2) {
        FUNC_0("func_display_overlay_l: NULL overlay");
        return -1;
    }

    if (VAR_2->w <= 0 || VAR_2->h <= 0) {
        FUNC_0("func_display_overlay_l: invalid overlay dimensions(%d, %d)", VAR_2->w, VAR_2->h);
        return -1;
    }

    switch(VAR_2->format) {
    case 128: {

        FUNC_3(VAR_3->egl);
        return FUNC_5(VAR_2, ((void*)0), 1);
    }
    case 131:
    case 134:
    case 133: {

        if (VAR_3->egl)
            return FUNC_2(VAR_3->egl, VAR_4, VAR_2);
        break;
    }
    case 129:
    case 132:
    case 130: {

        if (VAR_1->overlay_format == VAR_0 && VAR_3->egl)
            return FUNC_2(VAR_3->egl, VAR_4, VAR_2);
        break;
    }
    }


    FUNC_3(VAR_3->egl);
    return FUNC_4(VAR_4, VAR_2);
}
