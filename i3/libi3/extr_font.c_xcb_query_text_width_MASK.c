
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int error_code; int overall_width; } ;
typedef TYPE_5__ xcb_query_text_extents_reply_t ;
typedef int xcb_query_text_extents_cookie_t ;
typedef TYPE_5__ xcb_generic_error_t ;
typedef int xcb_char2b_t ;
struct TYPE_13__ {TYPE_2__* info; int id; } ;
struct TYPE_14__ {TYPE_3__ xcb; } ;
struct TYPE_16__ {TYPE_4__ specific; } ;
struct TYPE_11__ {size_t character_width; } ;
struct TYPE_12__ {TYPE_1__ max_bounds; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_5__*) ;
 TYPE_9__* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,size_t,int *) ;
 TYPE_5__* FUNC_3 (int ,int ,TYPE_5__**) ;

__attribute__((used)) static int FUNC_4(const xcb_char2b_t *VAR_3, size_t VAR_4) {

    static bool VAR_5 = 1;
    if (VAR_5) {
        FUNC_0(VAR_2, "Using slow code path for text extents\n");
        VAR_5 = 0;
    }


    xcb_generic_error_t *VAR_6;
    xcb_query_text_extents_cookie_t VAR_7 = FUNC_2(VAR_0,
                                                                    VAR_1->specific.xcb.id, VAR_4, (xcb_char2b_t *)VAR_3);
    xcb_query_text_extents_reply_t *VAR_8 = FUNC_3(VAR_0,
                                                                         VAR_7, &VAR_6);
    if (VAR_8 == ((void*)0)) {


        FUNC_0(VAR_2, "Could not get text extents (X error code %d)\n",
                VAR_6->error_code);
        FUNC_1(VAR_6);
        return VAR_1->specific.xcb.info->max_bounds.character_width * VAR_4;
    }

    int VAR_9 = VAR_8->overall_width;
    FUNC_1(VAR_8);
    return VAR_9;
}
