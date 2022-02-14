
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xcb_visualtype_t ;
typedef int xcb_drawable_t ;
typedef int gint ;
typedef int cairo_t ;
typedef int cairo_surface_t ;
struct TYPE_3__ {int pango_desc; } ;
struct TYPE_4__ {int height; TYPE_1__ specific; } ;
typedef int PangoLayout ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int ,int *,int,int) ;
 int VAR_4 ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int *,int *,int*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,char const*,size_t) ;
 int FUNC_15 (int *,char const*,size_t) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *,int ) ;
 TYPE_2__* VAR_9 ;

__attribute__((used)) static void FUNC_18(const char *VAR_10, size_t VAR_11,
                            xcb_drawable_t VAR_12, xcb_visualtype_t *VAR_13, int VAR_14, int VAR_15,
                            int VAR_16, bool VAR_17) {


    cairo_surface_t *VAR_18 = FUNC_6(VAR_4, VAR_12,
                                                        VAR_13, VAR_14 + VAR_16, VAR_15 + VAR_9->height);
    cairo_t *VAR_19 = FUNC_0(VAR_18);
    PangoLayout *VAR_20 = FUNC_7(VAR_19);
    gint VAR_21;

    FUNC_13(VAR_20, VAR_9->specific.pango_desc);
    FUNC_16(VAR_20, VAR_16 * VAR_2);
    FUNC_17(VAR_20, VAR_3);
    FUNC_12(VAR_20, VAR_1);

    if (VAR_17)
        FUNC_14(VAR_20, VAR_10, VAR_11);
    else
        FUNC_15(VAR_20, VAR_10, VAR_11);


    FUNC_3(VAR_19, VAR_0);
    FUNC_4(VAR_19, VAR_8, VAR_7, VAR_6, VAR_5);
    FUNC_10(VAR_19, VAR_20);
    FUNC_11(VAR_20, ((void*)0), &VAR_21);

    int VAR_22 = (VAR_21 - VAR_9->height) / 2;
    FUNC_2(VAR_19, VAR_14, VAR_15 - VAR_22);
    FUNC_9(VAR_19, VAR_20);


    FUNC_8(VAR_20);
    FUNC_1(VAR_19);
    FUNC_5(VAR_18);
}
