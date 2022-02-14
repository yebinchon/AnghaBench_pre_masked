
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int width; int height; int format; } ;
struct TYPE_10__ {scalar_t__ hal_format; int (* render ) (TYPE_3__*,TYPE_1__*) ;} ;
struct TYPE_9__ {scalar_t__ w; scalar_t__ h; int format; } ;
typedef TYPE_1__ SDL_VoutOverlay ;
typedef TYPE_2__ AndroidHalFourccDescriptor ;
typedef TYPE_3__ ANativeWindow_Buffer ;
typedef int ANativeWindow ;


 int FUNC_0 (char*,int,int,char*,int,int,int,char*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_3__*,int *) ;
 int FUNC_6 (int *,int,int,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__,int) ;
 TYPE_2__* FUNC_9 (int) ;
 int FUNC_10 (TYPE_3__*,TYPE_1__*) ;

int FUNC_11(ANativeWindow *VAR_0, SDL_VoutOverlay *VAR_1)
{
    int VAR_2;

    if (!VAR_0)
        return -1;

    if (!VAR_1) {
        FUNC_1("SDL_Android_NativeWindow_display_l: NULL overlay");
        return -1;
    }

    if (VAR_1->w <= 0 || VAR_1->h <= 0) {
        FUNC_1("SDL_Android_NativeWindow_display_l: invalid overlay dimensions(%d, %d)", VAR_1->w, VAR_1->h);
        return -1;
    }

    int VAR_3 = FUNC_4(VAR_0);
    int VAR_4 = FUNC_3(VAR_0);
    int VAR_5 = FUNC_2(VAR_0);
    int VAR_6 = FUNC_8(VAR_1->w, 2);
    int VAR_7 = FUNC_8(VAR_1->h, 2);

    AndroidHalFourccDescriptor *VAR_8 = FUNC_9(VAR_1->format);
    if (!VAR_8) {
        FUNC_1("SDL_Android_NativeWindow_display_l: unknown overlay format: %d", VAR_1->format);
        return -1;
    }

    AndroidHalFourccDescriptor *VAR_9 = FUNC_9(VAR_5);
    if (!VAR_9 || VAR_9->hal_format != VAR_8->hal_format) {
        FUNC_0("ANativeWindow_setBuffersGeometry: w=%d, h=%d, f=%.4s(0x%x) => w=%d, h=%d, f=%.4s(0x%x)",
            VAR_3, VAR_4, (char*) &VAR_5, VAR_5,
            VAR_6, VAR_7, (char*) &VAR_1->format, VAR_1->format);
        VAR_2 = FUNC_6(VAR_0, VAR_6, VAR_7, VAR_8->hal_format);
        if (VAR_2 < 0) {
            FUNC_1("SDL_Android_NativeWindow_display_l: ANativeWindow_setBuffersGeometry: failed %d", VAR_2);
            return VAR_2;
        }

        if (!VAR_9) {
            FUNC_1("SDL_Android_NativeWindow_display_l: unknown hal format %d", VAR_5);
            return -1;
        }
    }

    ANativeWindow_Buffer VAR_10;
    VAR_2 = FUNC_5(VAR_0, &VAR_10, ((void*)0));
    if (VAR_2 < 0) {
        FUNC_1("SDL_Android_NativeWindow_display_l: ANativeWindow_lock: failed %d", VAR_2);
        return VAR_2;
    }

    if (VAR_10.width != VAR_6 || VAR_10.height != VAR_7) {
        FUNC_1("unexpected native window buffer (%p)(w:%d, h:%d, fmt:'%.4s'0x%x), expecting (w:%d, h:%d, fmt:'%.4s'0x%x)",
            VAR_0,
            VAR_10.width, VAR_10.height, (char*)&VAR_10.format, VAR_10.format,
            VAR_6, VAR_7, (char*)&VAR_1->format, VAR_1->format);

        FUNC_7(VAR_0);
        FUNC_6(VAR_0, VAR_6, VAR_7, VAR_8->hal_format);
        return -1;
    }

    int VAR_11 = VAR_9->render(&VAR_10, VAR_1);
    if (VAR_11 < 0) {


    }

    VAR_2 = FUNC_7(VAR_0);
    if (VAR_2 < 0) {
        FUNC_1("SDL_Android_NativeWindow_display_l: ANativeWindow_unlockAndPost: failed %d", VAR_2);
        return VAR_2;
    }

    return VAR_11;
}
