
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int xcb_void_cookie_t ;
typedef int xcb_query_font_cookie_t ;
struct TYPE_14__ {char const* error_code; } ;
typedef TYPE_3__ xcb_generic_error_t ;
struct TYPE_12__ {TYPE_6__* info; int * table; int id; } ;
struct TYPE_13__ {TYPE_1__ xcb; } ;
struct TYPE_15__ {int type; TYPE_2__ specific; scalar_t__ height; int * pattern; } ;
typedef TYPE_4__ i3Font ;
struct TYPE_16__ {scalar_t__ font_descent; scalar_t__ font_ascent; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char const*) ;
 int * VAR_3 ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (TYPE_4__*,char const*) ;
 void* FUNC_6 (char const*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char const*,char*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int,char const*) ;
 int FUNC_11 (int *,int ) ;
 int * FUNC_12 (TYPE_6__*) ;
 scalar_t__ FUNC_13 (TYPE_6__*) ;
 TYPE_6__* FUNC_14 (int *,int ,int *) ;
 TYPE_3__* FUNC_15 (int *,int ) ;

i3Font FUNC_16(const char *VAR_4, const bool VAR_5) {

    FUNC_4();

    i3Font VAR_6;
    VAR_6.type = VAR_1;
    VAR_6.pattern = ((void*)0);



    if (VAR_3 == ((void*)0)) {
        return VAR_6;
    }


    if (FUNC_7(VAR_4) > FUNC_7("pango:") && !FUNC_8(VAR_4, "pango:", FUNC_7("pango:"))) {
        const char *VAR_7 = VAR_4 + FUNC_7("pango:");
        if (FUNC_5(&VAR_6, VAR_7)) {
            VAR_6.pattern = FUNC_6(VAR_4);
            return VAR_6;
        }
    } else if (FUNC_7(VAR_4) > FUNC_7("xft:") && !FUNC_8(VAR_4, "xft:", FUNC_7("xft:"))) {
        const char *VAR_8 = VAR_4 + FUNC_7("xft:");
        if (FUNC_5(&VAR_6, VAR_8)) {
            VAR_6.pattern = FUNC_6(VAR_4);
            return VAR_6;
        }
    }


    VAR_6.specific.xcb.id = FUNC_9(VAR_3);
    xcb_void_cookie_t VAR_9 = FUNC_10(VAR_3, VAR_6.specific.xcb.id,
                                                          FUNC_7(VAR_4), VAR_4);
    xcb_query_font_cookie_t VAR_10 = FUNC_11(VAR_3, VAR_6.specific.xcb.id);


    xcb_generic_error_t *VAR_11;
    VAR_11 = FUNC_15(VAR_3, VAR_9);


    if (VAR_5 && VAR_11 != ((void*)0)) {
        FUNC_0("Could not open font %s (X error %d). Trying fallback to 'fixed'.\n",
             VAR_4, VAR_11->error_code);
        VAR_4 = "fixed";
        VAR_9 = FUNC_10(VAR_3, VAR_6.specific.xcb.id,
                                            FUNC_7(VAR_4), VAR_4);
        VAR_10 = FUNC_11(VAR_3, VAR_6.specific.xcb.id);


        FUNC_3(VAR_11);
        VAR_11 = FUNC_15(VAR_3, VAR_9);


        if (VAR_11 != ((void*)0)) {
            FUNC_0("Could not open fallback font 'fixed', trying with '-misc-*'.\n");
            VAR_4 = "-misc-*";
            VAR_9 = FUNC_10(VAR_3, VAR_6.specific.xcb.id,
                                                FUNC_7(VAR_4), VAR_4);
            VAR_10 = FUNC_11(VAR_3, VAR_6.specific.xcb.id);

            FUNC_3(VAR_11);
            if ((VAR_11 = FUNC_15(VAR_3, VAR_9)) != ((void*)0))
                FUNC_2(VAR_0, "Could open neither requested font nor fallbacks "
                                   "(fixed or -misc-*): X11 error %d",
                     VAR_11->error_code);
        }
    }
    FUNC_3(VAR_11);

    VAR_6.pattern = FUNC_6(VAR_4);
    FUNC_1("Using X font %s\n", VAR_4);


    if (!(VAR_6.specific.xcb.info = FUNC_14(VAR_3, VAR_10, ((void*)0))))
        FUNC_2(VAR_0, "Could not load font \"%s\"", VAR_4);


    if (FUNC_13(VAR_6.specific.xcb.info) == 0)
        VAR_6.specific.xcb.table = ((void*)0);
    else
        VAR_6.specific.xcb.table = FUNC_12(VAR_6.specific.xcb.info);


    VAR_6.height = VAR_6.specific.xcb.info->font_ascent + VAR_6.specific.xcb.info->font_descent;


    VAR_6.type = VAR_2;
    return VAR_6;
}
