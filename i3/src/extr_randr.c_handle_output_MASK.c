
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int xcb_timestamp_t ;
typedef scalar_t__ xcb_randr_output_t ;
typedef int xcb_randr_get_screen_resources_current_reply_t ;
struct TYPE_16__ {scalar_t__ crtc; } ;
typedef TYPE_2__ xcb_randr_get_output_info_reply_t ;
struct TYPE_15__ {scalar_t__ x; scalar_t__ y; scalar_t__ width; scalar_t__ height; } ;
struct TYPE_17__ {int primary; int active; int to_be_disabled; int changed; TYPE_1__ rect; int height; int width; int y; int x; int names_head; scalar_t__ id; } ;
typedef TYPE_3__ xcb_randr_get_crtc_info_reply_t ;
typedef int xcb_randr_get_crtc_info_cookie_t ;
typedef int xcb_connection_t ;
struct output_name {struct output_name* name; } ;
struct TYPE_18__ {scalar_t__ output; } ;
typedef TYPE_3__ Output ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct output_name*) ;
 int FUNC_2 (int *) ;
 struct output_name* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct output_name*,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,TYPE_3__*,int ) ;
 int FUNC_8 (int *,TYPE_3__*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_9 (TYPE_3__*) ;
 TYPE_3__* FUNC_10 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_11 (TYPE_3__*) ;
 int VAR_2 ;
 TYPE_8__* VAR_3 ;
 int FUNC_12 (struct output_name**,char*,int ,int ) ;
 void* FUNC_13 (int,int) ;
 int FUNC_14 (scalar_t__*,int ) ;
 int FUNC_15 (int *,scalar_t__,int ) ;
 TYPE_3__* FUNC_16 (int *,int ,int *) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_19(xcb_connection_t *VAR_4, xcb_randr_output_t VAR_5,
                          xcb_randr_get_output_info_reply_t *VAR_6,
                          xcb_timestamp_t VAR_7,
                          xcb_randr_get_screen_resources_current_reply_t *VAR_8) {

    xcb_randr_get_crtc_info_reply_t *VAR_9;

    Output *VAR_10 = FUNC_10(VAR_5);
    bool VAR_11 = (VAR_10 != ((void*)0));
    if (!VAR_11) {
        VAR_10 = FUNC_13(1, sizeof(Output));
        FUNC_4(&VAR_10->names_head);
    }
    VAR_10->id = VAR_5;
    VAR_10->primary = (VAR_3 && VAR_3->output == VAR_5);
    while (!FUNC_2(&VAR_10->names_head)) {
        FUNC_1(FUNC_3(&VAR_10->names_head)->name);
        struct output_name *VAR_12 = FUNC_3(&VAR_10->names_head);
        FUNC_6(&VAR_10->names_head, VAR_1);
        FUNC_1(VAR_12);
    }
    struct output_name *VAR_13 = FUNC_13(1, sizeof(struct output_name));
    FUNC_12(&VAR_13->name, "%.*s",
              FUNC_18(VAR_6),
              FUNC_17(VAR_6));
    FUNC_5(&VAR_10->names_head, VAR_13, VAR_1);

    FUNC_0("found output with name %s\n", FUNC_11(VAR_10));




    if (VAR_6->crtc == VAR_0) {
        if (!VAR_11) {
            if (VAR_10->primary)
                FUNC_7(&VAR_2, VAR_10, VAR_2);
            else
                FUNC_8(&VAR_2, VAR_10, VAR_2);
        } else if (VAR_10->active)
            VAR_10->to_be_disabled = 1;
        return;
    }

    xcb_randr_get_crtc_info_cookie_t VAR_14;
    VAR_14 = FUNC_15(VAR_4, VAR_6->crtc, VAR_7);
    if ((VAR_9 = FUNC_16(VAR_4, VAR_14, ((void*)0))) == ((void*)0)) {
        FUNC_0("Skipping output %s: could not get CRTC (%p)\n",
             FUNC_11(VAR_10), VAR_9);
        FUNC_9(VAR_10);
        return;
    }

    bool VAR_15 = FUNC_14(&(VAR_10->rect.x), VAR_9->x) |
                   FUNC_14(&(VAR_10->rect.y), VAR_9->y) |
                   FUNC_14(&(VAR_10->rect.width), VAR_9->width) |
                   FUNC_14(&(VAR_10->rect.height), VAR_9->height);
    FUNC_9(VAR_9);
    VAR_10->active = (VAR_10->rect.width != 0 && VAR_10->rect.height != 0);
    if (!VAR_10->active) {
        FUNC_0("width/height 0/0, disabling output\n");
        return;
    }

    FUNC_0("mode: %dx%d+%d+%d\n", VAR_10->rect.width, VAR_10->rect.height,
         VAR_10->rect.x, VAR_10->rect.y);




    if (!VAR_15 || !VAR_11) {
        if (!VAR_11) {
            if (VAR_10->primary)
                FUNC_7(&VAR_2, VAR_10, VAR_2);
            else
                FUNC_8(&VAR_2, VAR_10, VAR_2);
        }
        return;
    }

    VAR_10->changed = 1;
}
