
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xcb_window_t ;
typedef int xcb_visualid_t ;
typedef void* xcb_colormap_t ;
typedef int uint32_t ;
struct con_state {int mapped; int initial; int id; } ;
struct TYPE_10__ {int id; } ;
struct TYPE_9__ {int black_pixel; } ;
struct TYPE_8__ {TYPE_5__ frame; int depth; void* colormap; } ;
struct TYPE_7__ {int member_0; int member_1; int member_2; int member_3; int height; int width; } ;
typedef TYPE_1__ Rect ;
typedef TYPE_2__ Con ;


 int FUNC_0 (int *,struct con_state*,struct con_state*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,struct con_state*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int ,TYPE_1__,int ,int ,int ,int ,int,int,int*) ;
 int FUNC_4 (int ,TYPE_5__*,int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 struct con_state* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 TYPE_4__* VAR_22 ;
 struct con_state* FUNC_7 (int,int) ;
 int VAR_23 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,int ,int ,int ,int ,int,int,char*) ;
 int FUNC_10 (int ,int ,void*,int ,int ) ;
 void* FUNC_11 (int ) ;

void FUNC_12(Con *VAR_24) {



    uint32_t VAR_25 = 0;
    uint32_t VAR_26[5];

    xcb_visualid_t VAR_27 = FUNC_5(VAR_24->depth);
    xcb_colormap_t VAR_28;
    if (VAR_24->depth != VAR_21) {

        VAR_28 = FUNC_11(VAR_15);
        FUNC_10(VAR_15, VAR_3, VAR_28, VAR_20, VAR_27);
        VAR_24->colormap = VAR_28;
    } else {

        VAR_28 = VAR_14;
        VAR_24->colormap = VAR_10;
    }





    VAR_25 |= VAR_4;
    VAR_26[0] = VAR_22->black_pixel;

    VAR_25 |= VAR_5;
    VAR_26[1] = VAR_22->black_pixel;


    VAR_25 |= VAR_8;
    VAR_26[2] = 1;


    VAR_25 |= VAR_7;
    VAR_26[3] = VAR_0 & ~VAR_9;

    VAR_25 |= VAR_6;
    VAR_26[4] = VAR_28;

    Rect VAR_29 = {-15, -15, 10, 10};
    xcb_window_t VAR_30 = FUNC_3(VAR_15, VAR_29, VAR_24->depth, VAR_27, VAR_12, VAR_13, 0, VAR_25, VAR_26);
    FUNC_4(VAR_15, &(VAR_24->frame), VAR_30, FUNC_6(VAR_27), VAR_29.width, VAR_29.height);
    FUNC_9(VAR_15,
                        VAR_11,
                        VAR_24->frame.id,
                        VAR_2,
                        VAR_1,
                        8,
                        (FUNC_8("i3-frame") + 1) * 2,
                        "i3-frame\0i3-frame\0");

    struct con_state *VAR_31 = FUNC_7(1, sizeof(struct con_state));
    VAR_31->id = VAR_24->frame.id;
    VAR_31->mapped = 0;
    VAR_31->initial = 1;
    FUNC_1("Adding window 0x%08x to lists\n", VAR_31->id);
    FUNC_0(&VAR_23, VAR_31, VAR_31);
    FUNC_0(&VAR_19, VAR_31, VAR_18);
    FUNC_2(&VAR_16, VAR_31, VAR_17);
    FUNC_1("adding new state for window id 0x%08x\n", VAR_31->id);
}
